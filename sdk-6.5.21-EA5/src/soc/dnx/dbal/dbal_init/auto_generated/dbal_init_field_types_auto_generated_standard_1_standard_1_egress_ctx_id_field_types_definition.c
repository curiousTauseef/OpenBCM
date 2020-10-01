
/*
 * 
 This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 
 Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_egress_ctx_id_field_types_definition_prp2_context_id_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_PRP2_CONTEXT_ID];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "PRP2_CONTEXT_ID" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 13;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___CPU_PORT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___CPU_PORT_CANCEL_SYSHDR_ENC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___RAW_PORT_CANCEL_SYSHDR_ENC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___CANCEL_SYSHDR_ENC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___CANCEL_SYSHDR_LIF_PORT_BASED_LIF", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___NOP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___JR1_IP_FORWARD_CODE_FIX", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(!dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___SFLOW_HDR_DP", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___SFLOW_HDR_SAMP", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___SFLOW_EXT_SECOND", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPV6_PARTIAL_TERMINATION", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___RFC8321_IPV6_ON_FLOW_ID", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAM___MPLS_DM_INJECTION", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 6;
            enum_info++;
            
            enum_info->value_from_mapping = 7;
            enum_info++;
            
            enum_info->value_from_mapping = 8;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->value_from_mapping = 10;
            enum_info++;
            
            enum_info->value_from_mapping = 11;
            enum_info++;
        }
    }
    else if (DBAL_IS_JR2_A0 || DBAL_IS_JR2_B0 || DBAL_IS_J2C_A0 || DBAL_IS_Q2A_A0 || DBAL_IS_Q2A_B0)
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_egress_ctx_id_field_types_definition_term_context_id_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_TERM_CONTEXT_ID];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "TERM_CONTEXT_ID" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 52;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___HEADER_TERMINATION", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___HEADER_TERMINATION_AND_POP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___HEADER_TERMINATION_DEEP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___MPLS_INJECTED_FROM_OAMP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___W_FWD_PLUS_1_REMARK_HEADER_TERMINATION", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___TERMINATE_UP_TO_PSO", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___BUILD_FTMH_FROM_PIPE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___1588", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___OAM_TX_INJECT_JR1", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(!dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___SFLOW_HDR_DP", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___SFLOW_HDR_SAMP", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM___MACT_JR1_DSP_DEST_SWITCH_BETWEEN_JR1_ARAD_ENCODING", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(!dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___SFLOW_EXT_FIRST", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM___MACT_JR1_DSP_COPY_DSP_CMD_23_TO_0_AS_IS", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(!dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___SFLOW_EXT_SECOND", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM___ETH_INTO_COE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM___MACT_JR2_DSP_CMD_TO_REFRESH", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA_FIRST_DP", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA2_0_INGRESS", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA2_0_EGRESS_NO_MD", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA2_0_INTERMEDIATE", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA2_0_INTERMEDIATE_NO_MD", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___OAM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___INT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_TAIL", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___RAW_PROC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___NOP_CTX", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___INGRESS_TRAPPED_OAMP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___CPU_PORT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___MIRROR_OR_SS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___TRANSIT_CCM_SD", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___TRANSIT_CCM_SD_1_ADDITIONAL_LABEL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___TRANSIT_CCM_SD_2_ADDITIONAL_LABELS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___TRANSIT_CCM_SD_3_ADDITIONAL_LABELS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___PHP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___PHP_1588", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "REFLECTORS___TWAMPOIPV4_1ST_PASS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "REFLECTORS___TWAMPOIPV6_1ST_PASS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "REFLECTORS___TWAMP_2ND_PASS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "REFLECTORS___L2_OAM_TERM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "REFLECTORS___IP_UDP_SWAP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "REFLECTORS___IPV6_UDP_SWAP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "REFLECTORS___UDP_SWAP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "REFLECTORS___SEAMLESS_BFD", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___SEGMENT_ENDPOINT", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___PSP", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___EXTENDED_PASS", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM___TX_INJECT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___HEADER_TERMINATION_NAT_UDP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___HEADER_TERMINATION_NAT_TCP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IOAM_JP", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    if (DBAL_IS_J2C_A0)
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
            
            enum_info->value_from_mapping = 8;
            enum_info++;
            
            enum_info->value_from_mapping = 9;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->value_from_mapping = 10;
            enum_info++;
            
            enum_info->value_from_mapping = 10;
            enum_info++;
            
            enum_info->value_from_mapping = 11;
            enum_info++;
            
            enum_info->value_from_mapping = 12;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
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
            
            enum_info->value_from_mapping = 46;
            enum_info++;
            
            enum_info->value_from_mapping = 47;
            enum_info++;
            
            enum_info->value_from_mapping = 28;
            enum_info++;
            
            enum_info->value_from_mapping = 29;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
        }
    }
    else if (DBAL_IS_J2P_A0)
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
            
            enum_info->value_from_mapping = 8;
            enum_info++;
            
            enum_info->value_from_mapping = 9;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->value_from_mapping = 10;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->value_from_mapping = 11;
            enum_info++;
            
            enum_info->value_from_mapping = 12;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
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
            
            enum_info->value_from_mapping = 46;
            enum_info++;
            
            enum_info->value_from_mapping = 47;
            enum_info++;
            
            enum_info->value_from_mapping = 28;
            enum_info++;
            
            enum_info->value_from_mapping = 29;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
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
            
            enum_info->value_from_mapping = 8;
            enum_info++;
            
            enum_info->value_from_mapping = 9;
            enum_info++;
            
            enum_info->value_from_mapping = 9;
            enum_info++;
            
            enum_info->value_from_mapping = 10;
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
            
            enum_info->value_from_mapping = 46;
            enum_info++;
            
            enum_info->value_from_mapping = 47;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
        }
    }
    else if (DBAL_IS_JR2_B0)
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
            
            enum_info->value_from_mapping = 8;
            enum_info++;
            
            enum_info->value_from_mapping = 9;
            enum_info++;
            
            enum_info->value_from_mapping = 9;
            enum_info++;
            
            enum_info->value_from_mapping = 10;
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
            
            enum_info->value_from_mapping = 46;
            enum_info++;
            
            enum_info->value_from_mapping = 47;
            enum_info++;
            
            enum_info->value_from_mapping = 28;
            enum_info++;
            
            enum_info->value_from_mapping = 29;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
        }
    }
    else if (DBAL_IS_Q2A_A0 || DBAL_IS_Q2A_B0)
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
            
            enum_info->value_from_mapping = 8;
            enum_info++;
            
            enum_info->value_from_mapping = 9;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->value_from_mapping = 10;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->value_from_mapping = 11;
            enum_info++;
            
            enum_info->value_from_mapping = 12;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
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
            
            enum_info->value_from_mapping = 46;
            enum_info++;
            
            enum_info->value_from_mapping = 47;
            enum_info++;
            
            enum_info->value_from_mapping = 28;
            enum_info++;
            
            enum_info->value_from_mapping = 29;
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
_dbal_init_field_types_auto_generated_standard_1_standard_1_egress_ctx_id_field_types_definition_fwd_context_id_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_FWD_CONTEXT_ID];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "FWD_CONTEXT_ID" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 61;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "BIER___TI_FORWARDING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___ETPP_FORWARDING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___ETPP_FORWARDING_WO_ETPS_POP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM___MACT_JR1_DSP_NULLIFY_KEY_MSBS", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(!dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___BFD_PWE_CW_WA", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___DO_NOT_EDIT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___DO_NOT_EDIT_AND_POP_ETPS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___NOP_CTX", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM___MACT_JR1_DSP_COPY_DSP_LSBS_AND_CMD_TO_REFRESH", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(!dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___SFLOW_HDR_DP", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM___MACT_JR1_DSP_CMD_TO_REFRESH", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(!dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___SFLOW_HDR_SAMP", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___SFLOW_EXT_FIRST", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___SFLOW_EXT_SECOND", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM___ETH_INTO_COE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA_FIRST_DP", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA2_0_INGRESS", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA2_0_EGRESS_NO_MD_FORWARD", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA2_0_INTERMEDIATE", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA2_0_INTERMEDIATE_NO_MD", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_TAIL_AM", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_TAIL", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___RAW_PROC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___NOP_AND_POP_2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___NOP_AND_POP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___FORWARDING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___FORWARDING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___ETPP_FORWARDING_WO_ETPS_POP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___ETPP_FORWARDING_WO_ETPS_POP_REMARK_TOS_P1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___ETPP_FORWARDING_WO_ETPS_POP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___ETPP_FORWARDING_WO_ETPS_POP_REMARK_TOS_P1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___SWAP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___SWAPTOSELF", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___SWAP_COUPLED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___PHP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAM___OAM_REFLECTOR", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAM___UP_MEP_COE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PPP___NOP_CTX", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "REFLECTORS___L2_SWAP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "REFLECTORS___L2_SWAP_INTERNAL_REFLECTOR", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "REFLECTORS___L2_SWAP_WITH_IPV6_SWAP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "REFLECTORS___L2_SWAP_AND_MC_SA_INTERNAL_REFLECTOR", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "REFLECTORS___L2_SWAP_AND_MC_SA", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "REFLECTORS___IPV4_SWAP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "REFLECTORS___SEAMLESS_BFD_OVER_MPLS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "REFLECTORS___IPV6_SWAP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "REFLECTORS___TWAMP_IPV4", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "REFLECTORS___TWAMP_IPV6", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___T_INSERT_IPV6", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___T_INSERT_SRV6_ENPOINT", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___T_INSERT_SRV6_ENPOINT_PSP", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___EXTENDED_PASS", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___SRV6_SEGMENT_ENDPOINT", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___SRV6_SEGMENT_ENDPOINT_PSP", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___NAT_EDITING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___BFD_IPV4_EXTRA_SIP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___SWAP_WO_ETPS_POP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IOAM_JP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___ETPP_FORWARDING_SVTAG", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___NOP_ADD_SVTAG", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    if (DBAL_IS_J2C_A0)
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
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->value_from_mapping = 8;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->value_from_mapping = 9;
            enum_info++;
            
            enum_info->value_from_mapping = 10;
            enum_info++;
            
            enum_info->value_from_mapping = 11;
            enum_info++;
            
            enum_info->value_from_mapping = 12;
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
            
            enum_info->value_from_mapping = 31;
            enum_info++;
            
            enum_info->value_from_mapping = 32;
            enum_info++;
            
            enum_info->value_from_mapping = 33;
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
            
            enum_info->value_from_mapping = 20;
            enum_info++;
            
            enum_info->value_from_mapping = 30;
            enum_info++;
            
            enum_info->value_from_mapping = 34;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
        }
    }
    else if (DBAL_IS_J2P_A0)
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
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->value_from_mapping = 4;
            enum_info++;
            
            enum_info->value_from_mapping = 5;
            enum_info++;
            
            enum_info->value_from_mapping = 6;
            enum_info++;
            
            enum_info->value_from_mapping = 7;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->value_from_mapping = 8;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->value_from_mapping = 9;
            enum_info++;
            
            enum_info->value_from_mapping = 10;
            enum_info++;
            
            enum_info->value_from_mapping = 11;
            enum_info++;
            
            enum_info->value_from_mapping = 12;
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
            
            enum_info->value_from_mapping = 31;
            enum_info++;
            
            enum_info->value_from_mapping = 32;
            enum_info++;
            
            enum_info->value_from_mapping = 33;
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
            
            enum_info->value_from_mapping = 20;
            enum_info++;
            
            enum_info->value_from_mapping = 30;
            enum_info++;
            
            enum_info->value_from_mapping = 34;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->value_from_mapping = 3;
            enum_info++;
            
            enum_info->value_from_mapping = 13;
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
            
            enum_info->value_from_mapping = 8;
            enum_info++;
            
            enum_info->value_from_mapping = 9;
            enum_info++;
            
            enum_info->value_from_mapping = 9;
            enum_info++;
            
            enum_info->value_from_mapping = 10;
            enum_info++;
            
            enum_info->value_from_mapping = 11;
            enum_info++;
            
            enum_info->value_from_mapping = 12;
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
            
            enum_info->value_from_mapping = 31;
            enum_info++;
            
            enum_info->value_from_mapping = 32;
            enum_info++;
            
            enum_info->value_from_mapping = 33;
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
        }
    }
    else if (DBAL_IS_JR2_B0)
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
            
            enum_info->value_from_mapping = 8;
            enum_info++;
            
            enum_info->value_from_mapping = 9;
            enum_info++;
            
            enum_info->value_from_mapping = 9;
            enum_info++;
            
            enum_info->value_from_mapping = 10;
            enum_info++;
            
            enum_info->value_from_mapping = 11;
            enum_info++;
            
            enum_info->value_from_mapping = 12;
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
            
            enum_info->value_from_mapping = 31;
            enum_info++;
            
            enum_info->value_from_mapping = 32;
            enum_info++;
            
            enum_info->value_from_mapping = 33;
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
            
            enum_info->value_from_mapping = 20;
            enum_info++;
            
            enum_info->value_from_mapping = 30;
            enum_info++;
            
            enum_info->value_from_mapping = 34;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
        }
    }
    else if (DBAL_IS_Q2A_A0 || DBAL_IS_Q2A_B0)
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
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->value_from_mapping = 4;
            enum_info++;
            
            enum_info->value_from_mapping = 5;
            enum_info++;
            
            enum_info->value_from_mapping = 6;
            enum_info++;
            
            enum_info->value_from_mapping = 7;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->value_from_mapping = 8;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->value_from_mapping = 9;
            enum_info++;
            
            enum_info->value_from_mapping = 10;
            enum_info++;
            
            enum_info->value_from_mapping = 11;
            enum_info++;
            
            enum_info->value_from_mapping = 12;
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
            
            enum_info->value_from_mapping = 31;
            enum_info++;
            
            enum_info->value_from_mapping = 32;
            enum_info++;
            
            enum_info->value_from_mapping = 33;
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
            
            enum_info->value_from_mapping = 20;
            enum_info++;
            
            enum_info->value_from_mapping = 30;
            enum_info++;
            
            enum_info->value_from_mapping = 34;
            enum_info++;
            
            enum_info->value_from_mapping = 13;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_egress_ctx_id_field_types_definition_encap_1_context_id_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ENCAP_1_CONTEXT_ID];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ENCAP_1_CONTEXT_ID" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 59;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___ETH_COMPATIBLE_MC_BASIC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___1_MPLS_W_AH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___IN_ETH_COMPATIBLE_MC_WO_ETPS_POP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___IN_ETH_W_1_ETPS_POP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___ARP_AC_ETH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___ARP_PLUS_AC_ETH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___2_MPLS_1_AH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___2_MPLS_2_AH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___SFLOW_HDR_DP", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___SFLOW_HDR_SAMP", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___SFLOW_EXT_FIRST", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___SFLOW_EXT_SECOND", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___NOP_CTX", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___NOP_AND_POP_CTX", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA_FIRST_DP", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA2_0_INGRESS", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA2_0_EGRESS_NO_MD", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA2_0_INTERMEDIATE", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___RAW_DATA_AT_VAR_SIZE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___2_MPLS_3_AH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "L2TPV2___WO_PPP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "L2TPV2___W_PPP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___IMPLICIT_NULL_WO_AH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_2_RFC8321", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_1PLUS1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_1PLUS2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_2PLUS1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_2PLUS1_RFC8321", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___PUSH_TWO_MPLS_LABELS_FROM_UDH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_2PLUS2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_2PLUS2_RFC8321", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___EVPN_WITH_ESI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___EVPN_NO_ESI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___IFIT_MPLS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___IFIT_MPLS_RFC8321", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PPPOE___WO_PPP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PPPOE___W_PPP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___ENCAP_SEGMENT_EXTENDED_PASS", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___ENCAP_SEGMENT_EXTENDED_PASS_REDUCED", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TELEMETRY___ERSPANV2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TELEMETRY___ERSPANV3", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TELEMETRY___4B_LAWFUL_INTERCEPT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TELEMETRY___IPFIX_PSAMP__OVER_UDP_OR_TCP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TELEMETRY___INT_P4_TBD", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___ENCAP_SEGMENT_MAIN_PASS", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___ENCAP_SEGMENT_MAIN_PASS_REDUCED", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___ENCAP_T_INSERT_ENCAP_SID", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___ENCAP_T_INSERT_ENCAP_SID_REDUCED", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TELEMETRY___INT_FB_TBD", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_2PLUS1_BOS_LABEL_USED_IN_FWD_AS_SWAP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_2PLUS2_BOS_LABEL_USED_IN_FWD_AS_SWAP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___NAT_BUILD_IP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_2_BOS_LABEL_USED_IN_FWD_AS_SWAP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___ETH_COMPATIBLE_MC_BASIC_SVTAG", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___ARP_AC_ETH_SVTAG", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___ARP_PLUS_AC_ETH_SVTAG", sizeof(enum_info->name_from_interface));
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
            
            enum_info->is_invalid_value_from_mapping = TRUE;
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
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->value_from_mapping = 20;
            enum_info++;
            
            enum_info->value_from_mapping = 27;
            enum_info++;
            
            enum_info->value_from_mapping = 1;
            enum_info++;
            
            enum_info->value_from_mapping = 6;
            enum_info++;
            
            enum_info->value_from_mapping = 7;
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
            
            enum_info->value_from_mapping = 26;
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
            
            enum_info->is_invalid_value_from_mapping = TRUE;
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
            
            enum_info->value_from_mapping = 1;
            enum_info++;
            
            enum_info->value_from_mapping = 6;
            enum_info++;
            
            enum_info->value_from_mapping = 20;
            enum_info++;
            
            enum_info->value_from_mapping = 27;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_egress_ctx_id_field_types_definition_encap_2_context_id_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ENCAP_2_CONTEXT_ID];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ENCAP_2_CONTEXT_ID" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 48;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___NOP_CTX", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___RAW_DATA_AT_VAR_SIZE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GTP___GTPV1U_GPDU_HEADER", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___TUNNEL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___IPV4_VXLAN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___IPV4_VXLAN_ECN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___IPV4_GRE_WO_TNI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___IPV4_UDP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___SFLOW_HDR_DP", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___SFLOW_HDR_SAMP", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___SFLOW_EXT_FIRST", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___SFLOW_EXT_SECOND", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___IPV4_GRE8_GRE12_GENEVE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___TUNNEL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA_FIRST_DP", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA2_0_INGRESS", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA2_0_EGRESS_NO_MD", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA2_0_INTERMEDIATE", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___TUNNEL_ECN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___1_MPLS_W_AH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___VXLAN_ONLY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___GENEVE_ONLY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___UDP_ONLY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___IMPLICIT_NULL_WO_AH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_1_W_AH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_2_RFC8321", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___2_MPLS_1_AH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___2_MPLS_2_AH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___2_MPLS_3_AH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_1PLUS1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_1PLUS2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_2PLUS1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_2PLUS1_RFC8321", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_2PLUS2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_2PLUS2_RFC8321", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___EVPN_WITH_ESI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___ENCAP_2_SEGMENTS", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___ENCAP_1_SEGMENT", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___ENCAP_0_SEGMENTS", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___GRE_ONLY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___GRE_ONLY_WO_TNI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___ENCAP_T_INSERT_2_SEGMENTS", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___ENCAP_T_INSERT_1_SEGMENT", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___ENCAP_T_INSERT_0_SEGMENTS", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___NAT_BUILD_IP", sizeof(enum_info->name_from_interface));
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
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
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
            
            enum_info->value_from_mapping = 20;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_egress_ctx_id_field_types_definition_encap_3_context_id_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ENCAP_3_CONTEXT_ID];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ENCAP_3_CONTEXT_ID" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 50;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "BIER___BIER_MPLS_64", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIER___BIER_TI_64", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIER___BIER_MPLS_256_128", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIER___BIER_TI_256_128", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___NOP_CTX", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___RAW_DATA_AT_VAR_SIZE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___TUNNEL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___IPV4_VXLAN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___SFLOW_HDR_DP", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___SFLOW_HDR_SAMP", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___SFLOW_EXT_FIRST", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___SFLOW_EXT_SECOND", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___IPV4_VXLAN_ECN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___IPV4_GRE_WO_TNI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA_FIRST_DP", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA2_0_INGRESS", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA2_0_EGRESS_NO_MD", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA2_0_INTERMEDIATE", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___IPV4_UDP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___1_MPLS_W_AH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___IPV4_GRE8_GRE12_GENEVE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___TUNNEL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___TUNNEL_ECN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___VXLAN_ONLY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___GENEVE_ONLY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___GRE_ONLY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___GRE_ONLY_WO_TNI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___UDP_ONLY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___IMPLICIT_NULL_WO_AH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___2_MPLS_1_AH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___2_MPLS_2_AH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___2_MPLS_3_AH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_1PLUS1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_1PLUS2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_2PLUS1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_2PLUS1_RFC8321", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_2PLUS2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_2PLUS2_RFC8321", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___TWO_SEGMENTS", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___ONE_SEGMENT", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___ZERO_SEGMENTS", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___SRH_AND_2_SEGMENTS", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___SRH_AND_1_SEGMENT", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___SRH_AND_0_SEGMENT", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___T_INSERT_SRH_AND_1_SEGMENT", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___T_INSERT_SRH_AND_0_SEGMENT", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___KEEP_ORIGINAL_ETH", sizeof(enum_info->name_from_interface));
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
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
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
            
            enum_info->value_from_mapping = 20;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_egress_ctx_id_field_types_definition_encap_4_context_id_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ENCAP_4_CONTEXT_ID];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ENCAP_4_CONTEXT_ID" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 30;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "BIER___BIER_MPLS_128_64", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIER___BIER_MPLS_256", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIER___BIER_TI_128_64", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIER___BIER_TI_256", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___NOP_CTX", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___RAW_DATA_AT_VAR_SIZE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___TUNNEL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___IPV4_VXLAN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___IPV4_VXLAN_ECN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___IPV4_GRE_WO_TNI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___IPV4_UDP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4___IPV4_GRE8_GRE12_GENEVE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___TUNNEL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6___TUNNEL_ECN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___IMPLICIT_NULL_WO_AH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___1_MPLS_W_AH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___2_MPLS_1_AH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___2_MPLS_2_AH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___2_MPLS_3_AH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_1PLUS1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_1PLUS2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_2PLUS1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS___MPLS_2PLUS2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___SRV6_IPV6_HEADER", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___EXTENDED_PASS_FIRST", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___EXTENDED_PASS_MIDDLE", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___EXTENDED_PASS_LAST", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6___T_INSERT", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
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
            
            enum_info->value_from_mapping = 12;
            enum_info++;
            
            enum_info->value_from_mapping = 13;
            enum_info++;
            
            enum_info->value_from_mapping = 14;
            enum_info++;
            
            enum_info->value_from_mapping = 15;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->value_from_mapping = 17;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_egress_ctx_id_field_types_definition_encap_5_context_id_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ENCAP_5_CONTEXT_ID];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ENCAP_5_CONTEXT_ID" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 7;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___ARP_AC_ETH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___ARP_PLUS_AC_ETH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FCOE___NPV_US", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___RCH_ENC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___NOP_CTX", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___ARP_AC_ETH_SVTAG", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE___ARP_PLUS_AC_ETH_SVTAG", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 4;
            enum_info++;
            
            enum_info->value_from_mapping = 5;
            enum_info++;
            
            enum_info->value_from_mapping = 6;
            enum_info++;
            
            enum_info->value_from_mapping = 2;
            enum_info++;
            
            enum_info->value_from_mapping = 3;
            enum_info++;
        }
    }
    else if (DBAL_IS_JR2_A0 || DBAL_IS_JR2_B0 || DBAL_IS_J2C_A0 || DBAL_IS_Q2A_A0 || DBAL_IS_Q2A_B0)
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
            
            enum_info->value_from_mapping = 4;
            enum_info++;
            
            enum_info->value_from_mapping = 5;
            enum_info++;
            
            enum_info->value_from_mapping = 6;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_egress_ctx_id_field_types_definition_trap_context_id_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_TRAP_CONTEXT_ID];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "TRAP_CONTEXT_ID" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 54;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___BFD_PWE_CW_WA", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___NOP_CTX", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___TRJ_TRACE_TYPE2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___RCH_DROP_AND_CONT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___RCH_EXT_ENCAP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___RCH_PTCH_ENC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___RCH_XTERMINATION", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___PUNT_W_PTCH1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___PTCH1_FROM_FTMH_SSPA", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___PUNT_W_PTCH2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___RECYCLE_W_PTCH2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___OAM_UPMEP_REFLECTOR", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___NORMAL_FWD", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___NORMAL_FWD_NO_MIRROR", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___DROP_PKT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___VISIBILITY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___CPU_PORT_TRAPPED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___CPU_TRAPPED_KEEP_ORIGINAL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___USER_TRAP_1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___USER_TRAP_2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___USER_TRAP_3", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___USER_TRAP_4", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___EGRESS_TRAPPED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___STACKING_LEFT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___STACKING_RIGHT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___IPT_IFA_FIRST_DP", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM___JR1_COMP_MACT_LEARNING_JR2_TO_JR1", sizeof(enum_info->name_from_interface));
        enum_info->is_invalid_value_from_mapping = !(!dnx_data_headers.system_headers.system_headers_mode_get(unit));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL___RCH_JMODE_VRF", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAM___OAM_DM_TO_OAMP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAM___OAM_DM_TO_CPU", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAM___OAM_DM_TO_FPGA", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAM___OAM_LM_TO_OAMP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAM___OAM_LM_TO_CPU", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAM___OAM_LM_TO_FPGA", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAM___OAM_CCM_TO_OAMP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAM___OAM_CCM_TO_CPU", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAM___OAM_CCM_TO_FPGA", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAM___OAM_LVLERR", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAM___OAM_PSVERR", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAM___OAM_REFLECTOR", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAM___BFDV6_CHECKSUM_ERROR", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TELEMETRY___IFA_EGRESS_PORT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM___RAW_PORT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM___DEFAULT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM___TDM_NO_OTMH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM___TDM_STAMP_MC_CUD_ON_OTMH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM___TDM_STAMP_PORT_VAL_ON_OTMH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM___TDM_STAMP_NOTHING_ON_OTMH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM___TDM_STAMP_MC_CUD_ON_FTMH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM___TDM_STAMP_PORT_VAL_ON_FTMH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM___TDM_STAMP_NOTHING_ON_FTMH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM___TDM_STAMP_MC_CUD_ON_OPT_FTMH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM___TDM_STAMP_PORT_VAL_ON_OPT_FTMH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM___TDM_STAMP_NOTHING_ON_OPT_FTMH", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    if (DBAL_IS_J2C_A0 || DBAL_IS_Q2A_A0 || DBAL_IS_Q2A_B0)
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
        }
    }
    else if (DBAL_IS_JR2_A0 || DBAL_IS_JR2_B0 || DBAL_IS_J2P_A0)
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
            
            enum_info->value_from_mapping = 41;
            enum_info++;
            
            enum_info->value_from_mapping = 42;
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
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
            
            enum_info->is_invalid_value_from_mapping = TRUE;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
dbal_init_field_types_auto_generated_standard_1_standard_1_egress_ctx_id_field_types_definition_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    SHR_FUNC_INIT_VARS(unit);
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_egress_ctx_id_field_types_definition_prp2_context_id_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_egress_ctx_id_field_types_definition_term_context_id_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_egress_ctx_id_field_types_definition_fwd_context_id_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_egress_ctx_id_field_types_definition_encap_1_context_id_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_egress_ctx_id_field_types_definition_encap_2_context_id_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_egress_ctx_id_field_types_definition_encap_3_context_id_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_egress_ctx_id_field_types_definition_encap_4_context_id_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_egress_ctx_id_field_types_definition_encap_5_context_id_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_egress_ctx_id_field_types_definition_trap_context_id_init(unit, cur_field_type_param, field_types_info));
exit:
    SHR_FUNC_EXIT;
}
