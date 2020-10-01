/* 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
*/
#include <sal/core/libc.h>
#include <shared/swstate/sw_state.h>
#include <shared/error.h>
#include <shared/swstate/sw_state_defs.h>
#include <shared/swstate/sw_state_utils.h>
#include <shared/bsl.h>
#include <shared/swstate/layout/sw_state_layout.h>
#include <shared/swstate/layout/sw_state_dpp_soc_jericho_tm_nof_remote_faps_with_remote_credit_value_layout.h>

#ifdef _ERR_MSG_MODULE_NAME  
  #error "_ERR_MSG_MODULE_NAME redefined"  
#endif  
#define _ERR_MSG_MODULE_NAME BSL_LS_SHARED_SWSTATE 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_soc_jericho_tm_nof_remote_faps_with_remote_credit_value_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id){  

   SOC_INIT_FUNC_DEFS;

   /* update current root node */  
   *root_node_id = *next_free_node_id; 
   /* add node */    
   _SOC_IF_ERR_EXIT(shr_sw_state_ds_layout_node_set(unit, 
                                   *root_node_id,                 /* node id var */      
                                   "nof_remote_faps_with_remote_credit_value",             /* name */         
                                   sizeof(uint16),    /* size of the element's type*/          
                                   0,                 /* nof pointers */ 
                                   "uint16",              /* param type */
                                   0,                 /* array size 0 */ 
                                   0));             /* array size 1 */ 
   /* update next free node id */ 
    SW_STATE_NODE_ID_CHECK(unit, ++(*next_free_node_id));  

   SOC_EXIT;
 exit:
   SOC_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
