
/*
 * 
 This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 
 Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_qos_forward_p1_explicit_remark_profile_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_QOS_FORWARD_P1_EXPLICIT_REMARK_PROFILE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "QOS_FORWARD_P1_EXPLICIT_REMARK_PROFILE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 100)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 3;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "REMARK_TYPE_EXPLICIT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "REMARK_TYPE_INHERIT_REMARK_ALL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "REMARK_TYPE_INHERIT_REMARK_NON_ECN", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_qos_forward_p1_remark_profile_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_QOS_FORWARD_P1_REMARK_PROFILE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "QOS_FORWARD_P1_REMARK_PROFILE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 101)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "INGRESS_REMARK_PROFILE_0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "INGRESS_REMARK_PROFILE_1", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_qos_lr_forward_p1_type_index_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_QOS_LR_FORWARD_P1_TYPE_INDEX];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "QOS_LR_FORWARD_P1_TYPE_INDEX" , dnx_data_aod_sizes.AOD.sizes_get(unit, 102)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 4;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "IPV4", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RESERVED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OTHER", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_qos_typefwdplus1_type_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_QOS_TYPEFWDPLUS1_TYPE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "QOS_TYPEFWDPLUS1_TYPE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 103)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 3;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "IPV4", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OTHER", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 7;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_esem1_default_result_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ESEM1_DEFAULT_RESULT];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ESEM1_DEFAULT_RESULT" , dnx_data_aod_sizes.AOD.sizes_get(unit, 104)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 9;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_GENEVE_NO_FODO2VNI_MAPPING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_VXLAN_NO_FODO2VNI_MAPPING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_VXLAN_GPE_NO_FODO2VNI_MAPPING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_GRE_NO_FODO2VNI_MAPPING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_VXLAN_NO_FODO2VNI_MAPPING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_VXLAN_GPE_NO_FODO2VNI_MAPPING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IML_NO_FODO_OUTLIF_MAP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RSPAN_ADVANCED_NO_SSPA", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_esem2_default_result_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ESEM2_DEFAULT_RESULT];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ESEM2_DEFAULT_RESULT" , dnx_data_aod_sizes.AOD.sizes_get(unit, 105)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IML_NO_SSPA_NAMESPACE_MAP", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_exem_default_result_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_EXEM_DEFAULT_RESULT];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "EXEM_DEFAULT_RESULT" , dnx_data_aod_sizes.AOD.sizes_get(unit, 106)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 1;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NONE", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_esem_command_attribute_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ESEM_COMMAND_ATTRIBUTE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ESEM_COMMAND_ATTRIBUTE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 107)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 11;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_GRE_FODO_NAMESPACE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "EVPN_IML_FODO_OUTLIF_AND_SSPA_NAMESPACE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RSPAN_ADVANCED_SSPA_NAMESPACE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SVTAG_TUNNEL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SVTAG_PORT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_VXLAN_FODO_NAMESPACE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_VXLAN_GPE_FODO_NAMESPACE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_GENEVE_FODO_NAMESPACE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_VXLAN_FODO_NAMESPACE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_VXLAN_GPE_FODO_NAMESPACE", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 8;
            enum_info++;
            
            enum_info->value_from_mapping = 24;
            enum_info++;
            
            enum_info->value_from_mapping = 56;
            enum_info++;
            
            enum_info->value_from_mapping = 57;
            enum_info++;
            
            enum_info->value_from_mapping = 58;
            enum_info++;
            
            enum_info->value_from_mapping = 59;
            enum_info++;
            
            enum_info->value_from_mapping = 61;
            enum_info++;
            
            enum_info->value_from_mapping = 62;
            enum_info++;
            
            enum_info->value_from_mapping = 63;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_layer_types_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_LAYER_TYPES];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "LAYER_TYPES" , dnx_data_aod_sizes.AOD.sizes_get(unit, 108)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 31;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "INITIALIZATION", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETHERNET", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS_IFIT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ARP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FCOE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TCP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "UDP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BFD_SINGLE_HOP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BFD_MULTI_HOP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "L2TP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PTP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "Y_1731", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ICMP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIER_TI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIER_MPLS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RCH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PPPOE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6_ENDPOINT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6_BEYOND", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IGMP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "INGRESS_SCTP_EGRESS_FTMH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GTP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PPP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS_UNTERM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ITMH_J1_VAL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPVX", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "UNKNOWN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ITMH_VAL", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_current_protocol_type_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_CURRENT_PROTOCOL_TYPE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "CURRENT_PROTOCOL_TYPE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 109)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 26;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETHERNET", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_UC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_UC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS_UA", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ARP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FCOE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "UDP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_MC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_MC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "L2TP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PTP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SFLOW", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIER_TI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIER_MPLS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PPPOE_SESSION", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6_ENDPOINT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "INGRESS_SCTP_EGRESS_FTMH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GTP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ERSPANV2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ERSPANV3", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GRE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "VXLAN_GPE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "VXLAN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENEVE", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 16;
            enum_info++;
            
            enum_info->value_from_mapping = 17;
            enum_info++;
            
            enum_info->value_from_mapping = 19;
            enum_info++;
            
            enum_info->value_from_mapping = 20;
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_next_protocol_namespace_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ETPP_NEXT_PROTOCOL_NAMESPACE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ETPP_NEXT_PROTOCOL_NAMESPACE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 110)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 7;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "ETHERTYPE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IP_NEXT_PROTOCOL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "VXLAN_GPE_NEXT_PROTOCOL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS_BOS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIER_NEXT_PROTOCOL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "UDP_DESTINATION_PORT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PPP_NEXT_PROTOCOL", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_layer_types_itmh_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_LAYER_TYPES_ITMH];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "LAYER_TYPES_ITMH" , dnx_data_aod_sizes.AOD.sizes_get(unit, 111)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 6;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "INITIALIZATION", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ASE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TSH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PPH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "UNKNOWN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ITMH_VAL", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 30;
            enum_info++;
            
            enum_info->value_from_mapping = 31;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_layer_types_ftmh_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_LAYER_TYPES_FTMH];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "LAYER_TYPES_FTMH" , dnx_data_aod_sizes.AOD.sizes_get(unit, 112)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 5;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "INITIALIZATION", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PPH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "UDH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "UNKNOWN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FTMH_VAL", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 3;
            enum_info++;
            
            enum_info->value_from_mapping = 4;
            enum_info++;
            
            enum_info->value_from_mapping = 30;
            enum_info++;
            
            enum_info->value_from_mapping = 31;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_layer_types_itmh_jr1_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_LAYER_TYPES_ITMH_JR1];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "LAYER_TYPES_ITMH_JR1" , dnx_data_aod_sizes.AOD.sizes_get(unit, 113)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 5;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "INITIALIZATION", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OTSH_JR1_VAL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PPH_JR1_VAL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ITMH_J1_VAL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "UNKNOWN", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 2;
            enum_info++;
            
            enum_info->value_from_mapping = 3;
            enum_info++;
            
            enum_info->value_from_mapping = 28;
            enum_info++;
            
            enum_info->value_from_mapping = 30;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_egress_fwd_code_port_profile_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_EGRESS_FWD_CODE_PORT_PROFILE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "EGRESS_FWD_CODE_PORT_PROFILE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 114)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 4;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NORMAL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "STACKING_PORT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "CPU_PORT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RAW_PROCESSING", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_egress_fwd_code_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_EGRESS_FWD_CODE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "EGRESS_FWD_CODE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 115)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 32;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "ETHERNET", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MIRROR_OR_SS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_UC_R0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_MC_R0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_UC_R0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_MC_R0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIER_MPLS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIER_TI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "INGRESS_TRAPPED_JR1_LEGACY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RAW_PROCESSING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "CPU_PORT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ERPP_TRAPPED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "STACKING_PORT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6_ENDPOINT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6_ENDPOINT_PSP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TDM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS_INJECTED_FROM_OAMP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "DO_NOT_EDIT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PPP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_UC_R1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_MC_R1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_UC_R1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_MC_R1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RCH_DROP_AND_CONT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RCH_PTCH_ENC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RCH_EXT_ENCAP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RCH_XTERMINATION", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RCH_JMODE_VRF", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "EXT_ENCAP_DO_NOTHING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FWD_CODE_BUG_CODE", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 13;
            enum_info++;
            
            enum_info->value_from_mapping = 16;
            enum_info++;
            
            enum_info->value_from_mapping = 17;
            enum_info++;
            
            enum_info->value_from_mapping = 19;
            enum_info++;
            
            enum_info->value_from_mapping = 21;
            enum_info++;
            
            enum_info->value_from_mapping = 22;
            enum_info++;
            
            enum_info->value_from_mapping = 25;
            enum_info++;
            
            enum_info->value_from_mapping = 26;
            enum_info++;
            
            enum_info->value_from_mapping = 27;
            enum_info++;
            
            enum_info->value_from_mapping = 34;
            enum_info++;
            
            enum_info->value_from_mapping = 35;
            enum_info++;
            
            enum_info->value_from_mapping = 36;
            enum_info++;
            
            enum_info->value_from_mapping = 37;
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
            
            enum_info->value_from_mapping = 63;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_kbp_forward_app_types_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_KBP_FORWARD_APP_TYPES];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "KBP_FORWARD_APP_TYPES" , dnx_data_aod_sizes.AOD.sizes_get(unit, 116)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 15;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "INVALID", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_MULTICAST_PRIVATE_W_UC_RPF", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_MULTICAST_PRIVATE_W_UC_RPF", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_UNICAST_PRIVATE_W_UC_RPF", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_UNICAST_PRIVATE_W_UC_RPF", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE_SVL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NAT_MAPPING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "VIRTUAL_IPV4_PRIVATE_UC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "VIRTUAL_IPV6_PRIVATE_UC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SIMPLE_IPV4_PRIVATE_UC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SIMPLE_IPV6_PRIVATE_UC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6_ENDPOINT_CLASSIC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6_ENDPOINT_USID", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NOP", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_fwd_code_ace_ctxt_value_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ETPP_FWD_CODE_ACE_CTXT_VALUE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ETPP_FWD_CODE_ACE_CTXT_VALUE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 118)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 3;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NULL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ERPP_TRAPPED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "J_MODE_FWD_CODE_OVERRIDE", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_fai_forward_result_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_FAI_FORWARD_RESULT];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "FAI_FORWARD_RESULT" , dnx_data_aod_sizes.AOD.sizes_get(unit, 123)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "KNOWN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "UNKNOWN", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_fai_forward_p1_header_remarking_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_FAI_FORWARD_P1_HEADER_REMARKING];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "FAI_FORWARD_P1_HEADER_REMARKING" , dnx_data_aod_sizes.AOD.sizes_get(unit, 124)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "IRPP_FORWARD_P1_HEADER_REMARK_PROFILE0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IRPP_FORWARD_P1_HEADER_REMARK_PROFILE1", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_fai_ttl_proccesing_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_FAI_TTL_PROCCESING];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "FAI_TTL_PROCCESING" , dnx_data_aod_sizes.AOD.sizes_get(unit, 125)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "DECREMENT_TTL_ENABLE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "DECREMENT_TTL_DISABLE", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_fai_forward_header_remarking_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_FAI_FORWARD_HEADER_REMARKING];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "FAI_FORWARD_HEADER_REMARKING" , dnx_data_aod_sizes.AOD.sizes_get(unit, 126)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "IRPP_FORWARD_HEADER_REMARK_PROFILE0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IRPP_FORWARD_HEADER_REMARK_PROFILE1", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_fai_fallback_to_bridge_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_FAI_FALLBACK_TO_BRIDGE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "FAI_FALLBACK_TO_BRIDGE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 127)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NON_ELIGIBLE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ELIGIBLE", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_fai_inject_indication_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_FAI_INJECT_INDICATION];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "FAI_INJECT_INDICATION" , dnx_data_aod_sizes.AOD.sizes_get(unit, 128)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NON_ELIGIBLE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ELIGIBLE", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_service_per_flow_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_SERVICE_PER_FLOW];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "SERVICE_PER_FLOW" , dnx_data_aod_sizes.AOD.sizes_get(unit, 130)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "SRV6_CLASSIC_GRE_NO_TNI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6_MICRO_SID_GRE_TNI_FODO", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_in_lif_service_type_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_IN_LIF_SERVICE_TYPE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "IN_LIF_SERVICE_TYPE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 131)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_STRUCTURE , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_types_info->nof_struct_fields = 2;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_struct_alloc(unit, cur_field_types_info));
    cur_field_types_info->struct_field_info[0].struct_field_id = DBAL_FIELD_TYPE;
    cur_field_types_info->struct_field_info[1].struct_field_id = DBAL_FIELD_PER_FLOW;
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_qos_var_type_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ETPP_QOS_VAR_TYPE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ETPP_QOS_VAR_TYPE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 132)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 7;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "PCP_DEI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_TOS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_TC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS_TC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIER_DSCP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_TOS_ECN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_TC_ECN", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ctx_additional_header_profile_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_CTX_ADDITIONAL_HEADER_PROFILE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "CTX_ADDITIONAL_HEADER_PROFILE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 133)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 7;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "CTX_AHP_NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "CTX_AHP_GRE_OR_GENEVE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "CTX_AHP_UDP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "CTX_AHP_VXLAN_OR_VXLAN_GPE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "CTX_MPLS_AH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "CTX_MPLS_AH_ESI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "CTX_AHP_IP", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_ahp_udp_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_LIF_AHP_UDP];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "LIF_AHP_UDP" , dnx_data_aod_sizes.AOD.sizes_get(unit, 134)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 11;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_UDP_SESSION_1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_UDP_SESSION_2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_UDP_SESSION_3", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_UDP_SESSION_4", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_UDP_SESSION_5", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_UDP_SESSION_6", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_UDP_SESSION_7", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_UDP_TUNNEL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_UDP_ESP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_UDP_SESSION_8", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_ahp_mpls_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_LIF_AHP_MPLS];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "LIF_AHP_MPLS" , dnx_data_aod_sizes.AOD.sizes_get(unit, 135)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 6;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_CWOFL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_ELOELI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_CW", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_FL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_CWOELOELI", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 4;
            enum_info++;
            
            enum_info->value_from_mapping = 5;
            enum_info++;
            
            enum_info->value_from_mapping = 6;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_ahp_ip_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_LIF_AHP_IP];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "LIF_AHP_IP" , dnx_data_aod_sizes.AOD.sizes_get(unit, 136)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_IP_ESP", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_ahp_vxlan_vxlan_gpe_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_LIF_AHP_VXLAN_VXLAN_GPE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "LIF_AHP_VXLAN_VXLAN_GPE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 137)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 4;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_VXLAN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_VXLAN_GPE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_DOUBLE_UDP_ESP_VXLAN", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_ahp_gre_geneve_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_LIF_AHP_GRE_GENEVE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "LIF_AHP_GRE_GENEVE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 138)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 8;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_GENEVE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_GRE8_W_KEY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_GRE8_W_KEY_TNI_FROM_ENTRY_V4", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_GRE12", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_GRE8_W_KEY_TNI_FROM_ENTRY_V6", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_GRE4", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_GRE8_W_SN", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_ahp_general_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_LIF_AHP_GENERAL];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "LIF_AHP_GENERAL" , dnx_data_aod_sizes.AOD.sizes_get(unit, 139)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 1;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "LIF_AHP_NONE", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_php_ttl_model_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ETPP_PHP_TTL_MODEL];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ETPP_PHP_TTL_MODEL" , dnx_data_aod_sizes.AOD.sizes_get(unit, 140)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "TTL_MODEL_UNIFORM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TTL_MODEL_PIPE", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_additional_header_profile_stack_attributes_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ETPP_ADDITIONAL_HEADER_PROFILE_STACK_ATTRIBUTES];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ETPP_ADDITIONAL_HEADER_PROFILE_STACK_ATTRIBUTES" , dnx_data_aod_sizes.AOD.sizes_get(unit, 141)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 31;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "AHS_NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_ESI_CW", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_ESI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_CWOELOELI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_CWOFL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_ELOELI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_CW", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_FL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_VXLAN_GPE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_GENEVE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_VXLAN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_GRE4", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_GRE8_W_KEY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_GRE8_TNI_FROM_ENTRY_V4", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_UDP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_GRE12", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_GRE8_TNI_FROM_ENTRY_V6", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_GRE8_W_SN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_IP_ESP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_UDP_ESP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_CWOFLOESI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_FLOESI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_VXLAN_DOUBLE_UDP_ESP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_UDP_SESSION_8", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_UDP_SESSION_1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_UDP_SESSION_2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_UDP_SESSION_3", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_UDP_SESSION_4", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_UDP_SESSION_5", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_UDP_SESSION_6", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "AHS_UDP_SESSION_7", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_egress_forward_code_properties_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ETPP_EGRESS_FORWARD_CODE_PROPERTIES];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ETPP_EGRESS_FORWARD_CODE_PROPERTIES" , dnx_data_aod_sizes.AOD.sizes_get(unit, 142)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 26;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "ETHERNET", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MIRROR_OR_SS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_UC_R0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_MC_R0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_UC_R0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_MC_R0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIER_MPLS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIER_TI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "INGRESS_TRAPPED_JR1_LEGACY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RAW_PROCESSING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "CPU_PORT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ERPP_TRAPPED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "STACKING_PORT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6_ENDPOINT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6_ENDPOINT_PSP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS_INJECTED_FROM_OAMP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "DO_NOT_EDIT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PPP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_UC_R1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_MC_R1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_UC_R1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_MC_R1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "EXT_ENCAP_DO_NOTHING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FWD_CODE_BUG_CODE", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 13;
            enum_info++;
            
            enum_info->value_from_mapping = 16;
            enum_info++;
            
            enum_info->value_from_mapping = 17;
            enum_info++;
            
            enum_info->value_from_mapping = 19;
            enum_info++;
            
            enum_info->value_from_mapping = 22;
            enum_info++;
            
            enum_info->value_from_mapping = 25;
            enum_info++;
            
            enum_info->value_from_mapping = 26;
            enum_info++;
            
            enum_info->value_from_mapping = 27;
            enum_info++;
            
            enum_info->value_from_mapping = 34;
            enum_info++;
            
            enum_info->value_from_mapping = 35;
            enum_info++;
            
            enum_info->value_from_mapping = 36;
            enum_info++;
            
            enum_info->value_from_mapping = 37;
            enum_info++;
            
            enum_info->value_from_mapping = 53;
            enum_info++;
            
            enum_info->value_from_mapping = 63;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_egress_forward_code_properties_jr1_mode_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ETPP_EGRESS_FORWARD_CODE_PROPERTIES_JR1_MODE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ETPP_EGRESS_FORWARD_CODE_PROPERTIES_JR1_MODE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 143)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 25;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "ETHERNET", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MIRROR_OR_SS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_UC_R0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_MC_R0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_UC_R0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_MC_R0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIER_MPLS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIER_TI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "INGRESS_TRAPPED_JR1_LEGACY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RAW_PROCESSING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "CPU_PORT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ERPP_TRAPPED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "STACKING_PORT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6_ENDPOINT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6_ENDPOINT_PSP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS_INJECTED_FROM_OAMP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "DO_NOT_EDIT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PPP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_UC_R1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_MC_R1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_UC_R1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_MC_R1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FWD_CODE_BUG_CODE", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 13;
            enum_info++;
            
            enum_info->value_from_mapping = 16;
            enum_info++;
            
            enum_info->value_from_mapping = 17;
            enum_info++;
            
            enum_info->value_from_mapping = 19;
            enum_info++;
            
            enum_info->value_from_mapping = 22;
            enum_info++;
            
            enum_info->value_from_mapping = 25;
            enum_info++;
            
            enum_info->value_from_mapping = 26;
            enum_info++;
            
            enum_info->value_from_mapping = 27;
            enum_info++;
            
            enum_info->value_from_mapping = 34;
            enum_info++;
            
            enum_info->value_from_mapping = 35;
            enum_info++;
            
            enum_info->value_from_mapping = 36;
            enum_info++;
            
            enum_info->value_from_mapping = 37;
            enum_info++;
            
            enum_info->value_from_mapping = 63;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_my_mac_exem_da_profile_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_MY_MAC_EXEM_DA_PROFILE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "MY_MAC_EXEM_DA_PROFILE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 144)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 21;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "LEGACY_VRID_BITMAP_0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LEGACY_VRID_BITMAP_1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LEGACY_VRID_BITMAP_2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LEGACY_VRID_BITMAP_3", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LEGACY_VRID_BITMAP_4", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LEGACY_VRID_BITMAP_5", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LEGACY_VRID_BITMAP_6", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LEGACY_VRID_BITMAP_7", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LEGACY_VRID_BITMAP_8", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LEGACY_VRID_BITMAP_9", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LEGACY_VRID_BITMAP_10", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LEGACY_VRID_BITMAP_11", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LEGACY_VRID_BITMAP_12", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LEGACY_VRID_BITMAP_13", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LEGACY_VRID_BITMAP_14", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LEGACY_VRID_BITMAP_15", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PER_PORT_MY_MAC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PER_VSI_MULTIPLE_MY_MAC_DA_MSB_0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PER_VSI_MULTIPLE_MY_MAC_DA_MSB_1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "VRID_MY_MAC_WITH_PROTOCOL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PER_PORT_IGNORE_MAC", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_irpp_1st_parser_parser_context_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_IRPP_1ST_PARSER_PARSER_CONTEXT];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "IRPP_1ST_PARSER_PARSER_CONTEXT" , dnx_data_aod_sizes.AOD.sizes_get(unit, 145)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 7;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "ITMH_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETH_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RCH_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ITMH_JR1_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETH_JR1_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RAW_MPLS_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NOP", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 4;
            enum_info++;
            
            enum_info->value_from_mapping = 5;
            enum_info++;
            
            enum_info->value_from_mapping = 6;
            enum_info++;
            
            enum_info->value_from_mapping = 30;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_irpp_2nd_parser_parser_context_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_IRPP_2ND_PARSER_PARSER_CONTEXT];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "IRPP_2ND_PARSER_PARSER_CONTEXT" , dnx_data_aod_sizes.AOD.sizes_get(unit, 146)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 18;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETH_B1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPVX_DEMUX_B1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS_SPECULATIVEOAMB1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_NOETHB2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_NOETHB2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIERMPLS64_B1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIERMPLS128_B1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIERMPLS256_B1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIERTI_B1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TCP_B1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "UDP_B1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS_B1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SCTP_B1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TCP_NO_LB_B1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "UDP_NO_LB_B1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PPP_B1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NOP", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 30;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_vtt_mpls_special_label_profile_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_VTT_MPLS_SPECIAL_LABEL_PROFILE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "VTT_MPLS_SPECIAL_LABEL_PROFILE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 147)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 8;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "IPV4_EXPLICIT_NULL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_EXPLICIT_NULL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ROUTER_ALERT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ELI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GAL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAM_ALERT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "INVALID_LABEL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TUNNEL_LABEL", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_vtt_mpls_special_label_profile_attributes_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_VTT_MPLS_SPECIAL_LABEL_PROFILE_ATTRIBUTES];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "VTT_MPLS_SPECIAL_LABEL_PROFILE_ATTRIBUTES" , dnx_data_aod_sizes.AOD.sizes_get(unit, 149)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 6;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "IPV4_EXPLICIT_NULL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_EXPLICIT_NULL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ROUTER_ALERT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ELI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GAL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAM_ALERT", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_vsi_profile_bridge_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_VSI_PROFILE_BRIDGE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "VSI_PROFILE_BRIDGE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 150)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 1;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "SVL", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_l2_v4_mc_fwd_type_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_L2_V4_MC_FWD_TYPE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "L2_V4_MC_FWD_TYPE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 151)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "V4BRIDGE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4MC", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_l2_v6_mc_fwd_type_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_L2_V6_MC_FWD_TYPE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "L2_V6_MC_FWD_TYPE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 152)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "V6BRIDGE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6MC", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_l2_fodo_profile_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_L2_FODO_PROFILE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "L2_FODO_PROFILE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 153)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_STRUCTURE , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_types_info->nof_struct_fields = 3;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_struct_alloc(unit, cur_field_types_info));
    cur_field_types_info->struct_field_info[0].struct_field_id = DBAL_FIELD_V6_MC_FWD_TYPE;
    cur_field_types_info->struct_field_info[1].struct_field_id = DBAL_FIELD_V4_MC_FWD_TYPE;
    cur_field_types_info->struct_field_info[2].struct_field_id = DBAL_FIELD_RESERVED;
    cur_field_types_info->struct_field_info[2].length = 2;
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_vtt1_csp_1bit_mim_namespace_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_LIF_VTT1_CSP_1BIT_MIM_NAMESPACE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "LIF_VTT1_CSP_1BIT_MIM_NAMESPACE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 157)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NWK_SCOPED_ISID", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SOURCE_SCOPED_ISID", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_mim_inlif_profile_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_MIM_INLIF_PROFILE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "MIM_INLIF_PROFILE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 158)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_STRUCTURE , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_types_info->nof_struct_fields = 2;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_struct_alloc(unit, cur_field_types_info));
    cur_field_types_info->struct_field_info[0].struct_field_id = DBAL_FIELD_MIM_NAMESPACE;
    cur_field_types_info->struct_field_info[1].struct_field_id = DBAL_FIELD_RESERVED;
    cur_field_types_info->struct_field_info[1].length = 3;
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_vtt4_csp_1bit_pwe_tag_namespace_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_LIF_VTT4_CSP_1BIT_PWE_TAG_NAMESPACE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "LIF_VTT4_CSP_1BIT_PWE_TAG_NAMESPACE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 159)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NWK_SCOPED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_SCOPED", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_vtt4_csp_2bit_pwe_nof_sd_tags_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_LIF_VTT4_CSP_2BIT_PWE_NOF_SD_TAGS];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "LIF_VTT4_CSP_2BIT_PWE_NOF_SD_TAGS" , dnx_data_aod_sizes.AOD.sizes_get(unit, 160)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 3;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "0_SD_TAGS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "1_SD_TAGS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "2_SD_TAGS", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_vtt4_csp_1bit_pwe_learn_native_ac_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_LIF_VTT4_CSP_1BIT_PWE_LEARN_NATIVE_AC];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "LIF_VTT4_CSP_1BIT_PWE_LEARN_NATIVE_AC" , dnx_data_aod_sizes.AOD.sizes_get(unit, 161)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "DISABLE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ENABLE", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_pwe_inlif_cs_profile_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_PWE_INLIF_CS_PROFILE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "PWE_INLIF_CS_PROFILE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 162)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_STRUCTURE , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_types_info->nof_struct_fields = 3;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_struct_alloc(unit, cur_field_types_info));
    cur_field_types_info->struct_field_info[0].struct_field_id = DBAL_FIELD_TAG_NAMESPACE;
    cur_field_types_info->struct_field_info[1].struct_field_id = DBAL_FIELD_NOF_SD_TAGS;
    cur_field_types_info->struct_field_info[2].struct_field_id = DBAL_FIELD_LEARN_NATIVE_AC_BUG;
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_vttx_cs_evpn_iml_ah_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_LIF_VTTX_CS_EVPN_IML_AH];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "LIF_VTTX_CS_EVPN_IML_AH" , dnx_data_aod_sizes.AOD.sizes_get(unit, 163)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 3;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NO_FL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FL_ONLY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FL_AND_CW", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_evpn_iml_inlif_cs_profile_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_EVPN_IML_INLIF_CS_PROFILE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "EVPN_IML_INLIF_CS_PROFILE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 164)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_STRUCTURE , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_types_info->nof_struct_fields = 3;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_struct_alloc(unit, cur_field_types_info));
    cur_field_types_info->struct_field_info[0].struct_field_id = DBAL_FIELD_TAG_NAMESPACE;
    cur_field_types_info->struct_field_info[1].struct_field_id = DBAL_FIELD_IML_ADDITIONAL_HEADERS;
    cur_field_types_info->struct_field_info[2].struct_field_id = DBAL_FIELD_RESERVED0;
    cur_field_types_info->struct_field_info[2].length = 1;
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_xxxx_csp_1bit_l3lif_mpls_namespace_and_algo_acl_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_LIF_XXXX_CSP_1BIT_L3LIF_MPLS_NAMESPACE_AND_ALGO_ACL];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "LIF_XXXX_CSP_1BIT_L3LIF_MPLS_NAMESPACE_AND_ALGO_ACL" , dnx_data_aod_sizes.AOD.sizes_get(unit, 165)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "MPLS_PER_PLATFORM_AACL_DISABLED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS_PER_INTERFACE_AACL_ENABLED", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_vtt5_csp_1bit_nat_direction_and_virtual_ip_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_LIF_VTT5_CSP_1BIT_NAT_DIRECTION_AND_VIRTUAL_IP];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "LIF_VTT5_CSP_1BIT_NAT_DIRECTION_AND_VIRTUAL_IP" , dnx_data_aod_sizes.AOD.sizes_get(unit, 166)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NAT_UPSTREAM_VIP_DISABLED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NAT_DOWNSTREAM_VIP_ENABLED", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_vtt5_csp_1bit_l3lif_uc_db_mode_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_LIF_VTT5_CSP_1BIT_L3LIF_UC_DB_MODE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "LIF_VTT5_CSP_1BIT_L3LIF_UC_DB_MODE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 167)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "UC_PRIVATE_PUBLIC_OPTIMIZED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "UC_PRIVATE_ONLY", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_vtt5_csp_1bit_l3lif_mc_db_mode_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_LIF_VTT5_CSP_1BIT_L3LIF_MC_DB_MODE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "LIF_VTT5_CSP_1BIT_L3LIF_MC_DB_MODE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 168)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "MC_PRIVATE_PUBLIC_OPTIMIZED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MC_PRIVATE_ONLY", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_routing_inlif_cs_profile_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ROUTING_INLIF_CS_PROFILE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ROUTING_INLIF_CS_PROFILE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 169)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_STRUCTURE , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_types_info->nof_struct_fields = 4;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_struct_alloc(unit, cur_field_types_info));
    cur_field_types_info->struct_field_info[0].struct_field_id = DBAL_FIELD_NAT_DIRECTION_OR_VIP_MODE;
    cur_field_types_info->struct_field_info[1].struct_field_id = DBAL_FIELD_MPLS_NAMESPACE_OR_AACL;
    cur_field_types_info->struct_field_info[2].struct_field_id = DBAL_FIELD_UC_DB_MODE;
    cur_field_types_info->struct_field_info[3].struct_field_id = DBAL_FIELD_MC_DB_MODE;
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_fwd1_csp_1bit_urpf_mode_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_LIF_FWD1_CSP_1BIT_URPF_MODE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "LIF_FWD1_CSP_1BIT_URPF_MODE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 171)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "URPF_LOOKUP_DISABLE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "URPF_LOOKUP_ENABLE", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_routing_fwd_inlif_profile_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ROUTING_FWD_INLIF_PROFILE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ROUTING_FWD_INLIF_PROFILE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 172)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_STRUCTURE , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_types_info->nof_struct_fields = 3;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_struct_alloc(unit, cur_field_types_info));
    cur_field_types_info->struct_field_info[0].struct_field_id = DBAL_FIELD_URPF_MODE;
    cur_field_types_info->struct_field_info[1].struct_field_id = DBAL_FIELD_RESERVED;
    cur_field_types_info->struct_field_info[1].length = 2;
    cur_field_types_info->struct_field_info[2].struct_field_id = DBAL_FIELD_MC_MODE;
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_learn_payload_context_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_LEARN_PAYLOAD_CONTEXT];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "LEARN_PAYLOAD_CONTEXT" , dnx_data_aod_sizes.AOD.sizes_get(unit, 173)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 10;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NO_LIF_BASIC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SYMMETRIC_LIF_BASIC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SYMMETRIC_LIF_EXTENDED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ASYMMETRIC_LIF_BASIC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ASYMMETRIC_LIF_EXTENDED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SYMMETRIC_LIF_OPTIMIZED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ASYMMETRIC_LIF_OPTIMIZED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NO_LIF_EXTENDED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NO_LIF_OPTIMIZED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ASYMMETRIC_LIF_EXTENDED_EEI", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 4;
            enum_info++;
            
            enum_info->value_from_mapping = 6;
            enum_info++;
            
            enum_info->value_from_mapping = 7;
            enum_info++;
            
            enum_info->value_from_mapping = 10;
            enum_info++;
            
            enum_info->value_from_mapping = 13;
            enum_info++;
            
            enum_info->value_from_mapping = 14;
            enum_info++;
            
            enum_info->value_from_mapping = 15;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_incoming_tag_structure_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_INCOMING_TAG_STRUCTURE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "INCOMING_TAG_STRUCTURE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 174)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 29;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "UNTAGGED_1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "C_C_TAG_1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "C_C_TAG_2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "S_TAG_1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "S_TAG_2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "S_TAG_3", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "S_TAG_4", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "C_TAG_1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "C_TAG_2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "C_TAG_3", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "C_TAG_4", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "C_TAG_5", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "C_TAG_6", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "C_TAG_7", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "C_TAG_8", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "S_C_TAG_1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "S_C_TAG_2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "S_C_TAG_3", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "S_C_TAG_4", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "S_C_TAG_5", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "S_C_TAG_6", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "S_C_TAG_7", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "S_C_TAG_8", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "S_PRIORITY_C_TAG_1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "S_PRIORITY_C_TAG_2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "S_PRIORITY_C_TAG_3", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "S_PRIORITY_C_TAG_4", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "S_S_TAG_1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "S_S_TAG_2", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 25;
            enum_info++;
            
            enum_info->value_from_mapping = 26;
            enum_info++;
            
            enum_info->value_from_mapping = 27;
            enum_info++;
            
            enum_info->value_from_mapping = 28;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_oam_sub_type_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_OAM_SUB_TYPE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "OAM_SUB_TYPE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 175)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 13;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NULL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LOSS_MEASUREMENT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "DELAY_MEASUREMENT_1588", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "DELAY_MEASUREMENT_NTP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LOOPBACK", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "CCM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TWAMP_REFLECTOR_1ST", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TWAMP_REFLECTOR_2ND", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAM_LEVEL_ERROR", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAM_PASSIVE_ERROR", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RFC8321", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_RFC8321_ON_FLOW_ID", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BFDV6_CHECKSUM_ERROR", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ingress_mpls_range_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_INGRESS_MPLS_RANGE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "INGRESS_MPLS_RANGE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 176)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "EVPN_IML", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_prt_qualifier_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_PRT_QUALIFIER];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "PRT_QUALIFIER" , dnx_data_aod_sizes.AOD.sizes_get(unit, 177)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 4;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "DEFAULT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SET_VISIBILITY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAMP_INJECTION_DOWN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAMP_INJECTION", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 2;
            enum_info++;
            
            enum_info->value_from_mapping = 6;
            enum_info++;
            
            enum_info->value_from_mapping = 7;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_cs_profile_vtt1_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_PTC_CS_PROFILE_VTT1];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "PTC_CS_PROFILE_VTT1" , dnx_data_aod_sizes.AOD.sizes_get(unit, 178)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 3;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "DEFAULT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RAW_MPLS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPSEC_MACSEC", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_cs_profile_vtt2_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_PTC_CS_PROFILE_VTT2];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "PTC_CS_PROFILE_VTT2" , dnx_data_aod_sizes.AOD.sizes_get(unit, 179)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 4;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "DEFAULT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "EXTENDED_ENCAPSULATION", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPSEC_MACSEC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "2ND_PASS_DROP_AND_CONTINUE", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_cs_profile_vtt3_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_PTC_CS_PROFILE_VTT3];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "PTC_CS_PROFILE_VTT3" , dnx_data_aod_sizes.AOD.sizes_get(unit, 180)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 4;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "DEFAULT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "P2P_ONLY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPSEC_MACSEC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "2ND_PASS_DROP_AND_CONTINUE", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_cs_profile_vtt4_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_PTC_CS_PROFILE_VTT4];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "PTC_CS_PROFILE_VTT4" , dnx_data_aod_sizes.AOD.sizes_get(unit, 181)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "DEFAULT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPSEC_MACSEC", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 2;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_cs_profile_vtt5_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_PTC_CS_PROFILE_VTT5];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "PTC_CS_PROFILE_VTT5" , dnx_data_aod_sizes.AOD.sizes_get(unit, 182)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "DEFAULT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPSEC_MACSEC", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 2;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_cs_profile_fwd1_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_PTC_CS_PROFILE_FWD1];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "PTC_CS_PROFILE_FWD1" , dnx_data_aod_sizes.AOD.sizes_get(unit, 183)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 3;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "STANDARD", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NAT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "2ND_PASS_EXTENDED_ENCAPSULATION", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_cs_profile_fwd2_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_PTC_CS_PROFILE_FWD2];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "PTC_CS_PROFILE_FWD2" , dnx_data_aod_sizes.AOD.sizes_get(unit, 184)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 1;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "STANDARD", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_routing_enable_profile_vtt1_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_PTC_ROUTING_ENABLE_PROFILE_VTT1];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "PTC_ROUTING_ENABLE_PROFILE_VTT1" , dnx_data_aod_sizes.AOD.sizes_get(unit, 185)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 3;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "DEFAULT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ALWAYSTERMINATE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NEVERTERMINATE", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_profile_llr_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_PTC_PROFILE_LLR];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "PTC_PROFILE_LLR" , dnx_data_aod_sizes.AOD.sizes_get(unit, 186)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_STRUCTURE , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_types_info->nof_struct_fields = 1;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_struct_alloc(unit, cur_field_types_info));
    cur_field_types_info->struct_field_info[0].struct_field_id = DBAL_FIELD_CS_PROFILE_VTT1;
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_profile_vtt1_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_PTC_PROFILE_VTT1];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "PTC_PROFILE_VTT1" , dnx_data_aod_sizes.AOD.sizes_get(unit, 187)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_STRUCTURE , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_types_info->nof_struct_fields = 2;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_struct_alloc(unit, cur_field_types_info));
    cur_field_types_info->struct_field_info[0].struct_field_id = DBAL_FIELD_CS_PROFILE_VTT2;
    cur_field_types_info->struct_field_info[1].struct_field_id = DBAL_FIELD_ROUTING_ENABLE_PROFILE_VTT1;
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_profile_vtt2_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_PTC_PROFILE_VTT2];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "PTC_PROFILE_VTT2" , dnx_data_aod_sizes.AOD.sizes_get(unit, 188)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_STRUCTURE , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_types_info->nof_struct_fields = 2;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_struct_alloc(unit, cur_field_types_info));
    cur_field_types_info->struct_field_info[0].struct_field_id = DBAL_FIELD_CS_PROFILE_VTT3;
    cur_field_types_info->struct_field_info[1].struct_field_id = DBAL_FIELD_ROUTING_ENABLE_PROFILE_VTT1;
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_profile_vtt3_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_PTC_PROFILE_VTT3];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "PTC_PROFILE_VTT3" , dnx_data_aod_sizes.AOD.sizes_get(unit, 189)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_STRUCTURE , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_types_info->nof_struct_fields = 2;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_struct_alloc(unit, cur_field_types_info));
    cur_field_types_info->struct_field_info[0].struct_field_id = DBAL_FIELD_CS_PROFILE_VTT4;
    cur_field_types_info->struct_field_info[1].struct_field_id = DBAL_FIELD_ROUTING_ENABLE_PROFILE_VTT1;
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_profile_vtt4_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_PTC_PROFILE_VTT4];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "PTC_PROFILE_VTT4" , dnx_data_aod_sizes.AOD.sizes_get(unit, 190)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_STRUCTURE , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_types_info->nof_struct_fields = 2;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_struct_alloc(unit, cur_field_types_info));
    cur_field_types_info->struct_field_info[0].struct_field_id = DBAL_FIELD_CS_PROFILE_VTT5;
    cur_field_types_info->struct_field_info[1].struct_field_id = DBAL_FIELD_ROUTING_ENABLE_PROFILE_VTT1;
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_profile_vtt5_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_PTC_PROFILE_VTT5];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "PTC_PROFILE_VTT5" , dnx_data_aod_sizes.AOD.sizes_get(unit, 191)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_STRUCTURE , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_types_info->nof_struct_fields = 2;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_struct_alloc(unit, cur_field_types_info));
    cur_field_types_info->struct_field_info[0].struct_field_id = DBAL_FIELD_CS_PROFILE_FWD1;
    cur_field_types_info->struct_field_info[1].struct_field_id = DBAL_FIELD_ROUTING_ENABLE_PROFILE_VTT1;
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_profile_fwd1_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_PTC_PROFILE_FWD1];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "PTC_PROFILE_FWD1" , dnx_data_aod_sizes.AOD.sizes_get(unit, 192)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_STRUCTURE , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_types_info->nof_struct_fields = 1;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_struct_alloc(unit, cur_field_types_info));
    cur_field_types_info->struct_field_info[0].struct_field_id = DBAL_FIELD_CS_PROFILE_FWD2;
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_egress_fwd_action_profile_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_EGRESS_FWD_ACTION_PROFILE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "EGRESS_FWD_ACTION_PROFILE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 193)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 7;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "DEFAULT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "DROP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENERAL_TRAP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "USER_TRAP_1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "USER_TRAP_2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "USER_TRAP_3", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "USER_TRAP_4", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_mac_table_entry_event_forwarding_profile_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_MAC_TABLE_ENTRY_EVENT_FORWARDING_PROFILE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "MAC_TABLE_ENTRY_EVENT_FORWARDING_PROFILE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 194)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "HW_MANAGEMENT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "CPU_MANAGEMENT", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_mac_table_aging_profile_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_MAC_TABLE_AGING_PROFILE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "MAC_TABLE_AGING_PROFILE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 195)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "HW_MANAGEMENT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "CPU_MANAGEMENT", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_prp2_ace_ctxt_value_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ETPP_PRP2_ACE_CTXT_VALUE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ETPP_PRP2_ACE_CTXT_VALUE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 196)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NULL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "CANCEL_SYSTEM_HEADER_LIFS_ADD_DEST_PORT_BASED_LIF_LOOKUP", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_term_ace_ctxt_value_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ETPP_TERM_ACE_CTXT_VALUE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ETPP_TERM_ACE_CTXT_VALUE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 197)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 4;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NULL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "REFLECTOR_UDP_SWAP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IOAM_JP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM_TO_COE_TEMP_OR_MPLS_TRANSIT_CCM_SD_OR_L2_REFLECTOR_IP_SWAP", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_encap_1_ace_ctxt_value_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ETPP_ENCAP_1_ACE_CTXT_VALUE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ETPP_ENCAP_1_ACE_CTXT_VALUE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 199)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 3;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NULL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RFC8321", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PUSH_TWO_MPLS_LABELS", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_encap_2_ace_ctxt_value_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ETPP_ENCAP_2_ACE_CTXT_VALUE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ETPP_ENCAP_2_ACE_CTXT_VALUE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 200)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 3;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NULL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RFC8321", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6_EXT_ENCAP", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_trap_ace_ctxt_value_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ETPP_TRAP_ACE_CTXT_VALUE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ETPP_TRAP_ACE_CTXT_VALUE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 201)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 4;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NULL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RECYCLE_W_PTCH2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OVERRIDE_DROP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IFA_TRAP", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_trap_rcy_cmd_map_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ETPP_TRAP_RCY_CMD_MAP];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ETPP_TRAP_RCY_CMD_MAP" , dnx_data_aod_sizes.AOD.sizes_get(unit, 202)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 5;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RCH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PTCH2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FTMH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RCHOPTCH2", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_trap_fwd_rcy_cmd_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ETPP_TRAP_FWD_RCY_CMD];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ETPP_TRAP_FWD_RCY_CMD" , dnx_data_aod_sizes.AOD.sizes_get(unit, 203)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 4;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "DEFAULT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "EGRESS_TRAPPED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "REFLECTED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FWD_COPY_OF_SNOOP_OR_MIRROR", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 15;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_mpls_extended_forward_domain_type_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_MPLS_EXTENDED_FORWARD_DOMAIN_TYPE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "MPLS_EXTENDED_FORWARD_DOMAIN_TYPE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 204)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "MPLS_FWD_PER_IF", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS_FWD_UA", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ipv4_additional_header_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_IPV4_ADDITIONAL_HEADER];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "IPV4_ADDITIONAL_HEADER" , dnx_data_aod_sizes.AOD.sizes_get(unit, 205)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 6;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "RAW", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GRE4", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GRE8_WITH_KEY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GRE12_WITH_KEY_WITH_SN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "UDP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ESP", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 6;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ipv6_dip_idx_type_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_IPV6_DIP_IDX_TYPE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "IPV6_DIP_IDX_TYPE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 206)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "INTERMIDIATE_RESULT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LIF_ELIGIBLE", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_parsing_start_type_encoding_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_PARSING_START_TYPE_ENCODING];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "PARSING_START_TYPE_ENCODING" , dnx_data_aod_sizes.AOD.sizes_get(unit, 207)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 18;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "INITIALIZATION", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETHERNET", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ARP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FCOE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_12B", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_8B", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6_ENDPOINT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6_BEYOND", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "DUMMY_ETHERNET", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "INGRESS_SCTP_EGRESS_FTMH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PPP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS_UNTERM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RCH_EXTENDED_ENCAP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "UNKNOWN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ITMH_VAL", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 6;
            enum_info++;
            
            enum_info->value_from_mapping = 7;
            enum_info++;
            
            enum_info->value_from_mapping = 8;
            enum_info++;
            
            enum_info->value_from_mapping = 9;
            enum_info++;
            
            enum_info->value_from_mapping = 20;
            enum_info++;
            
            enum_info->value_from_mapping = 21;
            enum_info++;
            
            enum_info->value_from_mapping = 22;
            enum_info++;
            
            enum_info->value_from_mapping = 24;
            enum_info++;
            
            enum_info->value_from_mapping = 26;
            enum_info++;
            
            enum_info->value_from_mapping = 27;
            enum_info++;
            
            enum_info->value_from_mapping = 28;
            enum_info++;
            
            enum_info->value_from_mapping = 30;
            enum_info++;
            
            enum_info->value_from_mapping = 31;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_erpp_1st_parser_parser_context_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ERPP_1ST_PARSER_PARSER_CONTEXT];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ERPP_1ST_PARSER_PARSER_CONTEXT" , dnx_data_aod_sizes.AOD.sizes_get(unit, 208)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 16;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "UNKNOWN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETH_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6ENDPOINT_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6_BEYOND_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIER_MPLS_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIER_TI_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FTMH_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PPP_A", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_12B_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_8B_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "DUMMY_ETH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RCH_EXTENDED_ENCAP", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_jr_fwd_code_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_JR_FWD_CODE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "JR_FWD_CODE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 209)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 16;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "BRIDGE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_UC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_MC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_UC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_MC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TRILL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "CPU_TRAP1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RESERVED0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "CUSTOMER_1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "CUSTOMER_2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SNOOP_OR_MIRROR", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RESERVED1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RESERVED2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RESERVED3", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_egress_parsing_context_map_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_EGRESS_PARSING_CONTEXT_MAP];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "EGRESS_PARSING_CONTEXT_MAP" , dnx_data_aod_sizes.AOD.sizes_get(unit, 210)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 14;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETH_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6ENDPOINT_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6_BEYOND_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FTMH_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PPP_A", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_12B_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_8B_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "DUMMY_ETH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RCH_EXTENDED_ENCAP", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_egress_parsing_context_map_jr1_mode_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_EGRESS_PARSING_CONTEXT_MAP_JR1_MODE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "EGRESS_PARSING_CONTEXT_MAP_JR1_MODE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 211)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 6;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETH_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS_A1", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 13;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_1st_parser_parser_context_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ETPP_1ST_PARSER_PARSER_CONTEXT];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ETPP_1ST_PARSER_PARSER_CONTEXT" , dnx_data_aod_sizes.AOD.sizes_get(unit, 213)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 16;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "UNKNOWN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETH_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6ENDPOINT_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6_BEYOND_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIER_MPLS_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIER_TI_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FTMH_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PPP_A", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_12B_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_8B_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS_A1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "DUMMY_ETH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RCH_EXTENDED_ENCAP", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_prp2_port_cs_var_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ETPP_PRP2_PORT_CS_VAR];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ETPP_PRP2_PORT_CS_VAR" , dnx_data_aod_sizes.AOD.sizes_get(unit, 214)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "ETHERNET_TYPICAL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "CANCEL_SYSHDR_ENC", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_termination_port_cs_var_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ETPP_TERMINATION_PORT_CS_VAR];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ETPP_TERMINATION_PORT_CS_VAR" , dnx_data_aod_sizes.AOD.sizes_get(unit, 215)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 10;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "ETHERNET_TYPICAL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAMP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MACT_JR1_DSP_SWITCH_DEST_ENC_JR1_ARAD", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SBFD_REFLECTOR", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MACT_JR2_DSP_CMD_TO_REFRESH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IFA2_0_EGRESS_FORWARD", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TERMINATE_UP_2_PSO_CONSTRUCT_NOTHING_DO_NOTHING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NAT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MACT_JR1_DSP_COPY_DSP_CMD_23_TO_0_AS_IS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BUILD_FTMH_FROM_PIPE", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_forward_port_cs_var_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ETPP_FORWARD_PORT_CS_VAR];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ETPP_FORWARD_PORT_CS_VAR" , dnx_data_aod_sizes.AOD.sizes_get(unit, 216)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 7;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "ETHERNET_TYPICAL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MACSEC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SBFD_REFLECTOR", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MACT_JR1_DSP_CMD_TO_REFRESH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "COE_PORT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "CHOOSE_NOP_CTX", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NAT", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_trap_context_port_profile_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ETPP_TRAP_CONTEXT_PORT_PROFILE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ETPP_TRAP_CONTEXT_PORT_PROFILE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 217)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 8;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NORMAL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "DROP_ALL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TDM_STAMP_MC_CUD", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TDM_STAMP_PORT_VAL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TDM_STAMP_NOTHING_OR_BUILD_PTCH1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "STACKING_RIGHT_PORT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "INT_EGRESS_PORT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BUILD_PTCH1_FROM_FTMH_SSPA", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_irpp_system_header_profile_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_IRPP_SYSTEM_HEADER_PROFILE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "IRPP_SYSTEM_HEADER_PROFILE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 218)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 10;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "FTMH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FTMH_FDE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FTMH_TSH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FTMH_FDE_TSH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FTMH_PPH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FTMH_FDE_PPH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FTMH_TSH_PPH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FTMH_FDE_TSH_PPH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FTMH_TSH_PPH_UDH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NO_SYSTEM_HEADERS", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_udh_data_type_to_data_size_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_UDH_DATA_TYPE_TO_DATA_SIZE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "UDH_DATA_TYPE_TO_DATA_SIZE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 219)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "UDH_DT_0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "UDH_DT_1_OR_UDH_DT_2_OR_UDH_DT_3", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 4;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_forward_domain_assignment_mode_enum_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_FORWARD_DOMAIN_ASSIGNMENT_MODE_ENUM];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "FORWARD_DOMAIN_ASSIGNMENT_MODE_ENUM" , dnx_data_aod_sizes.AOD.sizes_get(unit, 220)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 3;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "FORWARD_DOMAIN_FROM_LIF", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FORWARD_DOMAIN_FROM_VLAN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FORWARD_DOMAIN_FROM_LOOKUP", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_fodo_pd_result_type_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_FODO_PD_RESULT_TYPE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "FODO_PD_RESULT_TYPE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 221)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "RESULT_NOT_FOUND", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RESULT_FOUND", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_forward_domain_mask_profile_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_FORWARD_DOMAIN_MASK_PROFILE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "FORWARD_DOMAIN_MASK_PROFILE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 222)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 3;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "FROM_LIF_17_0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FROM_LIF_17_12_FROM_PD_11_0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FROM_PD_17_0", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_erpp_fwd_code_filters_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ERPP_FWD_CODE_FILTERS];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ERPP_FWD_CODE_FILTERS" , dnx_data_aod_sizes.AOD.sizes_get(unit, 223)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 16;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "ETHERNET", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_UC_R0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_MC_R0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_UC_R0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_MC_R0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIER_MPLS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "BIER_TI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "INGRESS_TRAPPED_JR1_LEGACY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "STACKING_PORT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6_ENDPOINT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_UC_R1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV4_MC_R1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_UC_R1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_MC_R1", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 13;
            enum_info++;
            
            enum_info->value_from_mapping = 16;
            enum_info++;
            
            enum_info->value_from_mapping = 19;
            enum_info++;
            
            enum_info->value_from_mapping = 26;
            enum_info++;
            
            enum_info->value_from_mapping = 34;
            enum_info++;
            
            enum_info->value_from_mapping = 35;
            enum_info++;
            
            enum_info->value_from_mapping = 36;
            enum_info++;
            
            enum_info->value_from_mapping = 37;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_irpp_next_layer_network_domain_encoding_vtt_lif_arr_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_IRPP_NEXT_LAYER_NETWORK_DOMAIN_ENCODING_VTT_LIF_ARR];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "IRPP_NEXT_LAYER_NETWORK_DOMAIN_ENCODING_VTT_LIF_ARR" , dnx_data_aod_sizes.AOD.sizes_get(unit, 224)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 3;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NEXT_LAYER_NETWORK_DOMAIN_PWE_WO_SD_TAGS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NEXT_LAYER_NETWORK_DOMAIN_TNIORVNI", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 15859712;
            enum_info++;
            
            enum_info->value_from_mapping = 15925248;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_esem_name_space_encoding_prp_ees_arr_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ETPP_ESEM_NAME_SPACE_ENCODING_PRP_EES_ARR];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ETPP_ESEM_NAME_SPACE_ENCODING_PRP_EES_ARR" , dnx_data_aod_sizes.AOD.sizes_get(unit, 225)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ESEM_NAME_SPACE_TNIORVNI", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 248;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_srv6_termination_type_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_SRV6_TERMINATION_TYPE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "SRV6_TERMINATION_TYPE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 239)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "USP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PSP", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_srv6_encapsulation_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_SRV6_ENCAPSULATION];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "SRV6_ENCAPSULATION" , dnx_data_aod_sizes.AOD.sizes_get(unit, 240)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NORMAL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "REDUCED", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_tail_edit_profile_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_TAIL_EDIT_PROFILE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "TAIL_EDIT_PROFILE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 282)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 8;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "DO_NOT_TAIL_EDIT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPT_TAIL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPT_UDP_GPE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPT_IFA", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPT_FIRST_UDP_GPE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPT_IFA2_0_INGRESS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPT_LAST_UDP_GPE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPT_IFA2_0_INTERMEDIATE", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_llr_cs_port_cs_profile_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_LLR_CS_PORT_CS_PROFILE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "LLR_CS_PORT_CS_PROFILE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 283)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 7;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "TYPICAL_PORT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PON_STC_PORT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PON_DTC_PORT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RAW_PORT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "802_1_BR", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SUPPORT_FRR_OPTIMIZATION", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "802_1_BR_WITH_FRR_OPTIMIZATION", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_vtt_save_context_profile_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_VTT_SAVE_CONTEXT_PROFILE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "VTT_SAVE_CONTEXT_PROFILE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 287)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 6;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "DEFAULT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "VTT1___BRIDGE___PON_DTC_S_TAG", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "VTT1___BRIDGE___PON_DTC_C_TAG", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "VTT1___BRIDGE___PON_DTC_SP_C_TAG", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "VTT1___BRIDGE___PON_DTC_UNTAGGED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "VTTX___MPLS___EVPN_IML", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ipv4_qualifier_tunnel_type_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_IPV4_QUALIFIER_TUNNEL_TYPE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "IPV4_QUALIFIER_TUNNEL_TYPE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 299)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 14;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "RAW", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GRE4", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GRE8_WITH_KEY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GRE12", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "UDP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "VXLANOUDP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "VXLAN_GPEOUDP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GENEVEOUDP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "L2TPV3OUDP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GRE4OUDP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ESPOIPSEC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ESPOIPSEC_UDP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GTPV2OUDP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GTPUOUDP", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 2;
            enum_info++;
            
            enum_info->value_from_mapping = 3;
            enum_info++;
            
            enum_info->value_from_mapping = 4;
            enum_info++;
            
            enum_info->value_from_mapping = 5;
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ipv6_additional_header_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_IPV6_ADDITIONAL_HEADER];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "IPV6_ADDITIONAL_HEADER" , dnx_data_aod_sizes.AOD.sizes_get(unit, 301)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 20;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NOT_AVAILABLE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GRE4", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GRE8", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GRE12", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "UDP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "L2TPV3", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "VXLAN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "VXLAN_GPE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ESP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ESP_UDP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_EH_HOP_BY_HOP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_EH_ROUTING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_EH_FRAGMENT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_EH_ESP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_EH_AUTH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_EH_DO", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_EH_MOBILITY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_EH_HIP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_EH_SHIM6", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_EH_BIGGER_THAN_64", sizeof(enum_info->name_from_interface));
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
            
            enum_info->value_from_mapping = 31;
            enum_info++;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_srv6_unified_128b_index_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_SRV6_UNIFIED_128B_INDEX];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "SRV6_UNIFIED_128B_INDEX" , dnx_data_aod_sizes.AOD.sizes_get(unit, 303)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 3;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "FIRST_128B", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SECOND_128B", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "THIRD_128B", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_fcoe_type_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_FCOE_TYPE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "FCOE_TYPE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 307)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "FCOE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FIP", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_fcoe_first_additional_header_type_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_FCOE_FIRST_ADDITIONAL_HEADER_TYPE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "FCOE_FIRST_ADDITIONAL_HEADER_TYPE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 308)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 3;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "VFT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ENCAPSULATION", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ase_type_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ASE_TYPE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ASE_TYPE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 312)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 3;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "OTHER", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PTP", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_gtp_version_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_GTP_VERSION];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "GTP_VERSION" , dnx_data_aod_sizes.AOD.sizes_get(unit, 314)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 3;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "V0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "V1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "V2", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_gtp_type_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_GTP_TYPE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "GTP_TYPE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 315)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "GTP_TAG", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GTP", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_pppoe_s_or_d_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_PPPOE_S_OR_D];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "PPPOE_S_OR_D" , dnx_data_aod_sizes.AOD.sizes_get(unit, 317)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "SESSION", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "DISCOVERY", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_l2tp_d_or_c_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_L2TP_D_OR_C];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "L2TP_D_OR_C" , dnx_data_aod_sizes.AOD.sizes_get(unit, 319)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "DATA", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "CONTROL", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_rch_type_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_RCH_TYPE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "RCH_TYPE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 321)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 6;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "DROPANDCONTINUE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "EXTENCAP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "EXTTERM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "REFLECTOR", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "VRFREDIRECT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SRV6_EXT_ENCAPSULATION", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ttl_action_profile_value_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_TTL_ACTION_PROFILE_VALUE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "TTL_ACTION_PROFILE_VALUE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 328)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 3;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "IPV4", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MPLS", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_erpp_ebtr_terminate_system_headers_mode_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ERPP_EBTR_TERMINATE_SYSTEM_HEADERS_MODE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ERPP_EBTR_TERMINATE_SYSTEM_HEADERS_MODE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 329)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "ALWAYS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NEVER", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_erpp_ebtr_terminate_network_headers_mode_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ERPP_EBTR_TERMINATE_NETWORK_HEADERS_MODE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ERPP_EBTR_TERMINATE_NETWORK_HEADERS_MODE" , dnx_data_aod_sizes.AOD.sizes_get(unit, 330)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "ALWAYS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NEVER", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etps_srv6_raw_data_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ETPS_SRV6_RAW_DATA];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ETPS_SRV6_RAW_DATA" , dnx_data_aod_sizes.AOD.sizes_get(unit, 337)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_STRUCTURE , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_types_info->nof_struct_fields = 2;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_struct_alloc(unit, cur_field_types_info));
    cur_field_types_info->struct_field_info[0].struct_field_id = DBAL_FIELD_SRH_BASE;
    cur_field_types_info->struct_field_info[1].struct_field_id = DBAL_FIELD_NOF_SIDS;
    cur_field_types_info->struct_field_info[1].length = 5;
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_enc1_port_cs_var_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ETPP_ENC1_PORT_CS_VAR];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ETPP_ENC1_PORT_CS_VAR" , dnx_data_aod_sizes.AOD.sizes_get(unit, 338)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 4;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "ETHERNET_TYPICAL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NAT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MACSEC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "EXTENDED_ENCAPSULATION", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_enc2_port_cs_var_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ETPP_ENC2_PORT_CS_VAR];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ETPP_ENC2_PORT_CS_VAR" , dnx_data_aod_sizes.AOD.sizes_get(unit, 339)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 1;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "ETHERNET_TYPICAL", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_enc3_port_cs_var_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ETPP_ENC3_PORT_CS_VAR];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ETPP_ENC3_PORT_CS_VAR" , dnx_data_aod_sizes.AOD.sizes_get(unit, 340)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "ETHERNET_TYPICAL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "EXTENDED_ENCAPSULATION", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_enc4_port_cs_var_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ETPP_ENC4_PORT_CS_VAR];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ETPP_ENC4_PORT_CS_VAR" , dnx_data_aod_sizes.AOD.sizes_get(unit, 341)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "ETHERNET_TYPICAL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "EXTENDED_ENCAPSULATION", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_enc5_port_cs_var_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ETPP_ENC5_PORT_CS_VAR];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ETPP_ENC5_PORT_CS_VAR" , dnx_data_aod_sizes.AOD.sizes_get(unit, 342)->value , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 3;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "ETHERNET_TYPICAL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NPV_UPSTREAM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MACSEC", sizeof(enum_info->name_from_interface));
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
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    SHR_FUNC_INIT_VARS(unit);
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_qos_forward_p1_explicit_remark_profile_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_qos_forward_p1_remark_profile_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_qos_lr_forward_p1_type_index_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_qos_typefwdplus1_type_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_esem1_default_result_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_esem2_default_result_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_exem_default_result_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_esem_command_attribute_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_layer_types_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_current_protocol_type_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_next_protocol_namespace_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_layer_types_itmh_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_layer_types_ftmh_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_layer_types_itmh_jr1_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_egress_fwd_code_port_profile_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_egress_fwd_code_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_kbp_forward_app_types_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_fwd_code_ace_ctxt_value_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_fai_forward_result_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_fai_forward_p1_header_remarking_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_fai_ttl_proccesing_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_fai_forward_header_remarking_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_fai_fallback_to_bridge_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_fai_inject_indication_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_service_per_flow_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_in_lif_service_type_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_qos_var_type_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ctx_additional_header_profile_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_ahp_udp_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_ahp_mpls_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_ahp_ip_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_ahp_vxlan_vxlan_gpe_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_ahp_gre_geneve_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_ahp_general_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_php_ttl_model_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_additional_header_profile_stack_attributes_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_egress_forward_code_properties_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_egress_forward_code_properties_jr1_mode_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_my_mac_exem_da_profile_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_irpp_1st_parser_parser_context_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_irpp_2nd_parser_parser_context_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_vtt_mpls_special_label_profile_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_vtt_mpls_special_label_profile_attributes_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_vsi_profile_bridge_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_l2_v4_mc_fwd_type_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_l2_v6_mc_fwd_type_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_l2_fodo_profile_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_vtt1_csp_1bit_mim_namespace_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_mim_inlif_profile_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_vtt4_csp_1bit_pwe_tag_namespace_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_vtt4_csp_2bit_pwe_nof_sd_tags_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_vtt4_csp_1bit_pwe_learn_native_ac_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_pwe_inlif_cs_profile_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_vttx_cs_evpn_iml_ah_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_evpn_iml_inlif_cs_profile_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_xxxx_csp_1bit_l3lif_mpls_namespace_and_algo_acl_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_vtt5_csp_1bit_nat_direction_and_virtual_ip_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_vtt5_csp_1bit_l3lif_uc_db_mode_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_vtt5_csp_1bit_l3lif_mc_db_mode_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_routing_inlif_cs_profile_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_lif_fwd1_csp_1bit_urpf_mode_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_routing_fwd_inlif_profile_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_learn_payload_context_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_incoming_tag_structure_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_oam_sub_type_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ingress_mpls_range_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_prt_qualifier_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_cs_profile_vtt1_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_cs_profile_vtt2_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_cs_profile_vtt3_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_cs_profile_vtt4_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_cs_profile_vtt5_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_cs_profile_fwd1_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_cs_profile_fwd2_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_routing_enable_profile_vtt1_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_profile_llr_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_profile_vtt1_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_profile_vtt2_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_profile_vtt3_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_profile_vtt4_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_profile_vtt5_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ptc_profile_fwd1_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_egress_fwd_action_profile_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_mac_table_entry_event_forwarding_profile_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_mac_table_aging_profile_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_prp2_ace_ctxt_value_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_term_ace_ctxt_value_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_encap_1_ace_ctxt_value_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_encap_2_ace_ctxt_value_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_trap_ace_ctxt_value_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_trap_rcy_cmd_map_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_trap_fwd_rcy_cmd_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_mpls_extended_forward_domain_type_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ipv4_additional_header_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ipv6_dip_idx_type_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_parsing_start_type_encoding_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_erpp_1st_parser_parser_context_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_jr_fwd_code_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_egress_parsing_context_map_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_egress_parsing_context_map_jr1_mode_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_1st_parser_parser_context_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_prp2_port_cs_var_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_termination_port_cs_var_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_forward_port_cs_var_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_trap_context_port_profile_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_irpp_system_header_profile_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_udh_data_type_to_data_size_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_forward_domain_assignment_mode_enum_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_fodo_pd_result_type_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_forward_domain_mask_profile_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_erpp_fwd_code_filters_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_irpp_next_layer_network_domain_encoding_vtt_lif_arr_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_esem_name_space_encoding_prp_ees_arr_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_srv6_termination_type_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_srv6_encapsulation_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_tail_edit_profile_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_llr_cs_port_cs_profile_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_vtt_save_context_profile_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ipv4_qualifier_tunnel_type_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ipv6_additional_header_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_srv6_unified_128b_index_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_fcoe_type_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_fcoe_first_additional_header_type_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ase_type_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_gtp_version_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_gtp_type_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_pppoe_s_or_d_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_l2tp_d_or_c_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_rch_type_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_ttl_action_profile_value_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_erpp_ebtr_terminate_system_headers_mode_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_erpp_ebtr_terminate_network_headers_mode_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etps_srv6_raw_data_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_enc1_port_cs_var_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_enc2_port_cs_var_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_enc3_port_cs_var_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_enc4_port_cs_var_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_profile_field_types_etpp_enc5_port_cs_var_init(unit, cur_field_type_param, field_types_info));
exit:
    SHR_FUNC_EXIT;
}
