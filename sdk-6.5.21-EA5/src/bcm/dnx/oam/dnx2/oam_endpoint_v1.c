/** \file oam_oamp_v1.c
 * 
 *
 * OAM endpoint procedures for DNX OAMP generation one.
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifdef BSL_LOG_MODULE
#error "BSL_LOG_MODULE redefined"
#endif
#define BSL_LOG_MODULE BSL_LS_BCMDNX_OAM
#ifdef BCM_DNX2_SUPPORT
/* { */
 /*
  * Include files.
  * {
  */
#include <bcm/oam.h>
#include <src/bcm/dnx/oam/oam_oamp.h>
#include <soc/dnx/dbal/dbal.h>
#include <soc/dnx/dnx_err_recovery_manager.h>
#include <src/bcm/dnx/oam/oam_internal.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_headers.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_device.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_internal_oam.h>
#include <include/soc/dnx/dnx_data/auto_generated/dnx_data_oam.h>

/*
 * }
 */

/*
 * DEFINEs
 * {
 */

/*
 * }
 */

/*
 * MACROs
 * {
 */
/** Flag that denotes this is a client endpoint - accelerated using another device's OAMP */
#define IS_OAM_CLIENT(x) (_SHR_IS_FLAG_SET(x->flags2, BCM_OAM_ENDPOINT2_HW_ACCELERATION_SET))
/*
 * }
 */

/*
 * Global and Static
 * {
 */

/*
 * }
 */

/**
 * \brief - Helper function for getting oam id
 *
 * \param [in] unit - Number of hardware unit used.
 * \param [in] endpoint_info - info structure of the requested
 *        MEP
 * \param [in] lif_resolution - lifs assigned to gport/mpls_out_gport
 * \param [in] group_info - Information about the MEP's group
 * \param [in] is_bfd_alloc - BFD exists indication
 *
 * \return
 *   shr_error_e
 *
 * \see
 *   * None
 */
shr_error_e
dnx_oam_endpoint_fill_id_v1(
    int unit,
    bcm_oam_endpoint_info_t * endpoint_info,
    const oam_lif_resolution_t * lif_resolution,
    const bcm_oam_group_info_t * group_info,
    uint8 *is_bfd_alloc)
{

    int mep_db_lim;
    int is_48B_maid = 0;

    SHR_FUNC_INIT_VARS(unit);

    /*
     *  Allocate ID for the new MEP, handled separately per accelerated/non accelerated.
     *  Acc: According to OAM-ID (index in OAMP-MEP-DB DBAL table)
     *  Non acc: According to LIF + direction +level
     */
    if (DNX_OAM_DISSECT_IS_ENDPOINT_ACCELERATED(endpoint_info))
    {
        mep_db_lim = dnx_data_oam.oamp.mep_db_version_limitation_get(unit);
        if ((mep_db_lim == 1) &&
            !_SHR_IS_FLAG_SET(endpoint_info->flags, BCM_OAM_ENDPOINT_WITH_ID) &&
            (endpoint_info->endpoint_memory_type == bcmOamEndpointMemoryTypeShortEntry) &&
            ((BCM_DNX_OAM_GROUP_NAME_TO_NAME_TYPE(group_info->name) != DNX_OAMP_OAM_MA_NAME_TYPE_ICC) &&
             !DNX_OAM_GROUP_MAID_IS_EXTRA_DATA(group_info->flags)))
        {
            /**
             * MEP type is read from sub-index 0 in the same full entry.
             * This means that all short entries contained in the full entry
             * must have the same MEP type.  Not relevant for short entries
             * with a 13 byte MAID ("ICC") since they must be with sub-index
             * 0 anyway.  If endpoint ID is specified, verification is in
             * "dnx_oam_local_accelerated_endpoint_fill_id()"
             */
            SHR_IF_ERR_EXIT(dnx_oam_endpoint_workaround_fill_id(unit, endpoint_info, group_info->name));
        }
        else
        {
            if (DNX_OAM_IS_ENDPOINT_RFC6374(endpoint_info))
            {
                /** Are we adding to an existing BFD endpoint? */
                SHR_IF_ERR_EXIT(dnx_oam_mpls_lm_dm_verify(unit, endpoint_info, is_bfd_alloc));
            }

            /** For MPLS-LM-DM, if the BFD EP exists, this is already allocated */
            if (!(*is_bfd_alloc))
            {
                is_48B_maid = DNX_OAM_GROUP_MAID_IS_EXTRA_DATA(group_info->flags);
                SHR_IF_ERR_EXIT(dnx_oam_local_accelerated_endpoint_fill_id
                                (unit, endpoint_info, group_info->name, is_48B_maid));
            }
        }
    }
    else
    {
        if (IS_OAM_CLIENT(endpoint_info))
        {
            /** For client endpoints, we just add one bit */
            if (!_SHR_IS_FLAG_SET(endpoint_info->flags, BCM_OAM_ENDPOINT_WITH_ID))
            {
                SHR_ERR_EXIT(_SHR_E_PARAM, "Client endpoints must be created WITH_ID");
            }
            UTILEX_SET_BIT(endpoint_info->id, 1, DNX_OAM_CLIENT_MEP_INDEX_BIT);

            /** For client endpoints, a valid accelerated profile is required */
            if (DNX_OAM_PROFILE_VALID_GET(endpoint_info->acc_profile_id) == 0)
            {
                SHR_ERR_EXIT(_SHR_E_PARAM, "Client endpoints have a valid acc_profile_id");
            }
        }
        else
        {
            SHR_IF_ERR_EXIT(dnx_oam_local_endpoint_fill_id(unit, endpoint_info, lif_resolution));
        }
    }

exit:
    SHR_FUNC_EXIT;
}
#endif /* BCM_DNX2_SUPPORT */
