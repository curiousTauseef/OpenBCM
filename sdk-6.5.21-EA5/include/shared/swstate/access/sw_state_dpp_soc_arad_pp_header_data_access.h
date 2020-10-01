/* 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 * search for 'sw_state_cbs_t' for the root of the struct
 */

#ifndef _SHR_SW_STATE_DPP_SOC_ARAD_PP_HEADER_DATA_ACCESS_H_
#define _SHR_SW_STATE_DPP_SOC_ARAD_PP_HEADER_DATA_ACCESS_H_

/********************************* access calbacks definitions *************************************/
/* this set of callbacks, are the callbacks used in the access calbacks struct 'sw_state_cbs_t' to */
/* access the data in 'sw_state_t'.                                                                */
/* the calbacks are inserted into the access struct by 'sw_state_access_cb_init'.                  */
/***************************************************************************************************/

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_pp_header_data_set */
typedef int (*sw_state_dpp_soc_arad_pp_header_data_set_cb)(
    int unit, CONST ARAD_PP_HEADER_DATA *header_data);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_pp_header_data_get */
typedef int (*sw_state_dpp_soc_arad_pp_header_data_get_cb)(
    int unit, ARAD_PP_HEADER_DATA *header_data);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_pp_header_data_alloc */
typedef int (*sw_state_dpp_soc_arad_pp_header_data_alloc_cb)(
    int unit);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_pp_header_data_is_allocated */
typedef int (*sw_state_dpp_soc_arad_pp_header_data_is_allocated_cb)(
    int unit, uint8 *is_allocated);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_pp_header_data_free */
typedef int (*sw_state_dpp_soc_arad_pp_header_data_free_cb)(
    int unit);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_pp_header_data_verify */
typedef int (*sw_state_dpp_soc_arad_pp_header_data_verify_cb)(
    int unit);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_pp_header_data_system_headers_mode_set */
typedef int (*sw_state_dpp_soc_arad_pp_header_data_system_headers_mode_set_cb)(
    int unit, uint8 system_headers_mode);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_pp_header_data_system_headers_mode_get */
typedef int (*sw_state_dpp_soc_arad_pp_header_data_system_headers_mode_get_cb)(
    int unit, uint8 *system_headers_mode);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_pp_header_data_system_headers_mode_verify */
typedef int (*sw_state_dpp_soc_arad_pp_header_data_system_headers_mode_verify_cb)(
    int unit);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_pp_header_data_ftmh_stacking_ext_enable_set */
typedef int (*sw_state_dpp_soc_arad_pp_header_data_ftmh_stacking_ext_enable_set_cb)(
    int unit, uint8 ftmh_stacking_ext_enable);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_pp_header_data_ftmh_stacking_ext_enable_get */
typedef int (*sw_state_dpp_soc_arad_pp_header_data_ftmh_stacking_ext_enable_get_cb)(
    int unit, uint8 *ftmh_stacking_ext_enable);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_pp_header_data_ftmh_stacking_ext_enable_verify */
typedef int (*sw_state_dpp_soc_arad_pp_header_data_ftmh_stacking_ext_enable_verify_cb)(
    int unit);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_pp_header_data_ftmh_lb_key_ext_en_set */
typedef int (*sw_state_dpp_soc_arad_pp_header_data_ftmh_lb_key_ext_en_set_cb)(
    int unit, uint8 ftmh_lb_key_ext_en);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_pp_header_data_ftmh_lb_key_ext_en_get */
typedef int (*sw_state_dpp_soc_arad_pp_header_data_ftmh_lb_key_ext_en_get_cb)(
    int unit, uint8 *ftmh_lb_key_ext_en);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_pp_header_data_ftmh_lb_key_ext_en_verify */
typedef int (*sw_state_dpp_soc_arad_pp_header_data_ftmh_lb_key_ext_en_verify_cb)(
    int unit);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

/*********************************** access calbacks struct ****************************************/
/* this set of structs, rooted at 'sw_state_cbs_t' define the access layer for the entire SW state.*/
/* use this tree to alloc/free/set/get fields in the sw state rooted at 'sw_state_t'.              */
/* NOTE: 'sw_state_t' data should not be accessed directly.                                        */
/***************************************************************************************************/

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_pp_header_data_system_headers_mode_cbs_s {
    sw_state_dpp_soc_arad_pp_header_data_system_headers_mode_set_cb set;
    sw_state_dpp_soc_arad_pp_header_data_system_headers_mode_get_cb get;
    sw_state_dpp_soc_arad_pp_header_data_system_headers_mode_verify_cb verify;
} sw_state_dpp_soc_arad_pp_header_data_system_headers_mode_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_pp_header_data_ftmh_stacking_ext_enable_cbs_s {
    sw_state_dpp_soc_arad_pp_header_data_ftmh_stacking_ext_enable_set_cb set;
    sw_state_dpp_soc_arad_pp_header_data_ftmh_stacking_ext_enable_get_cb get;
    sw_state_dpp_soc_arad_pp_header_data_ftmh_stacking_ext_enable_verify_cb verify;
} sw_state_dpp_soc_arad_pp_header_data_ftmh_stacking_ext_enable_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_pp_header_data_ftmh_lb_key_ext_en_cbs_s {
    sw_state_dpp_soc_arad_pp_header_data_ftmh_lb_key_ext_en_set_cb set;
    sw_state_dpp_soc_arad_pp_header_data_ftmh_lb_key_ext_en_get_cb get;
    sw_state_dpp_soc_arad_pp_header_data_ftmh_lb_key_ext_en_verify_cb verify;
} sw_state_dpp_soc_arad_pp_header_data_ftmh_lb_key_ext_en_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_pp_header_data_cbs_s {
    sw_state_dpp_soc_arad_pp_header_data_set_cb set;
    sw_state_dpp_soc_arad_pp_header_data_get_cb get;
    sw_state_dpp_soc_arad_pp_header_data_alloc_cb alloc;
    sw_state_dpp_soc_arad_pp_header_data_is_allocated_cb is_allocated;
    sw_state_dpp_soc_arad_pp_header_data_free_cb free;
    sw_state_dpp_soc_arad_pp_header_data_verify_cb verify;
    sw_state_dpp_soc_arad_pp_header_data_system_headers_mode_cbs_t system_headers_mode;
    sw_state_dpp_soc_arad_pp_header_data_ftmh_stacking_ext_enable_cbs_t ftmh_stacking_ext_enable;
    sw_state_dpp_soc_arad_pp_header_data_ftmh_lb_key_ext_en_cbs_t ftmh_lb_key_ext_en;
} sw_state_dpp_soc_arad_pp_header_data_cbs_t;

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

int sw_state_dpp_soc_arad_pp_header_data_access_cb_init(int unit);

#endif /* _SHR_SW_STATE_DPP_SOC_ARAD_PP_HEADER_DATA_ACCESS_H_ */
