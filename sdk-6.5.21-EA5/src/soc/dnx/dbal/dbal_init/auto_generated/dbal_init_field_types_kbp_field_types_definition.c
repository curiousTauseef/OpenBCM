
/*
 * 
 This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 
 Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

shr_error_e
_dbal_init_field_types_kbp_field_types_definition_kbp_key_field_type_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_KBP_KEY_FIELD_TYPE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "KBP_KEY_FIELD_TYPE" , 3 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , FALSE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 6;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "INVALID", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PREFIX", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "EM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RANGE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TERNARY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "HOLE", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    {
        int enum_index = 0;
        for (enum_index = 0; enum_index < 6; enum_index++)
        {
            cur_field_type_param->enums[enum_index].value_from_mapping = enum_index;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_kbp_field_types_definition_algo_mode_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ALGO_MODE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ALGO_MODE" , 3 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , FALSE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 5;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NON_ALGO", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "POWER_CTRL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "POWER_CTRL_ADVANCE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NET_ACL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "DEFAULT", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    {
        int enum_index = 0;
        for (enum_index = 0; enum_index < 5; enum_index++)
        {
            cur_field_type_param->enums[enum_index].value_from_mapping = enum_index;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_kbp_field_types_definition_kbp_result_location_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_KBP_RESULT_LOCATION];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "KBP_RESULT_LOCATION" , 1 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_UINT32 , 0 , 1 , FALSE ));
    
    
    
    
    
    sal_memset(cur_field_type_param->define, 0x0, 2 * sizeof(dbal_db_defines_info_struct_t));
    sal_strncpy(cur_field_type_param->define[0].define_name, "FWD", sizeof(cur_field_type_param->define[0].define_name));
    cur_field_type_param->define[0].define_value = 0;
    sal_strncpy(cur_field_type_param->define[1].define_name, "RPF", sizeof(cur_field_type_param->define[1].define_name));
    cur_field_type_param->define[1].define_value = 1;
    cur_field_type_param->nof_defined_vals = 2;
    
    
    
    
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
_dbal_init_field_types_kbp_field_types_definition_kbp_device_status_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_KBP_DEVICE_STATUS];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "KBP_DEVICE_STATUS" , 4 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , FALSE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 7;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "BEFORE_INIT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FWD_CONFIG_DONE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "INIT_DONE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "CONFIG_UPDATED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SYNC_IN_PROCESS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "WB_IN_PROCESS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LOCKED", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    {
        int enum_index = 0;
        for (enum_index = 0; enum_index < 7; enum_index++)
        {
            cur_field_type_param->enums[enum_index].value_from_mapping = enum_index;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_kbp_field_types_definition_kbp_kbr_idx_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_KBP_KBR_IDX];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "KBP_KBR_IDX" , 2 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , FALSE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 4;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "KEY_0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "KEY_1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "KEY_2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "KEY_3", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    {
        int enum_index = 0;
        for (enum_index = 0; enum_index < 4; enum_index++)
        {
            cur_field_type_param->enums[enum_index].value_from_mapping = enum_index;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_kbp_field_types_definition_kbp_lookup_type_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_KBP_LOOKUP_TYPE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "KBP_LOOKUP_TYPE" , 3 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , FALSE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 6;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "FREE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FWD", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RPF", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FWD_PUBLIC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "RPF_PUBLIC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ACL", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    {
        int enum_index = 0;
        for (enum_index = 0; enum_index < 6; enum_index++)
        {
            cur_field_type_param->enums[enum_index].value_from_mapping = enum_index;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_kbp_field_types_definition_kbp_device_mode_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_KBP_DEVICE_MODE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "KBP_DEVICE_MODE" , 2 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , FALSE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 4;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "SINGLE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "DUAL_SHARED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "DUAL_SMT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SINGLE_PORT", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    {
        int enum_index = 0;
        for (enum_index = 0; enum_index < 4; enum_index++)
        {
            cur_field_type_param->enums[enum_index].value_from_mapping = enum_index;
        }
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_kbp_field_types_definition_kbp_opcode_id_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_KBP_OPCODE_ID];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "KBP_OPCODE_ID" , 8 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_UINT32 , 0 , 1 , FALSE ));
    
    
    
    
    
    
    
    
    cur_field_type_param->max_value = 201;
    
    cur_field_type_param->min_value = 1;
    
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = DBAL_DB_INVALID;
    
    cur_field_type_param->nof_illegal_value = 0;
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
dbal_init_field_types_kbp_field_types_definition_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    SHR_FUNC_INIT_VARS(unit);
    SHR_IF_ERR_EXIT(_dbal_init_field_types_kbp_field_types_definition_kbp_key_field_type_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_kbp_field_types_definition_algo_mode_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_kbp_field_types_definition_kbp_result_location_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_kbp_field_types_definition_kbp_device_status_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_kbp_field_types_definition_kbp_kbr_idx_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_kbp_field_types_definition_kbp_lookup_type_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_kbp_field_types_definition_kbp_device_mode_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_kbp_field_types_definition_kbp_opcode_id_init(unit, cur_field_type_param, field_types_info));
exit:
    SHR_FUNC_EXIT;
}
