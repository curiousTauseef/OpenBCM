
/*
 * 
 This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 
 Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_ingress_ctx_id_field_types_definition_vt1_context_id_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_VT1_CONTEXT_ID];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "VT1_CONTEXT_ID" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 35;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "BIER___RCH_TERM_BFIR", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___RCH_TERM_JR_MODE", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(!dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___UNTAGGED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___C_TAG", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___S_TAG", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___S_C_TAGS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___C_C_TAGS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___S_S_TAGS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___E_TAG", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___E_C_TAG", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___E_S_TAG", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___E_S_C_TAGS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___S_PRIORITY_C_TAGS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___UNTAGGED_FRR", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___C_TAG_FRR", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___S_TAG_FRR", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___S_C_TAGS_FRR", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___E_TAG_FRR", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___E_C_TAG_FRR", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___E_S_TAG_FRR", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___E_S_C_TAGS_FRR", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___S_PRIORITY_C_TAGS_FRR", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___PON_STC_C_TAG", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___PON_STC_S_TAG", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___PON_STC_UNTAGGED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___PON_DTC_SP_C_TAG", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___PON_DTC_C_TAG", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___PON_DTC_S_TAG", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___PON_DTC_UNTAGGED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___RCH_TERM_DROP_AND_CONT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___RCH_TERM_REFLECTOR", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___RCH_TERM_XTERMINATION", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___RCH_TERM_EXT_ENCAP", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___NOP_CTX", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___RAW_MPLS", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    if (DBAL_IS_JR2_A0 || DBAL_IS_JR2_B0 || DBAL_IS_J2C_A0 || DBAL_IS_Q2A_A0 || DBAL_IS_Q2A_B0 || DBAL_IS_J2P_A0)
    {
        
        
        
        
        cur_field_type_param->nof_illegal_value = 0;
        cur_field_type_param->min_value = DBAL_DB_INVALID;
        cur_field_type_param->max_value = DBAL_DB_INVALID;
        cur_field_type_param->const_value = DBAL_DB_INVALID;
        cur_field_type_param->default_val = 0;
        cur_field_type_param->default_val_valid = FALSE;
        
        {
            dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
            
            enum_info->value_from_mapping = 0;
            enum_info++;
            
            enum_info->value_from_mapping = 0;
            enum_info++;
            
            enum_info->value_from_mapping = 1;
            enum_info++;
            
            enum_info->value_from_mapping = 2;
            enum_info++;
            
            enum_info->value_from_mapping = 3;
            enum_info++;
            
            enum_info->value_from_mapping = 4;
            enum_info++;
            
            enum_info->value_from_mapping = 5;
            enum_info++;
            
            enum_info->value_from_mapping = 6;
            enum_info++;
            
            enum_info->value_from_mapping = 7;
            enum_info++;
            
            enum_info->value_from_mapping = 8;
            enum_info++;
            
            enum_info->value_from_mapping = 9;
            enum_info++;
            
            enum_info->value_from_mapping = 10;
            enum_info++;
            
            enum_info->value_from_mapping = 11;
            enum_info++;
            
            enum_info->value_from_mapping = 12;
            enum_info++;
            
            enum_info->value_from_mapping = 13;
            enum_info++;
            
            enum_info->value_from_mapping = 14;
            enum_info++;
            
            enum_info->value_from_mapping = 15;
            enum_info++;
            
            enum_info->value_from_mapping = 16;
            enum_info++;
            
            enum_info->value_from_mapping = 17;
            enum_info++;
            
            enum_info->value_from_mapping = 18;
            enum_info++;
            
            enum_info->value_from_mapping = 19;
            enum_info++;
            
            enum_info->value_from_mapping = 20;
            enum_info++;
            
            enum_info->value_from_mapping = 21;
            enum_info++;
            
            enum_info->value_from_mapping = 22;
            enum_info++;
            
            enum_info->value_from_mapping = 23;
            enum_info++;
            
            enum_info->value_from_mapping = 24;
            enum_info++;
            
            enum_info->value_from_mapping = 25;
            enum_info++;
            
            enum_info->value_from_mapping = 26;
            enum_info++;
            
            enum_info->value_from_mapping = 27;
            enum_info++;
            
            enum_info->value_from_mapping = 28;
            enum_info++;
            
            enum_info->value_from_mapping = 29;
            enum_info++;
            
            enum_info->value_from_mapping = 30;
            enum_info++;
            
            enum_info->value_from_mapping = 31;
            enum_info++;
            
            enum_info->value_from_mapping = 32;
            enum_info++;
            
            enum_info->value_from_mapping = 33;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_ingress_ctx_id_field_types_definition_vt2_context_id_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_VT2_CONTEXT_ID];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "VT2_CONTEXT_ID" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 22;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "BIER___TT_P2P_MPLS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIER___TT_P2P_TI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FCOE___FCF_VRF_BY_VSI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FCOE___FCF_VRF_BY_VFT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FCOE___FCF_VRF_BY_PORT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___RCH_TERM_EXT_ENCAP", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___NOP_CTX", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___GLOBAL_IN_LIF_RECLASSIFICATION", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___TT_P2P_TUNNEL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___2ND_PASS_TT_P2P_TUNNEL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___TT_IPSEC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___TT_IPSEC_UDP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___TT_SIP_MSBS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___TT_IPSEC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___TT_IPSEC_UDP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MAC_IN_MAC___LEARN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___TT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___TT_PER_INTERFACE_LABEL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___2ND_PASS_TT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___2ND_PASS_TT_PER_INTERFACE_LABEL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___EVPN_IML", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___SPECIAL_LABEL", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    if (DBAL_IS_JR2_A0 || DBAL_IS_JR2_B0 || DBAL_IS_J2C_A0 || DBAL_IS_Q2A_A0 || DBAL_IS_Q2A_B0 || DBAL_IS_J2P_A0)
    {
        
        
        
        
        cur_field_type_param->nof_illegal_value = 0;
        cur_field_type_param->min_value = DBAL_DB_INVALID;
        cur_field_type_param->max_value = DBAL_DB_INVALID;
        cur_field_type_param->const_value = DBAL_DB_INVALID;
        cur_field_type_param->default_val = 0;
        cur_field_type_param->default_val_valid = FALSE;
        
        {
            dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
            
            enum_info->value_from_mapping = 0;
            enum_info++;
            
            enum_info->value_from_mapping = 1;
            enum_info++;
            
            enum_info->value_from_mapping = 2;
            enum_info++;
            
            enum_info->value_from_mapping = 3;
            enum_info++;
            
            enum_info->value_from_mapping = 4;
            enum_info++;
            
            enum_info->value_from_mapping = 5;
            enum_info++;
            
            enum_info->value_from_mapping = 6;
            enum_info++;
            
            enum_info->value_from_mapping = 7;
            enum_info++;
            
            enum_info->value_from_mapping = 8;
            enum_info++;
            
            enum_info->value_from_mapping = 9;
            enum_info++;
            
            enum_info->value_from_mapping = 10;
            enum_info++;
            
            enum_info->value_from_mapping = 11;
            enum_info++;
            
            enum_info->value_from_mapping = 12;
            enum_info++;
            
            enum_info->value_from_mapping = 13;
            enum_info++;
            
            enum_info->value_from_mapping = 14;
            enum_info++;
            
            enum_info->value_from_mapping = 15;
            enum_info++;
            
            enum_info->value_from_mapping = 16;
            enum_info++;
            
            enum_info->value_from_mapping = 17;
            enum_info++;
            
            enum_info->value_from_mapping = 18;
            enum_info++;
            
            enum_info->value_from_mapping = 19;
            enum_info++;
            
            enum_info->value_from_mapping = 20;
            enum_info++;
            
            enum_info->value_from_mapping = 21;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_ingress_ctx_id_field_types_definition_vt3_context_id_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_VT3_CONTEXT_ID];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "VT3_CONTEXT_ID" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 23;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "BIER___TT_MP_MPLS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIER___TT_MP_TI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___RCH_TERM_EXT_ENCAP", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___NOP_CTX", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPSEC_PARSING_CONTEXT_FIX", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GRE_WITH_KEY___TNI2VRF_VTT3", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GRE_WITH_KEY___TNI2VSI_VTT3", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___TT_MP_AND_TCAM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___2ND_PASS_TT_MP_AND_TCAM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___TT_P2P_AND_TCAM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___TT_DIP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___2ND_PASS_TT_DIP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___TT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___TT_PER_INTERFACE_LABEL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___EVPN_IML", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___EVPN_FL_AFTER_IML", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___EVPN_FL_AND_CW_AFTER_IML", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___SPECULATIVE_PARSING_FIX", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___P2P_ONLY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___SPECIAL_LABEL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PPPOE___SA_COMPRESSION", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "VXLAN_GPE___VNI2VSI_VTT3", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "VXLAN_GPE___VNI2VRF_VTT3", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    if (DBAL_IS_JR2_A0 || DBAL_IS_JR2_B0 || DBAL_IS_J2C_A0 || DBAL_IS_Q2A_A0 || DBAL_IS_Q2A_B0 || DBAL_IS_J2P_A0)
    {
        
        
        
        
        cur_field_type_param->nof_illegal_value = 0;
        cur_field_type_param->min_value = DBAL_DB_INVALID;
        cur_field_type_param->max_value = DBAL_DB_INVALID;
        cur_field_type_param->const_value = DBAL_DB_INVALID;
        cur_field_type_param->default_val = 0;
        cur_field_type_param->default_val_valid = FALSE;
        
        {
            dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
            
            enum_info->value_from_mapping = 0;
            enum_info++;
            
            enum_info->value_from_mapping = 1;
            enum_info++;
            
            enum_info->value_from_mapping = 2;
            enum_info++;
            
            enum_info->value_from_mapping = 3;
            enum_info++;
            
            enum_info->value_from_mapping = 4;
            enum_info++;
            
            enum_info->value_from_mapping = 5;
            enum_info++;
            
            enum_info->value_from_mapping = 6;
            enum_info++;
            
            enum_info->value_from_mapping = 7;
            enum_info++;
            
            enum_info->value_from_mapping = 8;
            enum_info++;
            
            enum_info->value_from_mapping = 9;
            enum_info++;
            
            enum_info->value_from_mapping = 10;
            enum_info++;
            
            enum_info->value_from_mapping = 11;
            enum_info++;
            
            enum_info->value_from_mapping = 12;
            enum_info++;
            
            enum_info->value_from_mapping = 13;
            enum_info++;
            
            enum_info->value_from_mapping = 14;
            enum_info++;
            
            enum_info->value_from_mapping = 15;
            enum_info++;
            
            enum_info->value_from_mapping = 16;
            enum_info++;
            
            enum_info->value_from_mapping = 17;
            enum_info++;
            
            enum_info->value_from_mapping = 18;
            enum_info++;
            
            enum_info->value_from_mapping = 19;
            enum_info++;
            
            enum_info->value_from_mapping = 20;
            enum_info++;
            
            enum_info->value_from_mapping = 21;
            enum_info++;
            
            enum_info->value_from_mapping = 22;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_ingress_ctx_id_field_types_definition_vt4_context_id_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_VT4_CONTEXT_ID];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "VT4_CONTEXT_ID" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 25;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___NOP_CTX", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___2ND_PARSING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GRE_WITH_KEY___TNI2VRF_VTT4", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GRE_WITH_KEY___TNI2VSI_VTT4", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___TT_P2P_TUNNEL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___TT_MP_TUNNEL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___TT_SIP_IDX_DIP_OR_DIP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___TT_SIP_IDX_DIP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "L2TPV2___TT_WO_LENGTH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "L2TPV2___TT_W_LENGTH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MAC_IN_MAC___ISID_WITHOUT_DOMAIN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MAC_IN_MAC___ISID_WITH_DOMAIN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MAC_IN_MAC___ISID_WITHOUT_DOMAIN_LEAF_NODE_OPTIMIZATION", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MAC_IN_MAC___ISID_WITH_DOMAIN_LEAF_NODE_OPTIMIZATION", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___TT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___TT_PER_INTERFACE_LABEL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___EVPN_IML", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___EVPN_FL_AFTER_IML", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___EVPN_FL_AND_CW_AFTER_IML", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___P2P_ONLY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___SPECIAL_LABEL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PPPOE___TT_CMPRS_SA", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PPPOE___TT_FULL_SA", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "VXLAN_GPE___VNI2VSI_VTT4", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "VXLAN_GPE___VNI2VRF_VTT4", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    if (DBAL_IS_JR2_A0 || DBAL_IS_JR2_B0 || DBAL_IS_J2C_A0 || DBAL_IS_Q2A_A0 || DBAL_IS_Q2A_B0 || DBAL_IS_J2P_A0)
    {
        
        
        
        
        cur_field_type_param->nof_illegal_value = 0;
        cur_field_type_param->min_value = DBAL_DB_INVALID;
        cur_field_type_param->max_value = DBAL_DB_INVALID;
        cur_field_type_param->const_value = DBAL_DB_INVALID;
        cur_field_type_param->default_val = 0;
        cur_field_type_param->default_val_valid = FALSE;
        
        {
            dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
            
            enum_info->value_from_mapping = 0;
            enum_info++;
            
            enum_info->value_from_mapping = 1;
            enum_info++;
            
            enum_info->value_from_mapping = 2;
            enum_info++;
            
            enum_info->value_from_mapping = 3;
            enum_info++;
            
            enum_info->value_from_mapping = 4;
            enum_info++;
            
            enum_info->value_from_mapping = 5;
            enum_info++;
            
            enum_info->value_from_mapping = 6;
            enum_info++;
            
            enum_info->value_from_mapping = 7;
            enum_info++;
            
            enum_info->value_from_mapping = 8;
            enum_info++;
            
            enum_info->value_from_mapping = 9;
            enum_info++;
            
            enum_info->value_from_mapping = 10;
            enum_info++;
            
            enum_info->value_from_mapping = 11;
            enum_info++;
            
            enum_info->value_from_mapping = 12;
            enum_info++;
            
            enum_info->value_from_mapping = 13;
            enum_info++;
            
            enum_info->value_from_mapping = 14;
            enum_info++;
            
            enum_info->value_from_mapping = 15;
            enum_info++;
            
            enum_info->value_from_mapping = 16;
            enum_info++;
            
            enum_info->value_from_mapping = 17;
            enum_info++;
            
            enum_info->value_from_mapping = 18;
            enum_info++;
            
            enum_info->value_from_mapping = 19;
            enum_info++;
            
            enum_info->value_from_mapping = 20;
            enum_info++;
            
            enum_info->value_from_mapping = 21;
            enum_info++;
            
            enum_info->value_from_mapping = 22;
            enum_info++;
            
            enum_info->value_from_mapping = 23;
            enum_info++;
            
            enum_info->value_from_mapping = 24;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_ingress_ctx_id_field_types_definition_vt5_context_id_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_VT5_CONTEXT_ID];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "VT5_CONTEXT_ID" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 41;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___INNER_ETHERNET_0_VTAG_NWK_SCOPED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___INNER_ETHERNET_1_VTAG_NWK_SCOPED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___INNER_ETHERNET_2_VTAG_NWK_SCOPED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___INNER_ETHERNET_0_VTAG_LIF_SCOPED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___INNER_ETHERNET_1_VTAG_LIF_SCOPED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___INNER_ETHERNET_2_VTAG_LIF_SCOPED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___INNER_ETHERNET_0_VTAG_NWK_SCOPED_LEARN_NATIVE_AC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___INNER_ETHERNET_1_VTAG_NWK_SCOPED_LEARN_NATIVE_AC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___INNER_ETHERNET_2_VTAG_NWK_SCOPED_LEARN_NATIVE_AC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___INNER_ETHERNET_0_VTAG_LIF_SCOPED_LEARN_NATIVE_AC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___INNER_ETHERNET_1_VTAG_LIF_SCOPED_LEARN_NATIVE_AC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___INNER_ETHERNET_2_VTAG_LIF_SCOPED_LEARN_NATIVE_AC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___PON_DTC_OTHER", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___PON_DTC_C_C_TAG", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___PON_DTC_S_S_TAG", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___PON_DTC_S_C_TAG", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___NOP_CTX", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GRE_WITH_KEY___TNI2VRF_VTT5", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GRE_WITH_KEY___TNI2VSI_VTT5", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GTP___TT_NWK_SCOPED_TEID", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___TT_P2P_TUNNEL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___TT_MP_TUNNEL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___TT_IPSEC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___TT_IPSEC_UDP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___TT_IPSEC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___TT_IPSEC_UDP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___TT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___TT_PER_INTERFACE_LABEL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___EVPN_IML", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___P2P_ONLY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___SPECIAL_LABEL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PPPOE___ADDITIONAL_PROCESSING_PPP_TT_SESSION_ID_SPOOFING_CHECK", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___EXTENDED_TUNNEL_TERMINATE", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___ONE_PASS_TUNNEL_TERMINATE", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___ONE_PASS_TUNNEL_TERMINATE_ETH", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___USID_ENDPOINT", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___UNIFIED_END_POINT_SID_EXTRACT_0", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___UNIFIED_END_POINT_SID_EXTRACT_1", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___UNIFIED_END_POINT_SID_EXTRACT_2", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "VXLAN_GPE___VNI2VSI_VTT5", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "VXLAN_GPE___VNI2VRF_VTT5", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    if (DBAL_IS_J2C_A0 || DBAL_IS_Q2A_A0 || DBAL_IS_Q2A_B0 || DBAL_IS_J2P_A0)
    {
        
        
        
        
        cur_field_type_param->nof_illegal_value = 0;
        cur_field_type_param->min_value = DBAL_DB_INVALID;
        cur_field_type_param->max_value = DBAL_DB_INVALID;
        cur_field_type_param->const_value = DBAL_DB_INVALID;
        cur_field_type_param->default_val = 0;
        cur_field_type_param->default_val_valid = FALSE;
        
        {
            dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
            
            enum_info->value_from_mapping = 0;
            enum_info++;
            
            enum_info->value_from_mapping = 1;
            enum_info++;
            
            enum_info->value_from_mapping = 2;
            enum_info++;
            
            enum_info->value_from_mapping = 3;
            enum_info++;
            
            enum_info->value_from_mapping = 4;
            enum_info++;
            
            enum_info->value_from_mapping = 5;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->value_from_mapping = 12;
            enum_info++;
            
            enum_info->value_from_mapping = 13;
            enum_info++;
            
            enum_info->value_from_mapping = 14;
            enum_info++;
            
            enum_info->value_from_mapping = 15;
            enum_info++;
            
            enum_info->value_from_mapping = 16;
            enum_info++;
            
            enum_info->value_from_mapping = 17;
            enum_info++;
            
            enum_info->value_from_mapping = 18;
            enum_info++;
            
            enum_info->value_from_mapping = 19;
            enum_info++;
            
            enum_info->value_from_mapping = 20;
            enum_info++;
            
            enum_info->value_from_mapping = 21;
            enum_info++;
            
            enum_info->value_from_mapping = 22;
            enum_info++;
            
            enum_info->value_from_mapping = 23;
            enum_info++;
            
            enum_info->value_from_mapping = 24;
            enum_info++;
            
            enum_info->value_from_mapping = 25;
            enum_info++;
            
            enum_info->value_from_mapping = 26;
            enum_info++;
            
            enum_info->value_from_mapping = 27;
            enum_info++;
            
            enum_info->value_from_mapping = 28;
            enum_info++;
            
            enum_info->value_from_mapping = 29;
            enum_info++;
            
            enum_info->value_from_mapping = 30;
            enum_info++;
            
            enum_info->value_from_mapping = 31;
            enum_info++;
            
            enum_info->value_from_mapping = 32;
            enum_info++;
            
            enum_info->value_from_mapping = 33;
            enum_info++;
            
            enum_info->value_from_mapping = 34;
            enum_info++;
            
            enum_info->value_from_mapping = 35;
            enum_info++;
            
            enum_info->value_from_mapping = 36;
            enum_info++;
            
            enum_info->value_from_mapping = 37;
            enum_info++;
            
            enum_info->value_from_mapping = 38;
            enum_info++;
            
            enum_info->value_from_mapping = 39;
            enum_info++;
            
            enum_info->value_from_mapping = 40;
            enum_info++;
        }
    }
    else if (DBAL_IS_JR2_A0 || DBAL_IS_JR2_B0)
    {
        
        
        
        
        cur_field_type_param->nof_illegal_value = 0;
        cur_field_type_param->min_value = DBAL_DB_INVALID;
        cur_field_type_param->max_value = DBAL_DB_INVALID;
        cur_field_type_param->const_value = DBAL_DB_INVALID;
        cur_field_type_param->default_val = 0;
        cur_field_type_param->default_val_valid = FALSE;
        
        {
            dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
            
            enum_info->value_from_mapping = 0;
            enum_info++;
            
            enum_info->value_from_mapping = 1;
            enum_info++;
            
            enum_info->value_from_mapping = 2;
            enum_info++;
            
            enum_info->value_from_mapping = 3;
            enum_info++;
            
            enum_info->value_from_mapping = 4;
            enum_info++;
            
            enum_info->value_from_mapping = 5;
            enum_info++;
            
            enum_info->value_from_mapping = 6;
            enum_info++;
            
            enum_info->value_from_mapping = 7;
            enum_info++;
            
            enum_info->value_from_mapping = 8;
            enum_info++;
            
            enum_info->value_from_mapping = 9;
            enum_info++;
            
            enum_info->value_from_mapping = 10;
            enum_info++;
            
            enum_info->value_from_mapping = 11;
            enum_info++;
            
            enum_info->value_from_mapping = 12;
            enum_info++;
            
            enum_info->value_from_mapping = 13;
            enum_info++;
            
            enum_info->value_from_mapping = 14;
            enum_info++;
            
            enum_info->value_from_mapping = 15;
            enum_info++;
            
            enum_info->value_from_mapping = 16;
            enum_info++;
            
            enum_info->value_from_mapping = 17;
            enum_info++;
            
            enum_info->value_from_mapping = 18;
            enum_info++;
            
            enum_info->value_from_mapping = 19;
            enum_info++;
            
            enum_info->value_from_mapping = 20;
            enum_info++;
            
            enum_info->value_from_mapping = 21;
            enum_info++;
            
            enum_info->value_from_mapping = 22;
            enum_info++;
            
            enum_info->value_from_mapping = 23;
            enum_info++;
            
            enum_info->value_from_mapping = 24;
            enum_info++;
            
            enum_info->value_from_mapping = 25;
            enum_info++;
            
            enum_info->value_from_mapping = 26;
            enum_info++;
            
            enum_info->value_from_mapping = 27;
            enum_info++;
            
            enum_info->value_from_mapping = 28;
            enum_info++;
            
            enum_info->value_from_mapping = 29;
            enum_info++;
            
            enum_info->value_from_mapping = 30;
            enum_info++;
            
            enum_info->value_from_mapping = 31;
            enum_info++;
            
            enum_info->value_from_mapping = 32;
            enum_info++;
            
            enum_info->value_from_mapping = 33;
            enum_info++;
            
            enum_info->value_from_mapping = 34;
            enum_info++;
            
            enum_info->value_from_mapping = 35;
            enum_info++;
            
            enum_info->value_from_mapping = 36;
            enum_info++;
            
            enum_info->value_from_mapping = 37;
            enum_info++;
            
            enum_info->value_from_mapping = 38;
            enum_info++;
            
            enum_info->value_from_mapping = 39;
            enum_info++;
            
            enum_info->value_from_mapping = 40;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_ingress_ctx_id_field_types_definition_fwd1_context_id_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_FWD1_CONTEXT_ID];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "FWD1_CONTEXT_ID" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 46;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "BIER___TI_FORWARDING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIER___MPLS_FORWARDING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___SVL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___IPV4MC_SVL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___IPV6MC_SVL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FCOE___FCF_NO_VFT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FCOE___FCF_NPV_NO_VFT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FCOE___FCF_VFT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FCOE___FCF_NPV_VFT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FCOE___TRANSIT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FCOE___TRANSIT_FIP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___NOP_CTX", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___NOP_CTX_MACT_SA_LKP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___RCH_TERM_EXT_ENCAP", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___MC_PRIVATE_PUBLIC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___MC_PRIVATE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___MC_PRIVATE_PUBLIC_MACT_SA_LKP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___MC_PRIVATE_MACT_SA_LKP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___PRIVATE_PUBLIC_OPTIMIZED_UC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___PRIVATE_UC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___PRIVATE_PUBLIC_OPTIMIZED_UC_W_OPTIONS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___PRIVATE_UC_W_OPTIONS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___PRIVATE_PUBLIC_OPTIMIZED_UC_MACT_SA_LKP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___PRIVATE_UC_MACT_SA_LKP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___PRIVATE_PUBLIC_OPTIMIZED_UC_W_OPTIONS_MACT_SA_LKP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___PRIVATE_UC_W_OPTIONS_MACT_SA_LKP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___MC_PRIVATE_PUBLIC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___MC_PRIVATE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___MC_PRIVATE_PUBLIC_MACT_SA_LKP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___MC_PRIVATE_MACT_SA_LKP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___PRIVATE_PUBLIC_OPTIMIZED_UC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___PRIVATE_UC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___PRIVATE_PUBLIC_OPTIMIZED_UC_MACT_SA_LKP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___PRIVATE_UC_MACT_SA_LKP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___FWD", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___FWD_MACT_SA_LKP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___FWD_PER_INTERFACE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___OAM_ONLY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SLLB___IPV4_ROUTE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SLLB___IPV6_ROUTE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___SEGMENT_END_POINT_FORWARDING", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___USID_END_POINT_FORWARDING", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___USID_NOP_CTX", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___UNIFIED_END_POINT_FORWARDING", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___NAT_UPSTREAM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___NAT_DOWNSTREAM", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    if (DBAL_IS_J2P_A0)
    {
        
        
        
        
        cur_field_type_param->nof_illegal_value = 0;
        cur_field_type_param->min_value = DBAL_DB_INVALID;
        cur_field_type_param->max_value = DBAL_DB_INVALID;
        cur_field_type_param->const_value = DBAL_DB_INVALID;
        cur_field_type_param->default_val = 0;
        cur_field_type_param->default_val_valid = FALSE;
        
        {
            dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
            
            enum_info->value_from_mapping = 0;
            enum_info++;
            
            enum_info->value_from_mapping = 1;
            enum_info++;
            
            enum_info->value_from_mapping = 2;
            enum_info++;
            
            enum_info->value_from_mapping = 3;
            enum_info++;
            
            enum_info->value_from_mapping = 4;
            enum_info++;
            
            enum_info->value_from_mapping = 5;
            enum_info++;
            
            enum_info->value_from_mapping = 6;
            enum_info++;
            
            enum_info->value_from_mapping = 7;
            enum_info++;
            
            enum_info->value_from_mapping = 8;
            enum_info++;
            
            enum_info->value_from_mapping = 9;
            enum_info++;
            
            enum_info->value_from_mapping = 10;
            enum_info++;
            
            enum_info->value_from_mapping = 11;
            enum_info++;
            
            enum_info->value_from_mapping = 12;
            enum_info++;
            
            enum_info->value_from_mapping = 13;
            enum_info++;
            
            enum_info->value_from_mapping = 14;
            enum_info++;
            
            enum_info->value_from_mapping = 15;
            enum_info++;
            
            enum_info->value_from_mapping = 16;
            enum_info++;
            
            enum_info->value_from_mapping = 17;
            enum_info++;
            
            enum_info->value_from_mapping = 18;
            enum_info++;
            
            enum_info->value_from_mapping = 19;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->value_from_mapping = 22;
            enum_info++;
            
            enum_info->value_from_mapping = 23;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->value_from_mapping = 28;
            enum_info++;
            
            enum_info->value_from_mapping = 29;
            enum_info++;
            
            enum_info->value_from_mapping = 30;
            enum_info++;
            
            enum_info->value_from_mapping = 31;
            enum_info++;
            
            enum_info->value_from_mapping = 32;
            enum_info++;
            
            enum_info->value_from_mapping = 33;
            enum_info++;
            
            enum_info->value_from_mapping = 34;
            enum_info++;
            
            enum_info->value_from_mapping = 35;
            enum_info++;
            
            enum_info->value_from_mapping = 36;
            enum_info++;
            
            enum_info->value_from_mapping = 37;
            enum_info++;
            
            enum_info->value_from_mapping = 38;
            enum_info++;
            
            enum_info->value_from_mapping = 39;
            enum_info++;
            
            enum_info->value_from_mapping = 40;
            enum_info++;
            
            enum_info->value_from_mapping = 41;
            enum_info++;
            
            enum_info->value_from_mapping = 42;
            enum_info++;
            
            enum_info->value_from_mapping = 43;
            enum_info++;
            
            enum_info->value_from_mapping = 44;
            enum_info++;
            
            enum_info->value_from_mapping = 45;
            enum_info++;
            
            enum_info->value_from_mapping = 26;
            enum_info++;
            
            enum_info->value_from_mapping = 27;
            enum_info++;
        }
    }
    else if (DBAL_IS_JR2_A0)
    {
        
        
        
        
        cur_field_type_param->nof_illegal_value = 0;
        cur_field_type_param->min_value = DBAL_DB_INVALID;
        cur_field_type_param->max_value = DBAL_DB_INVALID;
        cur_field_type_param->const_value = DBAL_DB_INVALID;
        cur_field_type_param->default_val = 0;
        cur_field_type_param->default_val_valid = FALSE;
        
        {
            dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
            
            enum_info->value_from_mapping = 0;
            enum_info++;
            
            enum_info->value_from_mapping = 1;
            enum_info++;
            
            enum_info->value_from_mapping = 2;
            enum_info++;
            
            enum_info->value_from_mapping = 3;
            enum_info++;
            
            enum_info->value_from_mapping = 4;
            enum_info++;
            
            enum_info->value_from_mapping = 5;
            enum_info++;
            
            enum_info->value_from_mapping = 6;
            enum_info++;
            
            enum_info->value_from_mapping = 7;
            enum_info++;
            
            enum_info->value_from_mapping = 8;
            enum_info++;
            
            enum_info->value_from_mapping = 9;
            enum_info++;
            
            enum_info->value_from_mapping = 10;
            enum_info++;
            
            enum_info->value_from_mapping = 11;
            enum_info++;
            
            enum_info->value_from_mapping = 12;
            enum_info++;
            
            enum_info->value_from_mapping = 13;
            enum_info++;
            
            enum_info->value_from_mapping = 14;
            enum_info++;
            
            enum_info->value_from_mapping = 15;
            enum_info++;
            
            enum_info->value_from_mapping = 16;
            enum_info++;
            
            enum_info->value_from_mapping = 17;
            enum_info++;
            
            enum_info->value_from_mapping = 18;
            enum_info++;
            
            enum_info->value_from_mapping = 19;
            enum_info++;
            
            enum_info->value_from_mapping = 20;
            enum_info++;
            
            enum_info->value_from_mapping = 21;
            enum_info++;
            
            enum_info->value_from_mapping = 22;
            enum_info++;
            
            enum_info->value_from_mapping = 23;
            enum_info++;
            
            enum_info->value_from_mapping = 24;
            enum_info++;
            
            enum_info->value_from_mapping = 25;
            enum_info++;
            
            enum_info->value_from_mapping = 28;
            enum_info++;
            
            enum_info->value_from_mapping = 29;
            enum_info++;
            
            enum_info->value_from_mapping = 30;
            enum_info++;
            
            enum_info->value_from_mapping = 31;
            enum_info++;
            
            enum_info->value_from_mapping = 32;
            enum_info++;
            
            enum_info->value_from_mapping = 33;
            enum_info++;
            
            enum_info->value_from_mapping = 34;
            enum_info++;
            
            enum_info->value_from_mapping = 35;
            enum_info++;
            
            enum_info->value_from_mapping = 36;
            enum_info++;
            
            enum_info->value_from_mapping = 37;
            enum_info++;
            
            enum_info->value_from_mapping = 38;
            enum_info++;
            
            enum_info->value_from_mapping = 39;
            enum_info++;
            
            enum_info->value_from_mapping = 40;
            enum_info++;
            
            enum_info->value_from_mapping = 41;
            enum_info++;
            
            enum_info->value_from_mapping = 42;
            enum_info++;
            
            enum_info->value_from_mapping = 43;
            enum_info++;
            
            enum_info->value_from_mapping = 44;
            enum_info++;
            
            enum_info->value_from_mapping = 45;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
        }
    }
    else if (DBAL_IS_JR2_B0 || DBAL_IS_J2C_A0 || DBAL_IS_Q2A_A0 || DBAL_IS_Q2A_B0)
    {
        
        
        
        
        cur_field_type_param->nof_illegal_value = 0;
        cur_field_type_param->min_value = DBAL_DB_INVALID;
        cur_field_type_param->max_value = DBAL_DB_INVALID;
        cur_field_type_param->const_value = DBAL_DB_INVALID;
        cur_field_type_param->default_val = 0;
        cur_field_type_param->default_val_valid = FALSE;
        
        {
            dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
            
            enum_info->value_from_mapping = 0;
            enum_info++;
            
            enum_info->value_from_mapping = 1;
            enum_info++;
            
            enum_info->value_from_mapping = 2;
            enum_info++;
            
            enum_info->value_from_mapping = 3;
            enum_info++;
            
            enum_info->value_from_mapping = 4;
            enum_info++;
            
            enum_info->value_from_mapping = 5;
            enum_info++;
            
            enum_info->value_from_mapping = 6;
            enum_info++;
            
            enum_info->value_from_mapping = 7;
            enum_info++;
            
            enum_info->value_from_mapping = 8;
            enum_info++;
            
            enum_info->value_from_mapping = 9;
            enum_info++;
            
            enum_info->value_from_mapping = 10;
            enum_info++;
            
            enum_info->value_from_mapping = 11;
            enum_info++;
            
            enum_info->value_from_mapping = 12;
            enum_info++;
            
            enum_info->value_from_mapping = 13;
            enum_info++;
            
            enum_info->value_from_mapping = 14;
            enum_info++;
            
            enum_info->value_from_mapping = 15;
            enum_info++;
            
            enum_info->value_from_mapping = 16;
            enum_info++;
            
            enum_info->value_from_mapping = 17;
            enum_info++;
            
            enum_info->value_from_mapping = 18;
            enum_info++;
            
            enum_info->value_from_mapping = 19;
            enum_info++;
            
            enum_info->value_from_mapping = 20;
            enum_info++;
            
            enum_info->value_from_mapping = 21;
            enum_info++;
            
            enum_info->value_from_mapping = 22;
            enum_info++;
            
            enum_info->value_from_mapping = 23;
            enum_info++;
            
            enum_info->value_from_mapping = 24;
            enum_info++;
            
            enum_info->value_from_mapping = 25;
            enum_info++;
            
            enum_info->value_from_mapping = 28;
            enum_info++;
            
            enum_info->value_from_mapping = 29;
            enum_info++;
            
            enum_info->value_from_mapping = 30;
            enum_info++;
            
            enum_info->value_from_mapping = 31;
            enum_info++;
            
            enum_info->value_from_mapping = 32;
            enum_info++;
            
            enum_info->value_from_mapping = 33;
            enum_info++;
            
            enum_info->value_from_mapping = 34;
            enum_info++;
            
            enum_info->value_from_mapping = 35;
            enum_info++;
            
            enum_info->value_from_mapping = 36;
            enum_info++;
            
            enum_info->value_from_mapping = 37;
            enum_info++;
            
            enum_info->value_from_mapping = 38;
            enum_info++;
            
            enum_info->value_from_mapping = 39;
            enum_info++;
            
            enum_info->value_from_mapping = 40;
            enum_info++;
            
            enum_info->value_from_mapping = 41;
            enum_info++;
            
            enum_info->value_from_mapping = 42;
            enum_info++;
            
            enum_info->value_from_mapping = 43;
            enum_info++;
            
            enum_info->value_from_mapping = 44;
            enum_info++;
            
            enum_info->value_from_mapping = 45;
            enum_info++;
            
            enum_info->value_from_mapping = 26;
            enum_info++;
            
            enum_info->value_from_mapping = 27;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_ingress_ctx_id_field_types_definition_fwd2_context_id_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_FWD2_CONTEXT_ID];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "FWD2_CONTEXT_ID" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 61;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___IPV4MC_SVL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___IPV6MC_SVL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___SVL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FCOE___FCF", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FCOE___FCF_FIP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___NOP_CTX", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___RCH_TERM_EXT_ENCAP", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___MC_PRIVATE_W_BF_W_F2B", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___MC_PRIVATE_WO_BF_W_F2B", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___MC_PRIVATE_WO_BF_WO_F2B", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___PRIVATE_UC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___PRIVATE_UC_LPM_ONLY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___MC_PRIVATE_W_BF_W_F2B", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___MC_PRIVATE_WO_BF_W_F2B", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___MC_PRIVATE_WO_BF_WO_F2B", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___PRIVATE_UC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___PRIVATE_UC_LPM_ONLY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___PRIVATE_UC_BFD", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___OAM_ONLY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___FWD", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SLLB___VIRTUAL_IPV4_ROUTE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SLLB___VIRTUAL_IPV6_ROUTE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SLLB___SIMPLE_IPV4_ROUTE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SLLB___SIMPLE_IPV6_ROUTE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___PRIVATE_UC", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___USID_PRIVATE_UC", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___USID_NOP_CTX", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_32", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_33", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_34", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_35", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_36", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_37", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_38", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_39", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_40", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_41", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_42", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_43", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_44", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_45", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_46", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_47", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_48", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_49", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_50", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_51", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_52", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_53", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_54", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_55", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_56", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_57", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_58", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_59", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_60", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_61", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_62", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL_CONTEXT_63", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___NAT_UPSTREAM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___NAT_DOWNSTREAM", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    if (DBAL_IS_JR2_A0)
    {
        
        
        
        
        cur_field_type_param->nof_illegal_value = 0;
        cur_field_type_param->min_value = DBAL_DB_INVALID;
        cur_field_type_param->max_value = DBAL_DB_INVALID;
        cur_field_type_param->const_value = DBAL_DB_INVALID;
        cur_field_type_param->default_val = 0;
        cur_field_type_param->default_val_valid = FALSE;
        
        {
            dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
            
            enum_info->value_from_mapping = 0;
            enum_info++;
            
            enum_info->value_from_mapping = 1;
            enum_info++;
            
            enum_info->value_from_mapping = 2;
            enum_info++;
            
            enum_info->value_from_mapping = 3;
            enum_info++;
            
            enum_info->value_from_mapping = 4;
            enum_info++;
            
            enum_info->value_from_mapping = 5;
            enum_info++;
            
            enum_info->value_from_mapping = 6;
            enum_info++;
            
            enum_info->value_from_mapping = 7;
            enum_info++;
            
            enum_info->value_from_mapping = 8;
            enum_info++;
            
            enum_info->value_from_mapping = 9;
            enum_info++;
            
            enum_info->value_from_mapping = 10;
            enum_info++;
            
            enum_info->value_from_mapping = 11;
            enum_info++;
            
            enum_info->value_from_mapping = 14;
            enum_info++;
            
            enum_info->value_from_mapping = 15;
            enum_info++;
            
            enum_info->value_from_mapping = 16;
            enum_info++;
            
            enum_info->value_from_mapping = 17;
            enum_info++;
            
            enum_info->value_from_mapping = 18;
            enum_info++;
            
            enum_info->value_from_mapping = 19;
            enum_info++;
            
            enum_info->value_from_mapping = 20;
            enum_info++;
            
            enum_info->value_from_mapping = 21;
            enum_info++;
            
            enum_info->value_from_mapping = 22;
            enum_info++;
            
            enum_info->value_from_mapping = 23;
            enum_info++;
            
            enum_info->value_from_mapping = 24;
            enum_info++;
            
            enum_info->value_from_mapping = 25;
            enum_info++;
            
            enum_info->value_from_mapping = 26;
            enum_info++;
            
            enum_info->value_from_mapping = 27;
            enum_info++;
            
            enum_info->value_from_mapping = 28;
            enum_info++;
            
            enum_info->value_from_mapping = 32;
            enum_info++;
            
            enum_info->value_from_mapping = 33;
            enum_info++;
            
            enum_info->value_from_mapping = 34;
            enum_info++;
            
            enum_info->value_from_mapping = 35;
            enum_info++;
            
            enum_info->value_from_mapping = 36;
            enum_info++;
            
            enum_info->value_from_mapping = 37;
            enum_info++;
            
            enum_info->value_from_mapping = 38;
            enum_info++;
            
            enum_info->value_from_mapping = 39;
            enum_info++;
            
            enum_info->value_from_mapping = 40;
            enum_info++;
            
            enum_info->value_from_mapping = 41;
            enum_info++;
            
            enum_info->value_from_mapping = 42;
            enum_info++;
            
            enum_info->value_from_mapping = 43;
            enum_info++;
            
            enum_info->value_from_mapping = 44;
            enum_info++;
            
            enum_info->value_from_mapping = 45;
            enum_info++;
            
            enum_info->value_from_mapping = 46;
            enum_info++;
            
            enum_info->value_from_mapping = 47;
            enum_info++;
            
            enum_info->value_from_mapping = 48;
            enum_info++;
            
            enum_info->value_from_mapping = 49;
            enum_info++;
            
            enum_info->value_from_mapping = 50;
            enum_info++;
            
            enum_info->value_from_mapping = 51;
            enum_info++;
            
            enum_info->value_from_mapping = 52;
            enum_info++;
            
            enum_info->value_from_mapping = 53;
            enum_info++;
            
            enum_info->value_from_mapping = 54;
            enum_info++;
            
            enum_info->value_from_mapping = 55;
            enum_info++;
            
            enum_info->value_from_mapping = 56;
            enum_info++;
            
            enum_info->value_from_mapping = 57;
            enum_info++;
            
            enum_info->value_from_mapping = 58;
            enum_info++;
            
            enum_info->value_from_mapping = 59;
            enum_info++;
            
            enum_info->value_from_mapping = 60;
            enum_info++;
            
            enum_info->value_from_mapping = 61;
            enum_info++;
            
            enum_info->value_from_mapping = 62;
            enum_info++;
            
            enum_info->value_from_mapping = 63;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
        }
    }
    else if (DBAL_IS_JR2_B0 || DBAL_IS_J2C_A0 || DBAL_IS_Q2A_A0 || DBAL_IS_Q2A_B0 || DBAL_IS_J2P_A0)
    {
        
        
        
        
        cur_field_type_param->nof_illegal_value = 0;
        cur_field_type_param->min_value = DBAL_DB_INVALID;
        cur_field_type_param->max_value = DBAL_DB_INVALID;
        cur_field_type_param->const_value = DBAL_DB_INVALID;
        cur_field_type_param->default_val = 0;
        cur_field_type_param->default_val_valid = FALSE;
        
        {
            dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
            
            enum_info->value_from_mapping = 0;
            enum_info++;
            
            enum_info->value_from_mapping = 1;
            enum_info++;
            
            enum_info->value_from_mapping = 2;
            enum_info++;
            
            enum_info->value_from_mapping = 3;
            enum_info++;
            
            enum_info->value_from_mapping = 4;
            enum_info++;
            
            enum_info->value_from_mapping = 5;
            enum_info++;
            
            enum_info->value_from_mapping = 6;
            enum_info++;
            
            enum_info->value_from_mapping = 7;
            enum_info++;
            
            enum_info->value_from_mapping = 8;
            enum_info++;
            
            enum_info->value_from_mapping = 9;
            enum_info++;
            
            enum_info->value_from_mapping = 10;
            enum_info++;
            
            enum_info->value_from_mapping = 11;
            enum_info++;
            
            enum_info->value_from_mapping = 14;
            enum_info++;
            
            enum_info->value_from_mapping = 15;
            enum_info++;
            
            enum_info->value_from_mapping = 16;
            enum_info++;
            
            enum_info->value_from_mapping = 17;
            enum_info++;
            
            enum_info->value_from_mapping = 18;
            enum_info++;
            
            enum_info->value_from_mapping = 19;
            enum_info++;
            
            enum_info->value_from_mapping = 20;
            enum_info++;
            
            enum_info->value_from_mapping = 21;
            enum_info++;
            
            enum_info->value_from_mapping = 22;
            enum_info++;
            
            enum_info->value_from_mapping = 23;
            enum_info++;
            
            enum_info->value_from_mapping = 24;
            enum_info++;
            
            enum_info->value_from_mapping = 25;
            enum_info++;
            
            enum_info->value_from_mapping = 26;
            enum_info++;
            
            enum_info->value_from_mapping = 27;
            enum_info++;
            
            enum_info->value_from_mapping = 28;
            enum_info++;
            
            enum_info->value_from_mapping = 32;
            enum_info++;
            
            enum_info->value_from_mapping = 33;
            enum_info++;
            
            enum_info->value_from_mapping = 34;
            enum_info++;
            
            enum_info->value_from_mapping = 35;
            enum_info++;
            
            enum_info->value_from_mapping = 36;
            enum_info++;
            
            enum_info->value_from_mapping = 37;
            enum_info++;
            
            enum_info->value_from_mapping = 38;
            enum_info++;
            
            enum_info->value_from_mapping = 39;
            enum_info++;
            
            enum_info->value_from_mapping = 40;
            enum_info++;
            
            enum_info->value_from_mapping = 41;
            enum_info++;
            
            enum_info->value_from_mapping = 42;
            enum_info++;
            
            enum_info->value_from_mapping = 43;
            enum_info++;
            
            enum_info->value_from_mapping = 44;
            enum_info++;
            
            enum_info->value_from_mapping = 45;
            enum_info++;
            
            enum_info->value_from_mapping = 46;
            enum_info++;
            
            enum_info->value_from_mapping = 47;
            enum_info++;
            
            enum_info->value_from_mapping = 48;
            enum_info++;
            
            enum_info->value_from_mapping = 49;
            enum_info++;
            
            enum_info->value_from_mapping = 50;
            enum_info++;
            
            enum_info->value_from_mapping = 51;
            enum_info++;
            
            enum_info->value_from_mapping = 52;
            enum_info++;
            
            enum_info->value_from_mapping = 53;
            enum_info++;
            
            enum_info->value_from_mapping = 54;
            enum_info++;
            
            enum_info->value_from_mapping = 55;
            enum_info++;
            
            enum_info->value_from_mapping = 56;
            enum_info++;
            
            enum_info->value_from_mapping = 57;
            enum_info++;
            
            enum_info->value_from_mapping = 58;
            enum_info++;
            
            enum_info->value_from_mapping = 59;
            enum_info++;
            
            enum_info->value_from_mapping = 60;
            enum_info++;
            
            enum_info->value_from_mapping = 61;
            enum_info++;
            
            enum_info->value_from_mapping = 62;
            enum_info++;
            
            enum_info->value_from_mapping = 63;
            enum_info++;
            
            enum_info->value_from_mapping = 12;
            enum_info++;
            
            enum_info->value_from_mapping = 13;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
dbal_init_field_types_auto_generated_standard_1_standard_1_ingress_ctx_id_field_types_definition_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    SHR_FUNC_INIT_VARS(unit);
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_ingress_ctx_id_field_types_definition_vt1_context_id_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_ingress_ctx_id_field_types_definition_vt2_context_id_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_ingress_ctx_id_field_types_definition_vt3_context_id_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_ingress_ctx_id_field_types_definition_vt4_context_id_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_ingress_ctx_id_field_types_definition_vt5_context_id_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_ingress_ctx_id_field_types_definition_fwd1_context_id_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_ingress_ctx_id_field_types_definition_fwd2_context_id_init(unit, cur_field_type_param, field_types_info));
exit:
    SHR_FUNC_EXIT;
}
