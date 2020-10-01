/* 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 * search for 'sw_state_diagnostic_cbs_t' for the root of the struct
 */

#ifndef _SHR_SW_STATE_DPP_BCM_ALLOC_MNGR_UTILS_DIAGNOSTIC_H_
#define _SHR_SW_STATE_DPP_BCM_ALLOC_MNGR_UTILS_DIAGNOSTIC_H_

#ifdef BCM_WARM_BOOT_API_TEST
/********************************* diagnostic calbacks definitions *************************************/
/* this set of callbacks, are the callbacks used in the diagnostic calbacks struct 'sw_state_cbs_t' to */
/* access the data in 'sw_state_t'.                                                                */
/* the calbacks are inserted into the diagnostic struct by 'sw_state_diagnostic_cb_init'.                  */
/***************************************************************************************************/

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_bcm_alloc_mngr_utils_dump */
typedef int (*sw_state_dpp_bcm_alloc_mngr_utils_dump_cb)(
    int unit);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_bcm_alloc_mngr_utils_resource_to_pool_map_dump */
typedef int (*sw_state_dpp_bcm_alloc_mngr_utils_resource_to_pool_map_dump_cb)(
    int unit, int alloc_mngr_utils_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_bcm_alloc_mngr_utils_template_to_pool_map_dump */
typedef int (*sw_state_dpp_bcm_alloc_mngr_utils_template_to_pool_map_dump_cb)(
    int unit, int alloc_mngr_utils_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

/*********************************** diagnostic calbacks struct ****************************************/
/* this set of structs, rooted at 'sw_state_cbs_t' define the diagnostic layer for the entire SW state.*/
/* use this tree to dump fields in the sw state rooted at 'sw_state_t'.              */
/* NOTE: 'sw_state_t' data should not be accessed directly.                                        */
/***************************************************************************************************/

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_bcm_alloc_mngr_utils_resource_to_pool_map_diagnostic_cbs_s {
    sw_state_dpp_bcm_alloc_mngr_utils_resource_to_pool_map_dump_cb dump;
} sw_state_dpp_bcm_alloc_mngr_utils_resource_to_pool_map_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_bcm_alloc_mngr_utils_template_to_pool_map_diagnostic_cbs_s {
    sw_state_dpp_bcm_alloc_mngr_utils_template_to_pool_map_dump_cb dump;
} sw_state_dpp_bcm_alloc_mngr_utils_template_to_pool_map_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_bcm_alloc_mngr_utils_diagnostic_cbs_s {
#if defined(BCM_PETRA_SUPPORT)
    sw_state_dpp_bcm_alloc_mngr_utils_dump_cb dump;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
    sw_state_dpp_bcm_alloc_mngr_utils_resource_to_pool_map_diagnostic_cbs_t resource_to_pool_map;
    sw_state_dpp_bcm_alloc_mngr_utils_template_to_pool_map_diagnostic_cbs_t template_to_pool_map;
} sw_state_dpp_bcm_alloc_mngr_utils_diagnostic_cbs_t;

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

int sw_state_dpp_bcm_alloc_mngr_utils_diagnostic_cb_init(int unit);

#endif /* BCM_WARM_BOOT_API_TEST */

#endif /* _SHR_SW_STATE_DPP_BCM_ALLOC_MNGR_UTILS_DIAGNOSTIC_H_ */
