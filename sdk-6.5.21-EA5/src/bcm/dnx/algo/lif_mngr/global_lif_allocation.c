/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

/** \file global_lif_allocation.c
 *
 * Global lif allocation file.
 *
 *
 * There are three possible types of global lif that require allocation:
 *    ingress only, egress only, and symmetric (ingress == egress). They all share
 *    the same ID range, but symmetric lifs only exist in the intersection of ingress
 *    and egress IDs because it needs to include both.
 *
 * The allocation algorithm layout is this:
 * - We keep three separate resources, one for each of the lif types.
 * - Whenever we update the symmetric lif resource, we also update the ingress and
 *    egress only resources so the resource manager doesn't allocate the same ID.
 * - Whenever we update an egress or ingress only resource, we also update the symmetric
 *    resource for the same reason.
 * - It's easy to see that it's impossible to discern whether both ingress and egress lifs
 *    were allocated or whether a symmetric lif was allocated at a specific ID, because in both
 *    cases all three of the resources will be allocated in this ID.
 *   To solve that, we keep a symmetric indication bitmap for every legal lif ID. If a lif
 *    was allocated a symmetric lif, it's set in the bitmap, and if it was allocated as an egress
 *    or ingress only lif then it's unset.
 */
#ifdef BSL_LOG_MODULE
#error "BSL_LOG_MODULE redefined"
#endif

#define BSL_LOG_MODULE BSL_LS_BCMDNX_LIF
/*************
 * INCLUDES  *
 */
/*
 * {
 */

#include <shared/util.h>
#include <shared/shrextend/shrextend_debug.h>
#include <soc/dnx/dbal/dbal.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_lif.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_l3.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_headers.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_mpls.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/access/lif_mngr_access.h>
#include <shared/utilex/utilex_integer_arithmetic.h>
#include <bcm_int/dnx/algo/lif_mngr/lif_mngr.h>
#include "lif_mngr_internal.h"
#include "global_lif_allocation.h"

/*
 * }
 */
/*************
 * DEFINES   *
 */
/*
 * {
 */

/*
 * Error indication flags returned from dnx_algo_global_lif_id_is_legal.
 *
 * \see
 *      dnx_algo_global_lif_id_is_legal
 * {
 */

/*
 * Given global lif is legal.
 */
#define DNX_ALGO_GLOBAL_LIF_ID_IS_LEGAL             (SAL_BIT(0))
/*
 * Given global lif is out of range on ingress side.
 */
#define DNX_ALGO_GLOBAL_LIF_ID_INGRESS_OUT_OF_RANGE (SAL_BIT(1))
/*
 * Given global lif is out of range on egress_side.
 */
#define DNX_ALGO_GLOBAL_LIF_ID_EGRESS_OUT_OF_RANGE  (SAL_BIT(2))
/*
 * Given global lif is in rif range.
 */
#define DNX_ALGO_GLOBAL_LIF_ID_IN_RIF_RANGE         (SAL_BIT(3))
/*
 * Given global lif is negative.
 */
#define DNX_ALGO_GLOBAL_LIF_ID_IS_NEGATIVE          (SAL_BIT(4))
/*
 * Given global lif should be for l2 gport but it's too large.
 */
#define DNX_ALGO_GLOBAL_LIF_ID_L2_GPORT_OUT_OF_RANGE (SAL_BIT(5))
/*
 * Given global lif should be for php gport but it's too large.
 */
#define DNX_ALGO_GLOBAL_LIF_ID_PHP_GPORT_OUT_OF_RANGE (SAL_BIT(6))
/*
 * }
 */

/*
 * Values of tags for the advanced resource.
 */
#define DNX_ALGO_GLOBAL_LIF_TAG_LIMITED_RANGE_USE       0

#define DNX_ALGO_GLOBAL_LIF_TAG_PHP_RANGE_USE           1

#define DNX_ALGO_GLOBAL_LIF_TAG_LIMITED_RANGE_IGNORE    2
/*
 * Resource names for the resource manager.
 * The names speak for themselves.
 * {
 */
#define DNX_ALGO_GLOBAL_LIF_INGRESS_RESOURCE    "Ingress global lif"

#define DNX_ALGO_GLOBAL_LIF_EGRESS_RESOURCE     "Egress global lif"

#define DNX_ALGO_GLOBAL_LIF_SYMMETRIC_RESOURCE  "Symmetric global lif"

/*
 * }
 */
/*************
 * MACROS    *
 */
/*
 * {
 */

/*
 * }
 */
/*************
 * TYPE DEFS *
 */
/*
 * {
 */

/*
 * }
 */
/*************
 * GLOBALS   *
 */
/*
 * {
 */
/*
 * }
 */
/*************
 * FUNCTIONS *
 */
/*
 * {
 */

/*
 * GLOBAL LIF SW STATE FUNCTIONS - START
 * {
 */

/**
 * \brief
 *   Checks whether the maximum number of global lifs was not exceeded in the device.
 *
 *   While the global lif range is large, that number of global lifs that can actually be allocated
 *   is limited by the size of the tables that they are mapped to, so the resource manager will
 *   never return an out of resource error to indicate we don't have more free HW entries.
 *
 *   The mapping of global to local egress lifs is made in the GLEM table.
 *   Each GLEM entry holds one global lif, so the number of egress global lifs is limited
 *   by the number of entries in the glem.
 *
 *   The number of ingress global lifs is limited by the number of entries in the inlif table,
 *   because every inlif entry holds its own global lif as part of its data. Because we assume
 *   that global lif allocation is called after local inlif allocation, it means that there was
 *   a free local lif. Because of that, we don't check the ingress direction.
 *
 * \see
 *   dnx_algo_global_lif_allocation_verify
 */
shr_error_e
dnx_algo_global_lif_allocation_count_verify(
    int unit,
    uint32 direction_flags)
{
    int count, nof_glem_lines;
    SHR_FUNC_INIT_VARS(unit);

    if (_SHR_IS_FLAG_SET(direction_flags, DNX_ALGO_LIF_EGRESS))
    {
        /*
         * Check egress size. See function header for description.
         */
        SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.egress_global_lif_counter.get(unit, &count));

        SHR_IF_ERR_EXIT(dnx_algo_lif_mngr_nof_glem_lines_get(unit, &nof_glem_lines));

        if (count >= nof_glem_lines)
        {
            SHR_ERR_EXIT(_SHR_E_RESOURCE, "No more egress global lifs available. In use %d out of %d.",
                         count, nof_glem_lines);
        }
    }

    if (_SHR_IS_FLAG_SET(direction_flags, DNX_ALGO_LIF_INGRESS))
    {
        /*
         * Do nothing. See function header for description.
         */
    }

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief
 *      Generic function for updating the global ingress/egress lif counter.
 */
static shr_error_e
dnx_algo_global_lif_allocation_update_count_internal(
    int unit,
    int (*get_func) (int,
                     int *),
    int (*set_func) (int,
                     int),
    int diff)
{
    int count;
    SHR_FUNC_INIT_VARS(unit);

    /*
     * Get old count.
     */
    SHR_IF_ERR_EXIT(get_func(unit, &count));

    /*
     * Calculate new count.
     */
    count += diff;

    SHR_IF_ERR_EXIT(set_func(unit, count));

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief
 *      Updates the global ingress/egress (indicated by direction flags) lif counter
 *      (lif_mngr_db.global_lif_allocation.in/egress_global_lif_counter) by the value
 *      given in diff: 1 for allocation, -1 for deallocation.
 *
 *      Note that the global ingress lif counter is not currently used, but we keep it
 *      in case we'll need it in the future.
 *
 * \see
 *  dnx_algo_global_lif_allocation_count_verify
 */
shr_error_e
dnx_algo_global_lif_allocation_update_count(
    int unit,
    uint32 direction_flags,
    int diff)
{
    SHR_FUNC_INIT_VARS(unit);

    if (_SHR_IS_FLAG_SET(direction_flags, DNX_ALGO_LIF_EGRESS))
    {
        SHR_IF_ERR_EXIT(dnx_algo_global_lif_allocation_update_count_internal(unit,
                                                                             lif_mngr_db.
                                                                             global_lif_allocation.egress_global_lif_counter.
                                                                             get,
                                                                             lif_mngr_db.
                                                                             global_lif_allocation.egress_global_lif_counter.
                                                                             set, diff));
    }

    if (_SHR_IS_FLAG_SET(direction_flags, DNX_ALGO_LIF_INGRESS))
    {
        SHR_IF_ERR_EXIT(dnx_algo_global_lif_allocation_update_count_internal(unit,
                                                                             lif_mngr_db.
                                                                             global_lif_allocation.ingress_global_lif_counter.
                                                                             get,
                                                                             lif_mngr_db.
                                                                             global_lif_allocation.ingress_global_lif_counter.
                                                                             set, diff));
    }

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief
 *     Given a global lif id, returns whether it is a symmetric global lif id (ingress == egress, see
 *     file header).
 *
 *     Note: If it is not, then ingress and egress global lifs are unrelated
 */
shr_error_e
dnx_algo_global_lif_allocation_lif_id_is_symmetric(
    int unit,
    int global_lif,
    uint8 *is_symmetric)
{
    SHR_FUNC_INIT_VARS(unit);

    SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.
                    global_lif_symmetric_indication.bit_get(unit, global_lif, is_symmetric));

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief
 *     Updates a global lif's symmetric indication in the global lif allocation submodule of
 *        the sw state.
 *
 *     For every global lif in the legal range (0-max{max ingress lif, max egress lif})
 *        there is a bit that indicates whether it's symmetric or not. This bit is updated
 *        whenever a symmetric lif is allocated or freed.
 *
 *     Unallocated lifs are considered non symmetric.
 */
static shr_error_e
dnx_algo_global_lif_allocation_update_symmetric_indication(
    int unit,
    int global_lif,
    int is_symmetric)
{
    SHR_FUNC_INIT_VARS(unit);

    if (is_symmetric)
    {
        SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.global_lif_symmetric_indication.bit_set(unit, global_lif));
    }
    else
    {
        SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.global_lif_symmetric_indication.bit_clear(unit, global_lif));
    }

exit:
    SHR_FUNC_EXIT;
}

/*
 * }
 * GLOBAL LIF DATABASE FUNCTIONS - END
 */

/*
 * GLOBAL LIF INTERNAL FUNCTIONS - START
 * {
 */

/**
 * \brief
 *     Check in the resource manager whether the given global outlif ('global_lif') is allocated and
 *     returns a boolean indication (in *is_allocated).
 */
static shr_error_e
dnx_algo_global_egress_lif_internal_is_allocated(
    int unit,
    int global_lif,
    uint8 *is_allocated)
{
    SHR_FUNC_INIT_VARS(unit);

    SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.egress_global_lif.is_allocated(unit, global_lif, is_allocated));

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief
 *     Check in the resource manager whether the given global inlif ('global_lif') is allocated and
 *     returns a boolean indication (in *is_allocated).
 */
static shr_error_e
dnx_algo_global_ingress_lif_internal_is_allocated(
    int unit,
    int global_lif,
    uint8 *is_allocated)
{
    SHR_FUNC_INIT_VARS(unit);

    /*
     *  Check the global inlif resource.
     */
    SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.ingress_global_lif.is_allocated(unit, global_lif, is_allocated));

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief
 *      Check whether the given ingress/egress global lif is legal.
 *
 *      A lif is legal if the following conditions are met:
 *      The lif id is not larger than the maximum ingress/egress lif
 *         (determined by device data).
 *      The lif is not in the rif range (0-nof_rifs). Rifs use the same ID space
 *         as global lifs, so global lifs can't be used in this range.
 */
static shr_error_e
dnx_algo_global_lif_id_is_legal(
    int unit,
    int global_lif,
    uint32 allocation_flags,
    int direction_flags,
    int *legal_flags)
{
    SHR_FUNC_INIT_VARS(unit);

    *legal_flags = 0;

    if (global_lif < 0)
    {
        *legal_flags = DNX_ALGO_GLOBAL_LIF_ID_IS_NEGATIVE;
        /*
         * If lif id is negative then we have nothing else to check.
         */
        SHR_EXIT();
    }

    if (global_lif < dnx_data_l3.rif.nof_rifs_get(unit))
    {
        /*
         * Global lifs can't be in the rif range.
         */

        *legal_flags |= DNX_ALGO_GLOBAL_LIF_ID_IN_RIF_RANGE;
        SHR_EXIT();
    }

    if (_SHR_IS_FLAG_SET(allocation_flags, LIF_MNGR_L2_GPORT_GLOBAL_LIF)
        && (global_lif >= dnx_data_lif.global_lif.nof_global_l2_gport_lifs_get(unit)))
    {
        /*
         * Lif is legal if it's in the legal limited range.
         */
        *legal_flags = DNX_ALGO_GLOBAL_LIF_ID_L2_GPORT_OUT_OF_RANGE;
        SHR_EXIT();
    }

    if (_SHR_IS_FLAG_SET(allocation_flags, LIF_MNGR_PHP_GPORT_GLOBAL_LIF)
        && ((global_lif < (dnx_data_lif.global_lif.nof_global_out_lifs_get(unit) -
                           dnx_data_l3.rif.nof_rifs_get(unit) - dnx_data_mpls.general.nof_php_gport_lif_get(unit)))
            || global_lif >= (dnx_data_lif.global_lif.nof_global_out_lifs_get(unit) -
                              dnx_data_l3.rif.nof_rifs_get(unit))))
    {
        /*
         * Lif is legal if it's in the legal limited range.
         */
        *legal_flags = DNX_ALGO_GLOBAL_LIF_ID_PHP_GPORT_OUT_OF_RANGE;
        SHR_EXIT();
    }

    if (_SHR_IS_FLAG_SET(direction_flags, DNX_ALGO_LIF_INGRESS)
        && (global_lif >= dnx_data_lif.global_lif.nof_global_in_lifs_get(unit)))
    {
        /*
         * Inlif is legal if it's in the legal range.
         */
        *legal_flags |= DNX_ALGO_GLOBAL_LIF_ID_INGRESS_OUT_OF_RANGE;
    }

    if (_SHR_IS_FLAG_SET(direction_flags, DNX_ALGO_LIF_EGRESS)
        && (global_lif >= dnx_data_lif.global_lif.nof_global_out_lifs_get(unit)))
    {
        /*
         * Outlif is legal if it's in the legal range.
         */
        *legal_flags |= DNX_ALGO_GLOBAL_LIF_ID_EGRESS_OUT_OF_RANGE;
    }

    /*
     * If we got here with no error flags, it means the lif is legal.
     */
    if (*legal_flags == 0)
    {
        *legal_flags = DNX_ALGO_GLOBAL_LIF_ID_IS_LEGAL;
    }

exit:
    SHR_FUNC_EXIT;
}

shr_error_e
dnx_algo_global_lif_allocation_verify(
    int unit,
    uint32 allocation_flags,
    uint32 direction_flags,
    global_lif_alloc_info_t * alloc_info,
    int global_lif)
{
    int with_id, is_allocation, is_one_sided_symmetric;
    int is_ingress, is_egress;
    int is_legal_flags;

    SHR_FUNC_INIT_VARS(unit);

    /*
     * This function is called from the allocation and free functions. The flag DNX_ALGO_GLOBAL_LIF_ALLOCATION_DEALLOCATE_VERIFY
     * indicates deallocation operation, so if it's not set, then it's an allocation operation.
     */
    is_allocation = !_SHR_IS_FLAG_SET(allocation_flags, DNX_ALGO_GLOBAL_LIF_ALLOCATION_DEALLOCATE_VERIFY);
    /*
     * If the deallocation flag is set (not allocation), then the ID is always given and we need to verify it.
     */
    with_id = (!is_allocation) || _SHR_IS_FLAG_SET(allocation_flags, DNX_ALGO_RES_ALLOCATE_WITH_ID);

    is_ingress = _SHR_IS_FLAG_SET(direction_flags, DNX_ALGO_LIF_INGRESS);
    is_egress = _SHR_IS_FLAG_SET(direction_flags, DNX_ALGO_LIF_EGRESS);

    is_one_sided_symmetric = _SHR_IS_FLAG_SET(allocation_flags, LIF_MNGR_ONE_SIDED_SYMMETRIC_GLOBAL_LIF);

    if (alloc_info)
    {
        if (alloc_info->bta > dnx_data_lif.global_lif.global_lif_bta_max_val_get(unit))
        {
            SHR_ERR_EXIT(_SHR_E_PARAM, "BTA value %d is ilegal. max possible value %d",
                         alloc_info->bta, dnx_data_lif.global_lif.global_lif_bta_max_val_get(unit));
        }

        if (!with_id && !is_egress && is_ingress && (alloc_info->bta != 0))
        {
            SHR_ERR_EXIT(_SHR_E_PARAM, "BTA value %d for ingress must be 0", alloc_info->bta);
        }
    }

    if (is_one_sided_symmetric)
    {
        /*
         * Check global lif as if it's a symmetric allocation.
         */
        is_ingress = is_egress = TRUE;
    }

    if (is_allocation)
    {
        /*
         *  Verify that there are enough free global lifs.
         */
        SHR_IF_ERR_EXIT(dnx_algo_global_lif_allocation_count_verify(unit, direction_flags));
    }

    /*
     * ` Verify that given id is legal.
     */
    if (with_id)
    {
        /*
         * Verify that given id is legal.
         */
        SHR_IF_ERR_EXIT(dnx_algo_global_lif_id_is_legal
                        (unit, global_lif, allocation_flags, direction_flags, &is_legal_flags));

        if (!_SHR_IS_FLAG_SET(is_legal_flags, DNX_ALGO_GLOBAL_LIF_ID_IS_LEGAL))
        {
            if (_SHR_IS_FLAG_SET(is_legal_flags, DNX_ALGO_GLOBAL_LIF_ID_IS_NEGATIVE))
            {
                LOG_ERROR_EX(BSL_LOG_MODULE,
                             "Given global lif id is negative. Must be a positive number. Given 0x%08x.%s%s%s\r\n",
                             global_lif, EMPTY, EMPTY, EMPTY);
            }
            else if (_SHR_IS_FLAG_SET(is_legal_flags, DNX_ALGO_GLOBAL_LIF_ID_L2_GPORT_OUT_OF_RANGE))
            {
                LOG_ERROR_EX(BSL_LOG_MODULE,
                             "Requested a global lif for l2 gport (mpls or vlan) but given ID is too high. Given 0x%08x but maximum is 0x%08x.%s%s\r\n",
                             global_lif, dnx_data_lif.global_lif.nof_global_l2_gport_lifs_get(unit), EMPTY, EMPTY);

            }
            else if (_SHR_IS_FLAG_SET(is_legal_flags, DNX_ALGO_GLOBAL_LIF_ID_PHP_GPORT_OUT_OF_RANGE))
            {
                LOG_ERROR_EX(BSL_LOG_MODULE,
                             "Requested a global lif for php gport (mpls or vlan) but given ID is out of range. Given 0x%08x but maximum is 0x%08x minimum is 0x%08x.%s\r\n",
                             global_lif,
                             dnx_data_lif.global_lif.nof_global_out_lifs_get(unit) -
                             dnx_data_l3.rif.nof_rifs_get(unit) - 1,
                             dnx_data_lif.global_lif.nof_global_out_lifs_get(unit) -
                             dnx_data_l3.rif.nof_rifs_get(unit) - dnx_data_mpls.general.nof_php_gport_lif_get(unit) - 1,
                             EMPTY);

            }
            else if (_SHR_IS_FLAG_SET(is_legal_flags, DNX_ALGO_GLOBAL_LIF_ID_IN_RIF_RANGE))
            {
                LOG_ERROR_EX(BSL_LOG_MODULE,
                             "Given global lif id is in rif range. Given 0x%08X but minimum is 0x%08X.%s%s\r\n",
                             global_lif, dnx_data_l3.rif.nof_rifs_get(unit), EMPTY, EMPTY);
            }
            else
            {

                if (_SHR_IS_FLAG_SET(is_legal_flags, DNX_ALGO_GLOBAL_LIF_ID_INGRESS_OUT_OF_RANGE))
                {
                    LOG_ERROR_EX(BSL_LOG_MODULE,
                                 "Given global lif id is out of range on ingress side. Given 0x%08x but maximum is 0x%08x.%s%s\r\n",
                                 global_lif, dnx_data_lif.global_lif.nof_global_in_lifs_get(unit), EMPTY, EMPTY);
                }

                if (_SHR_IS_FLAG_SET(is_legal_flags, DNX_ALGO_GLOBAL_LIF_ID_EGRESS_OUT_OF_RANGE))
                {
                    LOG_ERROR_EX(BSL_LOG_MODULE,
                                 "Given global lif id is out of range on egress side. Given 0x%08x but maximum is 0x%08x.%s%s\r\n",
                                 global_lif, dnx_data_lif.global_lif.nof_global_out_lifs_get(unit), EMPTY, EMPTY);
                }
            }

            SHR_IF_ERR_EXIT(_SHR_E_PARAM);
        }
    }

    if (with_id || !is_allocation)
    {
        uint8 is_allocated;
        /*
         * Make sure that global lif wasn't already allocated if allocating, and that it's allocated if freeing.
         * This test is required because we have no cleanup after fail, and the local lif operations are done
         * before the global lif operations. So if the local lif operation succeeds and the global lif
         * operation fails for this reason, the HW may be configured incorrectly.
         */
        if (is_ingress && is_egress)
        {
            SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.symmetric_global_lif.is_allocated(unit,
                                                                                                global_lif,
                                                                                                &is_allocated));
        }
        else if (is_ingress)
        {
            SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.
                            ingress_global_lif.is_allocated(unit, global_lif, &is_allocated));
        }
        else
        {
            SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.
                            egress_global_lif.is_allocated(unit, global_lif, &is_allocated));
        }

        if (is_allocation && is_allocated)
        {
            SHR_ERR_EXIT(_SHR_E_EXISTS, "Asked for global lif 0x%08x WITH_ID, but it's already allocated", global_lif);
        }
        else if (!is_allocation && !is_allocated)
        {
            SHR_ERR_EXIT(_SHR_E_NOT_FOUND, "Asked to free global lif 0x%08x, but it's not allocated", global_lif);
        }
    }

    /*
     *  If deallocate, make sure that the symmetric indication is correct.
     */
    if (!is_allocation)
    {
        uint8 is_symmetric;
        SHR_IF_ERR_EXIT(dnx_algo_global_lif_allocation_lif_id_is_symmetric(unit, global_lif, &is_symmetric));

        if (is_ingress && is_egress && !is_symmetric)
        {
            SHR_ERR_EXIT(_SHR_E_PARAM,
                         "Can't deallocate both sides of an entry that wasn't allocated as a symmetric entry."
                         "is_ingress: %d, is_egress:%d, is_symmetric: %d", is_ingress, is_egress, is_symmetric);
        }
        else if (!(is_ingress && is_egress) && is_symmetric)
        {
            SHR_ERR_EXIT(_SHR_E_PARAM,
                         "Can't deallocate one side of an entry that was allocated as a symmetric entry.");
        }
    }

exit:
    SHR_FUNC_EXIT;
}

static shr_error_e
dnx_algo_global_lif_flags_to_res_mngr_flags(
    int unit,
    uint32 global_lif_flags,
    uint32 *res_mngr_flags)
{
    SHR_FUNC_INIT_VARS(unit);

    *res_mngr_flags = 0;

    if (_SHR_IS_FLAG_SET(global_lif_flags, LIF_MNGR_GLOBAL_LIF_WITH_ID))
    {
        *res_mngr_flags |= DNX_ALGO_RES_ALLOCATE_WITH_ID;
    }

    /*
     * The flag for l2 gport should be passed to the resource manager only if there are more global lifs
     * then l2 gport global lifs, and the advanced algorithm is active.
     */
    if ((dnx_data_lif.global_lif.nof_global_in_lifs_get(unit) >
         dnx_data_lif.global_lif.nof_global_l2_gport_lifs_get(unit))
        && _SHR_IS_FLAG_SET(global_lif_flags, LIF_MNGR_L2_GPORT_GLOBAL_LIF))
    {
        /** this manipulation of flags should be reconsider, better to have all handled in one place:
         *  dnx_algo_global_lif_res_allocate */
        *res_mngr_flags |= LIF_MNGR_L2_GPORT_GLOBAL_LIF;
    }

    if (_SHR_IS_FLAG_SET(global_lif_flags, LIF_MNGR_PHP_GPORT_GLOBAL_LIF))
    {
        *res_mngr_flags |= LIF_MNGR_PHP_GPORT_GLOBAL_LIF;
    }

    SHR_EXIT();

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief
 *     Allocate a symmetric lif:
 *     1. Allocate the lif in the symmetric lif pool.
 *     2. Allocate the same lif WITH_ID in the ingress and egress pools to block non symmetric allocation in this id.
 *          Exception - for one sided symmetric lif, allocate only in its direction.
 *     3. Set symmetric indication for this entry in the internal database.
 *     4. Update lif count for ingress and egress lifs.
 */
static shr_error_e
dnx_algo_global_lif_symmetric_internal_allocate(
    int unit,
    uint32 allocation_flags,
    uint32 direction_flags,
    global_lif_alloc_info_t * alloc_info,
    int *global_lif)
{
    uint32 res_mngr_flags;
    int is_one_sided_symmetric, symmetric_indication;
    SHR_FUNC_INIT_VARS(unit);

    SHR_IF_ERR_EXIT(dnx_algo_global_lif_flags_to_res_mngr_flags(unit, allocation_flags, &res_mngr_flags));

    is_one_sided_symmetric = _SHR_IS_FLAG_SET(allocation_flags, LIF_MNGR_ONE_SIDED_SYMMETRIC_GLOBAL_LIF);

    /*
     *  1. allocate in the symmetric lif pool.
     */
    SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.
                    symmetric_global_lif.allocate_single(unit, res_mngr_flags, alloc_info, global_lif));

    /*
     * 2. Allocate the same lif WITH_ID in the ingress and egress pools to block non symmetric allocation in this id.
     *      Unless it's one sided symmetric, in this case just allocate the relevant direction.
     */
    if (_SHR_IS_FLAG_SET(direction_flags, DNX_ALGO_LIF_EGRESS))
    {
        SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.
                        egress_global_lif.allocate_single(unit, DNX_ALGO_RES_ALLOCATE_WITH_ID, alloc_info, global_lif));
    }

    if (_SHR_IS_FLAG_SET(direction_flags, DNX_ALGO_LIF_INGRESS))
    {
        SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.
                        ingress_global_lif.allocate_single(unit, DNX_ALGO_RES_ALLOCATE_WITH_ID, alloc_info,
                                                           global_lif));
    }

    /*
     * 3. Set symmetric indication for this entry in the internal database.
     */
    symmetric_indication = !is_one_sided_symmetric;
    SHR_IF_ERR_EXIT(dnx_algo_global_lif_allocation_update_symmetric_indication
                    (unit, *global_lif, symmetric_indication));

    /*
     * 4. Update lif count for ingress and egress lifs.
     */
    SHR_IF_ERR_EXIT(dnx_algo_global_lif_allocation_update_count(unit, direction_flags, 1));

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief
 *     Deallocate a symmetric lif:
 *     1. Deallocate in the symmetric lif pool.
 *     2. Deallocate in the ingress and egress pools.
 *     3. Clear symmetric indication.
 *     4. Update lif count on both sides.
 */
static shr_error_e
dnx_algo_global_lif_symmetric_internal_free(
    int unit,
    int global_lif)
{
    SHR_FUNC_INIT_VARS(unit);

    /*
     *  1. Deallocate in the symmetric lif pool.
     */
    SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.symmetric_global_lif.free_single(unit, global_lif));

    /*
     *  2. Deallocate in the ingress and egress pools.
     */
    SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.egress_global_lif.free_single(unit, global_lif));

    SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.ingress_global_lif.free_single(unit, global_lif));

    /*
     * 3. Clear symmetric indication.
     */
    SHR_IF_ERR_EXIT(dnx_algo_global_lif_allocation_update_symmetric_indication(unit, global_lif, FALSE));

    /*
     *  4. Update lif count on both sides.
     */
    SHR_IF_ERR_EXIT(dnx_algo_global_lif_allocation_update_count(unit, DNX_ALGO_LIF_EGRESS | DNX_ALGO_LIF_INGRESS, -1));

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief
 *     Allocate a non symmetric lif:
 *     1. Allocate the lif in the non symmetric lif pool.
 *     2. Check whether this lif id is legal on the other side as well.
 *     2a. If it is, allocate in symmetric pool to prevent symmetric lifs from allocating in this index.
 *     2b. If it's not, do nothing. Symmetric lifs shouldn't exist in this range.
 *     3. Update lif count for the lif.
 */
static shr_error_e
dnx_algo_global_lif_allocation_non_symmetric_internal_allocate(
    int unit,
    uint32 allocation_flags,
    uint32 direction_flag,
    global_lif_alloc_info_t * alloc_info,
    int *global_lif)
{
    int is_legal_flags;
    uint32 opposite_direction_flag;
    uint32 res_mngr_flags;
    SHR_FUNC_INIT_VARS(unit);

    SHR_IF_ERR_EXIT(dnx_algo_global_lif_flags_to_res_mngr_flags(unit, allocation_flags, &res_mngr_flags));

    /*
     *  1. Allocate the lif in the non symmetric lif pool.
     */
    if (_SHR_IS_FLAG_SET(direction_flag, DNX_ALGO_LIF_INGRESS))
    {
        SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.
                        ingress_global_lif.allocate_single(unit, res_mngr_flags, alloc_info, global_lif));
    }
    else
    {
        SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.
                        egress_global_lif.allocate_single(unit, res_mngr_flags, alloc_info, global_lif));
    }

    /*
     * 2. Check if this lif id is legal on the other side as well.
     */
    opposite_direction_flag = direction_flag ^ (DNX_ALGO_LIF_INGRESS | DNX_ALGO_LIF_EGRESS);
    SHR_IF_ERR_EXIT(dnx_algo_global_lif_id_is_legal
                    (unit, *global_lif, allocation_flags, opposite_direction_flag, &is_legal_flags));

    /*
     * 2a. If it is, allocate in symmetric pool to prevent symmetric lifs from allocating in this index.
     */
    if (_SHR_IS_FLAG_SET(is_legal_flags, DNX_ALGO_GLOBAL_LIF_ID_IS_LEGAL))
    {
        uint8 is_allocated = 0;
        /*
         *  It may have been allocated by the other side, so check if it's already allocated.
         *    If it was, then do nothing.
         *    If not, allocate.
         */
        SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.
                        symmetric_global_lif.is_allocated(unit, *global_lif, &is_allocated));

        if (!is_allocated)
        {
            SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.symmetric_global_lif.allocate_single(unit,
                                                                                                   DNX_ALGO_RES_ALLOCATE_WITH_ID,
                                                                                                   NULL, global_lif));
        }
    }

    /*
     *  3. Update lif count for the lif.
     */
    SHR_IF_ERR_EXIT(dnx_algo_global_lif_allocation_update_count(unit, direction_flag, 1));

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief
 *     Deallocate a non symmetric lif:
 *     1. Deallocate in the ingress or egress pool.
 *     2. Check whether this lif id is legal on the other side as well.
 *     2a. If it is, check if this lif id is allocated on the other side.
 *     2a1. If it's not , deallocate the symmetric lif for this id, so it can be used in the future for symmetric lifs.
 *     2a2. If it is, do nothing. The other side is blocking symmetric lifs from being allocated in this entry.
 *     2b. If it's not legal on the other side, do nothing. Sync lifs shouldn't exist in this range.
 *     3. Update lif count on both sides.
 */
static shr_error_e
dnx_algo_global_lif_allocation_non_symmetric_internal_free(
    int unit,
    int direction_flag,
    int global_lif)
{
    int is_legal_flags;
    uint32 opposite_direction_flag;

    SHR_FUNC_INIT_VARS(unit);

    /*
     *  1. Deallocate in the ingress or egress pool.
     */

    if (_SHR_IS_FLAG_SET(direction_flag, DNX_ALGO_LIF_INGRESS))
    {
        SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.ingress_global_lif.free_single(unit, global_lif));
    }
    else
    {
        SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.egress_global_lif.free_single(unit, global_lif));
    }

    /*
     *  2. Check if this lif id is legal on the other side as well.
     */
    opposite_direction_flag = direction_flag ^ (DNX_ALGO_LIF_INGRESS | DNX_ALGO_LIF_EGRESS);
    SHR_IF_ERR_EXIT(dnx_algo_global_lif_id_is_legal(unit, global_lif, 0, opposite_direction_flag, &is_legal_flags));

    if (_SHR_IS_FLAG_SET(is_legal_flags, DNX_ALGO_GLOBAL_LIF_ID_IS_LEGAL))
    {
        uint8 is_allocated;
        /*
         *  2a. If it is legal on the other side, check if this lif id is allocated on the other side.
         *      If it is, then the lif still needs to be preserved, and we don't deallocate it.
         */
        if (_SHR_IS_FLAG_SET(direction_flag, DNX_ALGO_LIF_INGRESS))
        {
            SHR_IF_ERR_EXIT(dnx_algo_global_egress_lif_internal_is_allocated(unit, global_lif, &is_allocated));
        }
        else
        {
            SHR_IF_ERR_EXIT(dnx_algo_global_ingress_lif_internal_is_allocated(unit, global_lif, &is_allocated));
        }

        if (!is_allocated)
        {
            /*
             *  2a1. If it's not allocated on the other side, deallocate the symmetric lif for this id,
             *       so it can be used in the future for symmetric lifs.
             */
            SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.symmetric_global_lif.free_single(unit, global_lif));
        }
    }

    /*
     *  3. Update lif count for the lif.
     */
    SHR_IF_ERR_EXIT(dnx_algo_global_lif_allocation_update_count(unit, direction_flag, -1));

exit:
    SHR_FUNC_EXIT;
}

/*
 * }
 * GLOBAL LIF INTERNAL FUNCTIONS
 */

/*
 * GLOBAL LIF ADVANCED ALGORITHM - START
 * {
 *
 * The advanced algorithm is pretty straightforward: The resource bitmap is divided into two parts,
 *  one for l2 gport and one for everything else. If the l2 gport flag is given, then the l2 gport pool is used.
 *  Otherwise, the other IDs are used.
 */

/** for each grain setting the bta value in HW */
static shr_error_e
dnx_algo_grain_tag_hw_set(
    int unit,
    int grain_id,
    int tag)
{
    uint32 entry_handle_id;
    int nof_entries;
    int field_size;
    int global_lif_size;
    int nof_elements_per_entry_in_bta_table = 0; /** this value is the [glem_field_size - field_size)^2] it means the granularity of the BTA table*/
    int nof_bits;
    int first_entry_indx;

    SHR_FUNC_INIT_VARS(unit);
    DBAL_FUNC_INIT_VARS(unit);

    /** getting the key size in order to know the granularity of the TAG */
    SHR_IF_ERR_EXIT(dbal_tables_field_size_get(unit,
                                               DBAL_TABLE_ERPP_OUT_LIF_BTA_SOP_TABLE,
                                               DBAL_FIELD_GLOBAL_OUT_LIF_MSB, 1, 0, 0, &field_size));

    SHR_IF_ERR_EXIT(dbal_tables_field_size_get(unit,
                                               DBAL_TABLE_GLOBAL_LIF_EM,
                                               DBAL_FIELD_GLOB_OUT_LIF, 1, 0, 0, &global_lif_size));

    nof_bits = global_lif_size - field_size;
    nof_elements_per_entry_in_bta_table = ((1 << nof_bits));

    if (field_size > dnx_data_lif.global_lif.global_lif_grain_size_get(unit))
    {
        SHR_ERR_EXIT(_SHR_E_INTERNAL, "cannot configure BTA since gain size is too small (%d)",
                     dnx_data_lif.global_lif.global_lif_grain_size_get(unit));

    }

    nof_entries = dnx_data_lif.global_lif.global_lif_grain_size_get(unit) / nof_elements_per_entry_in_bta_table;

    first_entry_indx = nof_entries * grain_id;

    /** LOG_CLI((BSL_META_U(unit, "setting bank first_entry_indx %d nof_entries %d tag %d \n"), first_entry_indx, 
       nof_entries, tag)); */

    SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_ERPP_OUT_LIF_BTA_SOP_TABLE, &entry_handle_id));

    dbal_entry_key_field32_range_set(unit, entry_handle_id, DBAL_FIELD_GLOBAL_OUT_LIF_MSB, first_entry_indx,
                                     first_entry_indx + nof_entries - 1);

    /** setting the BTA value */
    dbal_entry_value_field32_set(unit, entry_handle_id, DBAL_FIELD_BTA_SOP, INST_SINGLE, tag);

    SHR_IF_ERR_EXIT(dbal_entry_commit(unit, entry_handle_id, DBAL_COMMIT));

exit:
    DBAL_FUNC_FREE_VARS;
    SHR_FUNC_EXIT;
}

shr_error_e
dnx_algo_global_lif_res_create(
    int unit,
    uint32 module_id,
    resource_tag_bitmap_t * res_tag_bitmap,
    dnx_algo_res_create_data_t * create_data,
    void *extra_arguments,
    uint32 nof_elements,
    uint32 alloc_flags)
{
    dnx_algo_res_create_data_t res_tag_bitmap_create_info;
    resource_tag_bitmap_extra_arguments_create_info_t extra_create_info;

    resource_tag_bitmap_alloc_info_t res_tag_bitmap_alloc_info;
    int element;

    SHR_FUNC_INIT_VARS(unit);

    /** the existing tags:
     *  DNX_ALGO_GLOBAL_LIF_TAG_LIMITED_RANGE_USE DNX_ALGO_GLOBAL_LIF_TAG_LIMITED_RANGE_IGNORE
     *  DNX_ALGO_GLOBAL_LIF_TAG_PHP_RANGE_USE are not used in the tag, instead allocation is done according to range using
     *  RESOURCE_TAG_BITMAP_ALLOC_IN_RANGE. the tags are used for BTA value. */

    sal_memset(&extra_create_info, 0, sizeof(extra_create_info));

    /** allocate grains, for each grain different tag can be allocated. */
    extra_create_info.grain_size = dnx_data_lif.global_lif.global_lif_grain_size_get(unit);

    /** There are two level of allocations,
     *  1. according to tags that represented in the bta value
     *  2. according to range depened on the global lif application type.
     * if device is not supporting bta, the number of tags will be 0. */

    extra_create_info.max_tag_value = dnx_data_lif.global_lif.global_lif_bta_max_val_get(unit);

    sal_memset(&res_tag_bitmap_create_info, 0, sizeof(res_tag_bitmap_create_info));
    res_tag_bitmap_create_info.first_element = 0;
    res_tag_bitmap_create_info.nof_elements = create_data->nof_elements + dnx_data_l3.rif.nof_rifs_get(unit);

    /** if no tags RESOURCE_TAG_BITMAP_CREATE_GET_NOF_ELEMENTS_PER_GRAIN is not allowed */
    if (extra_create_info.max_tag_value)
    {
        res_tag_bitmap_create_info.flags = RESOURCE_TAG_BITMAP_CREATE_GET_NOF_ELEMENTS_PER_GRAIN;
    }
    else
    {
        res_tag_bitmap_create_info.flags = RESOURCE_TAG_BITMAP_CREATE_FLAGS_NONE;
    }

    SHR_IF_ERR_EXIT(resource_tag_bitmap_create
                    (unit, module_id, res_tag_bitmap, &res_tag_bitmap_create_info, &extra_create_info, nof_elements,
                     alloc_flags));

    sal_memset(&res_tag_bitmap_alloc_info, 0, sizeof(res_tag_bitmap_alloc_info));

    res_tag_bitmap_alloc_info.count = dnx_data_l3.rif.nof_rifs_get(unit);
    res_tag_bitmap_alloc_info.flags |= RESOURCE_TAG_BITMAP_ALLOC_WITH_ID;
    res_tag_bitmap_alloc_info.tag = GLOBAL_LIF_BTA_DEFAULT; /** tag per BTA value, RIFs can receive BTA value default (0) only */
    element = 0;

    SHR_IF_ERR_EXIT(resource_tag_bitmap_alloc(unit, module_id, *res_tag_bitmap, res_tag_bitmap_alloc_info, &element));

exit:
    SHR_FUNC_EXIT;
}

shr_error_e
dnx_algo_global_lif_info_dump(
    int unit,
    uint32 module_id,
    resource_tag_bitmap_t res_tag_bitmap,
    resource_tag_bitmap_tag_info_t * tag_info)
{

    int nof_grains = res_tag_bitmap->count / res_tag_bitmap->grainSize;
    int ii;

    SHR_FUNC_INIT_VARS(unit);

    LOG_CLI((BSL_META_U
             (unit, " Nof elements: %d\n Used elements: %d\n Grain size: %d\n Nof grains: %d\n Tag size: %d\n \n"),
             res_tag_bitmap->count, res_tag_bitmap->used, res_tag_bitmap->grainSize, nof_grains,
             res_tag_bitmap->tagSize));

    LOG_CLI((BSL_META_U(unit, "  Grain info (dumps only grains with allocated entries)\n")));
    for (ii = 0; ii < nof_grains; ii++)
    {
        uint32 nof_elements;
        resource_tag_bitmap_tag_info_t local_tag_info;
        SHR_IF_ERR_EXIT(resource_tag_bitmap_nof_used_elements_in_grain_get
                        (unit, module_id, res_tag_bitmap, ii, &nof_elements));

        if (nof_elements)
        {
            local_tag_info.element = ii * res_tag_bitmap->grainSize;
                                                                   /** first element in grain */
            SHR_IF_ERR_EXIT(resource_tag_bitmap_tag_get(unit, module_id, res_tag_bitmap, &local_tag_info));

            LOG_CLI((BSL_META_U(unit, "\tGrain %d: nof elements in grain %d, tag %d\n"), ii, nof_elements,
                     local_tag_info.tag));
        }
    }

exit:
    SHR_FUNC_EXIT;
}

shr_error_e
dnx_algo_global_lif_res_allocate(
    int unit,
    uint32 module_id,
    resource_tag_bitmap_t res_tag_bitmap,
    uint32 flags,
    void *extra_arguments,
    int *element)
{
    resource_tag_bitmap_alloc_info_t res_tag_bitmap_alloc_info;
    global_lif_alloc_info_t alloc_info = { 0 };
    int nof_lifs = res_tag_bitmap->count - dnx_data_l3.rif.nof_rifs_get(unit);

    SHR_FUNC_INIT_VARS(unit);

    if (extra_arguments)
    {
        alloc_info = *((global_lif_alloc_info_t *) extra_arguments);
    }

    /** New implementation use range instead of tag. tags will be used for BTA value  */
    sal_memset(&res_tag_bitmap_alloc_info, 0, sizeof(resource_tag_bitmap_alloc_info_t));

    res_tag_bitmap_alloc_info.tag = alloc_info.bta;
    if (_SHR_IS_FLAG_SET(flags, DNX_ALGO_RES_ALLOCATE_WITH_ID))
    {
        res_tag_bitmap_alloc_info.flags |= RESOURCE_TAG_BITMAP_ALLOC_WITH_ID;
    }
    else
    {
        if (_SHR_IS_FLAG_SET(flags, LIF_MNGR_L2_GPORT_GLOBAL_LIF))
        {
            /** DNX_ALGO_GLOBAL_LIF_TAG_LIMITED_RANGE_USE */
            res_tag_bitmap_alloc_info.flags |= RESOURCE_TAG_BITMAP_ALLOC_IN_RANGE;
            res_tag_bitmap_alloc_info.range_start = 0;
            res_tag_bitmap_alloc_info.range_end = dnx_data_lif.global_lif.nof_global_l2_gport_lifs_get(unit);
        }
        else if (_SHR_IS_FLAG_SET(flags, LIF_MNGR_PHP_GPORT_GLOBAL_LIF))
        {
            /** DNX_ALGO_GLOBAL_LIF_TAG_PHP_RANGE_USE */
            res_tag_bitmap_alloc_info.flags |= RESOURCE_TAG_BITMAP_ALLOC_IN_RANGE;
            res_tag_bitmap_alloc_info.range_start = nof_lifs - dnx_data_mpls.general.nof_php_gport_lif_get(unit);
            res_tag_bitmap_alloc_info.range_end = nof_lifs;
        }
        else
        {
            /** DNX_ALGO_GLOBAL_LIF_TAG_LIMITED_RANGE_IGNORE  */
            res_tag_bitmap_alloc_info.flags |= RESOURCE_TAG_BITMAP_ALLOC_IN_RANGE;
            if (dnx_data_lif.global_lif.nof_global_in_lifs_get(unit) <=
                dnx_data_lif.global_lif.nof_global_l2_gport_lifs_get(unit))
            {
                res_tag_bitmap_alloc_info.range_start = 0;
            }
            else
            {
                res_tag_bitmap_alloc_info.range_start = dnx_data_lif.global_lif.nof_global_l2_gport_lifs_get(unit);
            }
            res_tag_bitmap_alloc_info.range_end = nof_lifs - dnx_data_mpls.general.nof_php_gport_lif_get(unit);
        }
    }

    res_tag_bitmap_alloc_info.count = 1;

    SHR_IF_ERR_EXIT(resource_tag_bitmap_alloc(unit, module_id, res_tag_bitmap, res_tag_bitmap_alloc_info, element));

exit:
    SHR_FUNC_EXIT;
}

/*
 * }
 * GLOBAL LIF ADVANCED ALGORITHM - END
 */

/*
 * GLOBAL LIF ALLOCATION API - START
 * {
 */

shr_error_e
dnx_algo_global_lif_allocation_allocate(
    int unit,
    uint32 allocation_flags,
    uint32 direction_flags,
    global_lif_alloc_info_t * alloc_info,
    int *global_lif)
{
    int is_ingress, is_egress, is_one_sided_symmetric;
    SHR_FUNC_INIT_VARS(unit);

    SHR_NULL_CHECK(global_lif, _SHR_E_PARAM, "global_lif");
    SHR_INVOKE_VERIFY_DNX(dnx_algo_global_lif_allocation_verify
                          (unit, allocation_flags, direction_flags, alloc_info, *global_lif));

    is_ingress = _SHR_IS_FLAG_SET(direction_flags, DNX_ALGO_LIF_INGRESS);
    is_egress = _SHR_IS_FLAG_SET(direction_flags, DNX_ALGO_LIF_EGRESS);
    is_one_sided_symmetric = _SHR_IS_FLAG_SET(allocation_flags, LIF_MNGR_ONE_SIDED_SYMMETRIC_GLOBAL_LIF);

    /*
     * Map to relevant internal allocation according to the direction flags.
     */
    if ((is_ingress && is_egress) || is_one_sided_symmetric)
    {
        SHR_IF_ERR_EXIT(dnx_algo_global_lif_symmetric_internal_allocate
                        (unit, allocation_flags, direction_flags, alloc_info, global_lif));
    }
    else if (is_ingress || is_egress)
    {
        SHR_IF_ERR_EXIT(dnx_algo_global_lif_allocation_non_symmetric_internal_allocate
                        (unit, allocation_flags, direction_flags, alloc_info, global_lif));
    }
    else
    {
        SHR_ERR_EXIT(_SHR_E_PARAM,
                     "At least one flag of {DNX_ALGO_LIF_INGRESS, DNX_ALGO_LIF_EGRESS} must be set. Given 0x%8x",
                     direction_flags);
    }

    /** Setting the HW for the correct tag per bank */
    if (is_egress && dnx_data_lif.global_lif.global_lif_bta_max_val_get(unit) && alloc_info
        && (alloc_info->bta != GLOBAL_LIF_BTA_DEFAULT))
    {
        int tag = GLOBAL_LIF_BTA_DEFAULT;
        int nof_allocated_elements;
        int nof_elements_in_range = dnx_data_lif.global_lif.global_lif_grain_size_get(unit);
        int grain_id = (*global_lif) / nof_elements_in_range;
        int range_start = grain_id * nof_elements_in_range; /** looking at the first element in the grain*/
        if (alloc_info)
        {
            tag = alloc_info->bta;
        }

        SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.
                        egress_global_lif.nof_allocated_elements_in_range_get(unit, range_start, nof_elements_in_range,
                                                                              &nof_allocated_elements));

        if ((nof_allocated_elements == 1))
        {
            /** if this is the first element in the grain it means HW should be updated with the new tag for the grain */
            SHR_IF_ERR_EXIT(dnx_algo_grain_tag_hw_set(unit, grain_id, tag));
        }
    }

exit:
    SHR_FUNC_EXIT;
}

shr_error_e
dnx_algo_global_lif_allocation_free(
    int unit,
    uint32 direction_flags,
    int global_lif)
{
    int is_ingress, is_egress;
    SHR_FUNC_INIT_VARS(unit);

    SHR_INVOKE_VERIFY_DNX(dnx_algo_global_lif_allocation_verify
                          (unit, DNX_ALGO_GLOBAL_LIF_ALLOCATION_DEALLOCATE_VERIFY, direction_flags, NULL, global_lif));

    is_ingress = _SHR_IS_FLAG_SET(direction_flags, DNX_ALGO_LIF_INGRESS);
    is_egress = _SHR_IS_FLAG_SET(direction_flags, DNX_ALGO_LIF_EGRESS);

    /*
     * Map to relevant internal allocation according to the direction flags.
     */
    if (is_ingress && is_egress)
    {
        SHR_IF_ERR_EXIT(dnx_algo_global_lif_symmetric_internal_free(unit, global_lif));
    }
    else if (is_ingress || is_egress)
    {
        SHR_IF_ERR_EXIT(dnx_algo_global_lif_allocation_non_symmetric_internal_free(unit, direction_flags, global_lif));
    }
    else
    {
        SHR_ERR_EXIT(_SHR_E_PARAM,
                     "At least one flag of {DNX_ALGO_LIF_INGRESS, DNX_ALGO_LIF_EGRESS} must be set. Given 0x%8x",
                     direction_flags);
    }

    /** if the last element in grain was released, returning the HW bank to default value. */
    if (is_egress && dnx_data_lif.global_lif.global_lif_bta_max_val_get(unit))
    {
        int tag = GLOBAL_LIF_BTA_DEFAULT;
        int nof_allocated_elements;
        int nof_elements_in_range = dnx_data_lif.global_lif.global_lif_grain_size_get(unit);
        int grain_id = (global_lif) / nof_elements_in_range;
        int range_start = grain_id * nof_elements_in_range; /** looking at the first element in the grain*/

        if (range_start != 0)
        {
            /** no need to perform action for the first grain since the first grain BTA is always 0 */
            SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.
                            ingress_global_lif.nof_allocated_elements_in_range_get(unit, range_start,
                                                                                   nof_elements_in_range,
                                                                                   &nof_allocated_elements));

            if ((nof_allocated_elements == 0))
            {
                /** if this is the first element in the grain it means HW should be updated with the new tag for the grain */
                SHR_IF_ERR_EXIT(dnx_algo_grain_tag_hw_set(unit, grain_id, tag));
            }
        }
    }

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief
 *     Init the global lif resource managers.
 */
shr_error_e
dnx_algo_global_lif_allocation_init(
    int unit)
{
    dnx_algo_res_create_data_t global_lif_data;
    dnx_algo_resource_advanced_algorithms_e advanced_algorithm;
    uint32 resource_flags;
    int lif_id = 0;

    SHR_FUNC_INIT_VARS(unit);

    /*
     * Initialize the symmetric indication bitmap.
     * We assume that the lif IDs start from 0, and we need to cover the entire range of lif IDs,
     * so we take the number of global out lifs that is the same as the number of global in lifs.
     */
    SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.global_lif_symmetric_indication.alloc_bitmap(unit));

    /*
     * Create global lif resources.
     * The l2 gport can only hold 20 bits of global lif.
     * If 20 bits is less than the number of global lifs that are actually available, then we need an advanced algorithm
     * to enforce this limit. Otherwise, we can just use the basic algorithm, because all global lifs are equivalent.
     */
    if (dnx_data_mpls.general.nof_php_gport_lif_get(unit) > 0)
    {
        advanced_algorithm = DNX_ALGO_RESOURCE_ADVANCED_ALGORITHM_LIF_GLOBAL_LIF;
        resource_flags = DNX_ALGO_RES_CREATE_USE_ADVANCED_ALGORITHM;
    }
    else if (dnx_data_lif.global_lif.nof_global_in_lifs_get(unit) <
             dnx_data_lif.global_lif.nof_global_l2_gport_lifs_get(unit))
    {
        advanced_algorithm = DNX_ALGO_RESOURCE_ADVANCED_ALGORITHM_BASIC;
        resource_flags = 0;
        SHR_ERR_EXIT(_SHR_E_INTERNAL, "not expected to reach basic algo");
    }
    else
    {
        advanced_algorithm = DNX_ALGO_RESOURCE_ADVANCED_ALGORITHM_LIF_GLOBAL_LIF;
        resource_flags = DNX_ALGO_RES_CREATE_USE_ADVANCED_ALGORITHM;
    }

    /*
     * Create ingress global lif resource.
     * The bottom of the global lif range is reserved for rifs, so that maximum rif is the first element,
     * and there are that number less available global lifs. 
     * dnx_data_lif.global_lif.nof_global_in_lifs_get() as well as nof_global_out_lifs_get() don't 
     * always represent the full Global LIF value range. For example, in JR2 and the devices that follow, 
     * the range is shared with the PPMC-DB and ACE-Pointer entries.
     */
    sal_memset(&global_lif_data, 0, sizeof(dnx_algo_res_create_data_t));
    global_lif_data.first_element = dnx_data_l3.rif.nof_rifs_get(unit);
    global_lif_data.nof_elements =
        dnx_data_lif.global_lif.nof_global_in_lifs_get(unit) - dnx_data_l3.rif.nof_rifs_get(unit);
    global_lif_data.flags = resource_flags;
    global_lif_data.advanced_algorithm = advanced_algorithm;
    sal_strncpy(global_lif_data.name, DNX_ALGO_GLOBAL_LIF_INGRESS_RESOURCE, DNX_ALGO_RES_MNGR_MAX_NAME_LENGTH - 1);
    /*
     * data.desc = "Ingress global lif allocation pool.";
     */
    SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.ingress_global_lif.create(unit, &global_lif_data, NULL));

    /*
     * Create egress global lif resource.
     * The bottom of the global lif range is reserved for rifs, so that maximum rif is the first element,
     * and there are that number less available global lifs.
     */
    sal_memset(&global_lif_data, 0, sizeof(dnx_algo_res_create_data_t));
    global_lif_data.first_element = dnx_data_l3.rif.nof_rifs_get(unit);
    global_lif_data.nof_elements =
        dnx_data_lif.global_lif.nof_global_out_lifs_get(unit) - dnx_data_l3.rif.nof_rifs_get(unit);
    global_lif_data.flags = resource_flags;
    global_lif_data.advanced_algorithm = advanced_algorithm;
    sal_strncpy(global_lif_data.name, DNX_ALGO_GLOBAL_LIF_INGRESS_RESOURCE, DNX_ALGO_RES_MNGR_MAX_NAME_LENGTH - 1);
    /*
     * data.desc = "Egress global lif allocation pool.";
     */
    SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.egress_global_lif.create(unit, &global_lif_data, NULL));

    /*
     * Create symmetric global lif resource.
     * This resource only needs to take the common range between ingress and egress global lifs,
     *   because symmetric lifs can't exist if one of the sides doesn't exist.
     */
    sal_memset(&global_lif_data, 0, sizeof(dnx_algo_res_create_data_t));
    global_lif_data.first_element = dnx_data_l3.rif.nof_rifs_get(unit);
    global_lif_data.nof_elements = UTILEX_MIN(dnx_data_lif.global_lif.nof_global_in_lifs_get(unit),
                                              dnx_data_lif.global_lif.nof_global_out_lifs_get(unit))
        - global_lif_data.first_element;
    global_lif_data.flags = resource_flags;
    global_lif_data.advanced_algorithm = advanced_algorithm;
    sal_strncpy(global_lif_data.name, DNX_ALGO_GLOBAL_LIF_INGRESS_RESOURCE, DNX_ALGO_RES_MNGR_MAX_NAME_LENGTH - 1);
    /*
     * data.desc = "Symmetric global lif allocation pool.";
     */
    SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.symmetric_global_lif.create(unit, &global_lif_data, NULL));

    /*
     * GET_NOF_ELEMENTS_PER_GRAIN Handler for illegal scenarios: In many DNX tests, lifs are used both WITH_ID and
     * without. This is illegal behavior, and for internal resource manager reasons, this will it: 
     */
    SHR_IF_ERR_EXIT(dnx_algo_global_lif_allocation_allocate
                    (unit, LIF_MNGR_L2_GPORT_GLOBAL_LIF, DNX_ALGO_LIF_INGRESS | DNX_ALGO_LIF_EGRESS, NULL, &lif_id));

    SHR_IF_ERR_EXIT(dnx_algo_global_lif_allocation_free(unit, DNX_ALGO_LIF_INGRESS | DNX_ALGO_LIF_EGRESS, lif_id));

#if 0
    /** TBD temp code: try to allocate multiple LIFs different tags, make sure that the IDs are correct.*/

    if (dnx_data_lif.global_lif.global_lif_bta_max_val_get(unit))
    {
        global_lif_alloc_info_t alloc_info;
        int ii, rv;
        int lif_ids[12];
        int lif_with_id;

        alloc_info.bta = GLOBAL_LIF_BTA_DEFAULT;

        for (ii = 0; ii < 3; ii++)
        {
            SHR_IF_ERR_EXIT(dnx_algo_global_lif_allocation_allocate(unit, LIF_MNGR_L2_GPORT_GLOBAL_LIF,
                                                                    DNX_ALGO_LIF_INGRESS | DNX_ALGO_LIF_EGRESS,
                                                                    &alloc_info, &lif_ids[0 + ii * 4]));

            SHR_IF_ERR_EXIT(dnx_algo_global_lif_allocation_allocate(unit, LIF_MNGR_L2_GPORT_GLOBAL_LIF,
                                                                    DNX_ALGO_LIF_INGRESS | DNX_ALGO_LIF_EGRESS,
                                                                    &alloc_info, &lif_ids[1 + ii * 4]));
            LOG_CLI((BSL_META_U
                     (unit, "LIF IDs %d, %d was allocated with BTA value %d (LIF_MNGR_L2_GPORT_GLOBAL_LIF)\n"),
                     lif_ids[0 + ii * 4], lif_ids[1 + ii * 4], alloc_info.bta));

            SHR_IF_ERR_EXIT(dnx_algo_global_lif_allocation_allocate(unit, 0,
                                                                    DNX_ALGO_LIF_INGRESS | DNX_ALGO_LIF_EGRESS,
                                                                    &alloc_info, &lif_ids[2 + ii * 4]));

            SHR_IF_ERR_EXIT(dnx_algo_global_lif_allocation_allocate(unit, 0,
                                                                    DNX_ALGO_LIF_INGRESS | DNX_ALGO_LIF_EGRESS,
                                                                    &alloc_info, &lif_ids[3 + ii * 4]));
            LOG_CLI((BSL_META_U(unit, "LIF IDs %d, %d was allocated with BTA value %d (0)\n"), lif_ids[2 + ii * 4],
                     lif_ids[3 + ii * 4], alloc_info.bta));

            if (ii == 0)
            {
                alloc_info.bta = 26;
            }
            else
            {
                alloc_info.bta = 77;
            }
        }

        LOG_CLI((BSL_META_U(unit, "\n WITH_ID allocation start\n")));

        /** validation of alloc with ID */

/**
        alloc_info.bta = 26;
        lif_with_id = 1048570;
        SHR_IF_ERR_EXIT(dnx_algo_global_lif_allocation_allocate(unit, LIF_MNGR_GLOBAL_LIF_WITH_ID | LIF_MNGR_L2_GPORT_GLOBAL_LIF,
                                                                DNX_ALGO_LIF_INGRESS | DNX_ALGO_LIF_EGRESS,
                                                                &alloc_info, &lif_with_id)); */

        /** existing BTA in existing bank */
        alloc_info.bta = 26;
        lif_with_id = lif_ids[5] + 1;
        SHR_IF_ERR_EXIT(dnx_algo_global_lif_allocation_allocate
                        (unit, LIF_MNGR_GLOBAL_LIF_WITH_ID | LIF_MNGR_L2_GPORT_GLOBAL_LIF,
                         DNX_ALGO_LIF_INGRESS | DNX_ALGO_LIF_EGRESS, &alloc_info, &lif_with_id));

        LOG_CLI((BSL_META_U(unit, "WITH_ID %d, BTA %d allocated \n"), lif_with_id, alloc_info.bta));

        /** BTA 0 in new bank   */
        alloc_info.bta = 26;
        lif_with_id = 32770;
        SHR_IF_ERR_EXIT(dnx_algo_global_lif_allocation_allocate
                        (unit, LIF_MNGR_GLOBAL_LIF_WITH_ID | LIF_MNGR_L2_GPORT_GLOBAL_LIF,
                         DNX_ALGO_LIF_INGRESS | DNX_ALGO_LIF_EGRESS, &alloc_info, &lif_with_id));

        LOG_CLI((BSL_META_U(unit, "WITH_ID %d, BTA %d allocated \n"), 32770, alloc_info.bta));

        /** new BTA in a new bank   */
        alloc_info.bta = 27;
        lif_with_id = 65540;
        SHR_IF_ERR_EXIT(dnx_algo_global_lif_allocation_allocate
                        (unit, LIF_MNGR_GLOBAL_LIF_WITH_ID | LIF_MNGR_L2_GPORT_GLOBAL_LIF,
                         DNX_ALGO_LIF_INGRESS | DNX_ALGO_LIF_EGRESS, &alloc_info, &lif_with_id));

        LOG_CLI((BSL_META_U(unit, "WITH_ID %d, BTA %d allocated \n"), 65540, alloc_info.bta));

        /** allocating to an existing bank different BTA */
        alloc_info.bta = 28;
        lif_with_id = 65541;
        rv = dnx_algo_global_lif_allocation_allocate(unit, LIF_MNGR_GLOBAL_LIF_WITH_ID | LIF_MNGR_L2_GPORT_GLOBAL_LIF,
                                                     DNX_ALGO_LIF_INGRESS | DNX_ALGO_LIF_EGRESS,
                                                     &alloc_info, &lif_with_id);

        if (rv == 0)
        {
            SHR_IF_ERR_EXIT(-1);
        }

        SHR_IF_ERR_EXIT(lif_mngr_db.global_lif_allocation.symmetric_global_lif.advanced_algorithm_info_get(unit, NULL));

        /** error valiodations allocate different BTA in existing bank */

        /** releasing the allocation */
        SHR_IF_ERR_EXIT(dnx_algo_global_lif_allocation_free
                        (unit, DNX_ALGO_LIF_INGRESS | DNX_ALGO_LIF_EGRESS, lif_ids[5] + 1));

        SHR_IF_ERR_EXIT(dnx_algo_global_lif_allocation_free(unit, DNX_ALGO_LIF_INGRESS | DNX_ALGO_LIF_EGRESS, 32770));

        SHR_IF_ERR_EXIT(dnx_algo_global_lif_allocation_free(unit, DNX_ALGO_LIF_INGRESS | DNX_ALGO_LIF_EGRESS, 65540));

        for (ii = 0; ii < 12; ii++)
        {
            SHR_IF_ERR_EXIT(dnx_algo_global_lif_allocation_free
                            (unit, DNX_ALGO_LIF_INGRESS | DNX_ALGO_LIF_EGRESS, lif_ids[ii]));
        }
    }
#endif

exit:
    SHR_FUNC_EXIT;
}

shr_error_e
dnx_algo_global_lif_allocation_deinit(
    int unit)
{
    SHR_FUNC_INIT_VARS(unit);

    /*
     * Resource manager doesn't require deinitialization per instance.
     */

    /*
     * sw state memory free is done automatically at device deinit
     */

    SHR_FUNC_EXIT;
}

/*
 * GLOBAL LIF ALLOCATION API - END
 * }
 */
