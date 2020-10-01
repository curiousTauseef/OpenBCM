/** \file oam_oamp_v1.h
 * OAMP generation one support - contains internal functions and definitions
 * for support of the OAM/BFD accelerator BFD functionality
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef OAM_OAMP_V1_H_INCLUDED
/*
 * {
 */
#define OAM_OAMP_V1_H_INCLUDED

#ifndef BCM_DNX2_SUPPORT
#error "This file is for use by DNX (JR2) family only!"
#endif

/**
 * \brief - Add an OAM Loss entry.
 *
 * \param [in] unit - Number of hardware unit used.
 * \param [in] loss_ptr - Pointer to the structure,
 *                 containing information about the loss entry.
 *
 * \return
 *   shr_error_e
 *
 * \see
 *   * None
 */
shr_error_e dnx_oam_oamp_v1_onlys_loss_add(
    int unit,
    bcm_oam_loss_t * loss_ptr);

/**
 * \brief - Get an OAM Loss entry.
 *
 * \param [in] unit - Number of hardware unit used.
 * \param [in] loss_ptr - Pointer to the structure,
 *                 containing information about the loss entry.
 *
 * \return
 *   shr_error_e
 *
 * \see
 *   * None
 */
shr_error_e dnx_oam_oamp_v1_onlys_loss_get(
    int unit,
    bcm_oam_loss_t * loss_ptr);

/**
 * \brief - Delete an OAM Loss entry.
 *
 * \param [in] unit - Number of hardware unit used.
 * \param [in] loss_ptr - Pointer to the structure,
 *                 containing information about the loss entry.
 *
 * \return
 *   shr_error_e
 *
 * \see
 *   * None
 */
shr_error_e dnx_oam_oamp_v1_onlys_loss_delete(
    int unit,
    bcm_oam_loss_t * loss_ptr);

/**
 * \brief - Add an OAM Delay entry.
 *
 * \param [in] unit - Number of hardware unit used.
 * \param [in] delay_ptr - Pointer to the structure,
 *                 containing information about the delay entry.
 *
 * \return
 *   shr_error_e
 *
 * \see
 *   * None
 */
shr_error_e dnx_oam_oamp_v1_onlys_delay_add(
    int unit,
    bcm_oam_delay_t * delay_ptr);

/**
 * \brief - Get an OAM delay entry.
 *
 * \param [in] unit - Number of hardware unit used.
 * \param [in] delay_ptr - Pointer to the structure,
 *                 containing information about the delay entry.
 *
 * \return
 *   shr_error_e
 *
 * \see
 *   * None
 */
shr_error_e dnx_oam_oamp_v1_onlys_delay_get(
    int unit,
    bcm_oam_delay_t * delay_ptr);

/**
 * \brief - Delete an OAM delay entry.
 *
 * \param [in] unit - Number of hardware unit used.
 * \param [in] delay_ptr - Pointer to the structure,
 *                 containing information about the delay entry.
 *
 * \return
 *   shr_error_e
 *
 * \see
 *   * None
 */
shr_error_e dnx_oam_oamp_v1_onlys_delay_delete(
    int unit,
    bcm_oam_delay_t * delay_ptr);

/**
 * \brief - Dummy example function.
 *
 * \param [in] unit - Number of hardware unit used.
 * \param [in] endpoint_info - see definition of struct for
 *        description of fields
 *
 * \return
 *   shr_error_e
 *
 * \remark
 *   * None
 * \see
 *   * None
 */
shr_error_e dummy_example_v1(
    int unit,
    const bcm_oam_endpoint_info_t * endpoint_info);

/**
 * \brief - Function fill mep_db struct. Assumes ID is allocated
 *
 * \param [in] unit - Number of hardware unit used.
 * \param [in] endpoint_info - info structure of the requested MEP
 *                                 return mep_id if with id flag not set.
 * \param [in] sw_endpoint_info - software info structure of the requested MEP
 * \param [in] group_info - structure containing MEG parameters
 * \param [out] mep_db_entry - return filled mep_db entry according endpoint_info
 * \param [out] mep_hw_profiles_write_data - return new profiles that should be created in hw
 * \param [out] mep_hw_profiles_delete_data - when modifying, return existing  profiles that
 *        should be deleted from hw
 *
 * \return
 *   shr_error_e
 *
 * \see
 *   * dnx_oam_local_mep_create
 */
shr_error_e dnx_oam_oamp_ccm_endpoint_mep_db_create_v1(
    int unit,
    const bcm_oam_endpoint_info_t * endpoint_info,
    const bcm_oam_group_info_t * group_info,
    const dnx_oam_endpoint_info_t * sw_endpoint_info,
    dnx_oam_oamp_ccm_endpoint_t * mep_db_entry,
    oam_oamp_profile_hw_data_t * mep_hw_profiles_write_data,
    oam_oamp_profile_hw_data_t * mep_hw_profiles_delete_data);

/*
 * }
 */
#endif /* OAM_OAMP_V1_H_INCLUDED */
