
/** \file oam_endpoint_v1.h
 * OAM endpoint generation one support - contains internal functions and definitions
 * for support of the OAM endpoint functionality
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef OAM_ENDPOINT_V1_H_INCLUDED
/*
 * {
 */
#define OAM_ENDPOINT_V1_H_INCLUDED

#ifndef BCM_DNX_SUPPORT
#error "This file is for use by DNX (JR2) family only!"
#endif

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
shr_error_e dnx_oam_endpoint_fill_id_v1(
    int unit,
    bcm_oam_endpoint_info_t * endpoint_info,
    oam_lif_resolution_t * lif_resolution,
    bcm_oam_group_info_t * group_info,
    uint8 *is_bfd_alloc);

#endif /* OAM_ENDPOINT_V1_H_INCLUDED */
