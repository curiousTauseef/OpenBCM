
/*
 * 
 This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 
 Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_egress_glem_formats_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_EGRESS_GLEM_FORMATS];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "EGRESS_GLEM_FORMATS" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 3;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "GLEM_GLOBAL_TO_LOCAL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "GLEM_GLOBAL_TO_LOCAL_RIF_1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        
        enum_info->value_from_mapping = 1;
        enum_info++;
        
        enum_info->value_from_mapping = 2;
        enum_info++;
        
        enum_info->value_from_mapping = 0;
        enum_info++;
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_egress_ppmc_formats_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_EGRESS_PPMC_FORMATS];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "EGRESS_PPMC_FORMATS" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 6;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "PPMC_DOUBLE_OUTLIF", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PPMC_EMPTY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PPMC_RESERVED_4", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PPMC_RESERVED_5", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PPMC_SINGLE_OUTLIF", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "PPMC_TRIPLE_OUTLIF", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        
        enum_info->value_from_mapping = 2;
        enum_info++;
        
        enum_info->value_from_mapping = 0;
        enum_info++;
        
        enum_info->value_from_mapping = 4;
        enum_info++;
        
        enum_info->value_from_mapping = 5;
        enum_info++;
        
        enum_info->value_from_mapping = 1;
        enum_info++;
        
        enum_info->value_from_mapping = 3;
        enum_info++;
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_egress_vsi_formats_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_EGRESS_VSI_FORMATS];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "EGRESS_VSI_FORMATS" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "EGRESS_VSI_1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        
        enum_info->value_from_mapping = 1;
        enum_info++;
        
        enum_info->value_from_mapping = 0;
        enum_info++;
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_etpp_etps_formats_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ETPP_ETPS_FORMATS];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ETPP_ETPS_FORMATS" , dnx_data_pp.ETPP.etps_type_size_bits_get(unit) , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 65;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "ETPS_AC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_AC_QOS_OAM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_AC_STAT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_AC_STAT_PROTECTION", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_AC_TRIPLE_TAG", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_ARP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_ARP_AC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_ARP_AC_1TAG_STAT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_ARP_SA_CUSTOM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_ARP_SA_TUNNELING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_BFD_IPV4_EXTRA_SIP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_DATA_128B", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_DATA_VAR_SIZE_DATA", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_DUAL_HOMING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_ERSPANV2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_ERSPANV3", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_ETH_RIF", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_ETH_RIF_STAT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_GTPV1U", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_IPFIX_PSAMP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_IPV4_TUNNEL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_IPV4_TUNNEL_GRE_GENEVE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_IPV4_TUNNEL_UDP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_IPV4_TUNNEL_VXLAN_GPE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_IPV4_TUNNEL_VXLAN_GPE_ECN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_IPV6_TUNNEL_GENEVE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_IPV6_TUNNEL_GRE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_IPV6_TUNNEL_RAW", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_IPV6_TUNNEL_UDP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_IPV6_TUNNEL_VXLAN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_IPV6_TUNNEL_VXLAN_ECN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_L2TPV2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_L2_FODO", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_L2_FODO_VLANS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_L3_FODO", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_MPLS_1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_MPLS_1_AH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_MPLS_1_IML", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_MPLS_1_STAT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_MPLS_1_TANDEM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_MPLS_2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_MPLS_2_1_AH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_MPLS_2_2_AH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_MPLS_2_3_AH", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_MPLS_2_STAT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_MPLS_2_TANDEM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_MPLS_FHEI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_MPLS_FHEI_PLUS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_MPLS_IFIT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_MPLS_PHP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_MPLS_PHP_STAT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_NULL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_PPPOE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_RCHV2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_REFLECTOR", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_REFLECTOR_L2_MC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_REFLECTOR_OAM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_REFLECTOR_TWAMP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_RSPAN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_SFLOW_EXT_FIRST", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_SFLOW_EXT_SECOND", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_SFLOW_HDR_DP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_SFLOW_HDR_SAMP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_SRV6", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_SVTAG", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        
        enum_info->value_from_mapping = 11;
        enum_info++;
        
        enum_info->value_from_mapping = dnx_data_mdb_app_db.fields.numeric_mdb_field___197_get(unit);
        enum_info++;
        
        enum_info->value_from_mapping = 9;
        enum_info++;
        
        enum_info->value_from_mapping = 8;
        enum_info++;
        
        enum_info->value_from_mapping = 10;
        enum_info++;
        
        enum_info->value_from_mapping = 2;
        enum_info++;
        
        enum_info->value_from_mapping = 4;
        enum_info++;
        
        enum_info->value_from_mapping = 6;
        enum_info++;
        
        enum_info->value_from_mapping = 5;
        enum_info++;
        
        enum_info->value_from_mapping = 7;
        enum_info++;
        
        enum_info->value_from_mapping = dnx_data_mdb_app_db.fields.numeric_mdb_field___198_get(unit);
        enum_info++;
        
        enum_info->value_from_mapping = 3;
        enum_info++;
        
        enum_info->value_from_mapping = 55;
        enum_info++;
        
        enum_info->value_from_mapping = 61;
        enum_info++;
        
        enum_info->value_from_mapping = 60;
        enum_info++;
        
        enum_info->value_from_mapping = 56;
        enum_info++;
        
        enum_info->value_from_mapping = dnx_data_mdb_app_db.fields.numeric_mdb_field___199_get(unit);
        enum_info++;
        
        enum_info->value_from_mapping = 3;
        enum_info++;
        
        enum_info->value_from_mapping = 46;
        enum_info++;
        
        enum_info->value_from_mapping = 58;
        enum_info++;
        
        enum_info->value_from_mapping = 20;
        enum_info++;
        
        enum_info->value_from_mapping = dnx_data_mdb_app_db.fields.numeric_mdb_field___200_get(unit);
        enum_info++;
        
        enum_info->value_from_mapping = 32;
        enum_info++;
        
        enum_info->value_from_mapping = dnx_data_mdb_app_db.fields.numeric_mdb_field___201_get(unit);
        enum_info++;
        
        enum_info->value_from_mapping = dnx_data_mdb_app_db.fields.numeric_mdb_field___202_get(unit);
        enum_info++;
        
        enum_info->value_from_mapping = 44;
        enum_info++;
        
        enum_info->value_from_mapping = 37;
        enum_info++;
        
        enum_info->value_from_mapping = 30;
        enum_info++;
        
        enum_info->value_from_mapping = 31;
        enum_info++;
        
        enum_info->value_from_mapping = 34;
        enum_info++;
        
        enum_info->value_from_mapping = 35;
        enum_info++;
        
        enum_info->value_from_mapping = 41;
        enum_info++;
        
        enum_info->value_from_mapping = 49;
        enum_info++;
        
        enum_info->value_from_mapping = 33;
        enum_info++;
        
        enum_info->value_from_mapping = 45;
        enum_info++;
        
        enum_info->value_from_mapping = dnx_data_mdb_app_db.fields.numeric_mdb_field___203_get(unit);
        enum_info++;
        
        enum_info->value_from_mapping = dnx_data_mdb_app_db.fields.numeric_mdb_field___204_get(unit);
        enum_info++;
        
        enum_info->value_from_mapping = 39;
        enum_info++;
        
        enum_info->value_from_mapping = 29;
        enum_info++;
        
        enum_info->value_from_mapping = 38;
        enum_info++;
        
        enum_info->value_from_mapping = 27;
        enum_info++;
        
        enum_info->value_from_mapping = dnx_data_mdb_app_db.fields.numeric_mdb_field___205_get(unit);
        enum_info++;
        
        enum_info->value_from_mapping = dnx_data_mdb_app_db.fields.numeric_mdb_field___206_get(unit);
        enum_info++;
        
        enum_info->value_from_mapping = dnx_data_mdb_app_db.fields.numeric_mdb_field___207_get(unit);
        enum_info++;
        
        enum_info->value_from_mapping = 26;
        enum_info++;
        
        enum_info->value_from_mapping = 18;
        enum_info++;
        
        enum_info->value_from_mapping = dnx_data_mdb_app_db.fields.numeric_mdb_field___208_get(unit);
        enum_info++;
        
        enum_info->value_from_mapping = dnx_data_mdb_app_db.fields.numeric_mdb_field___209_get(unit);
        enum_info++;
        
        enum_info->value_from_mapping = dnx_data_mdb_app_db.fields.numeric_mdb_field___210_get(unit);
        enum_info++;
        
        enum_info->value_from_mapping = 62;
        enum_info++;
        
        enum_info->value_from_mapping = 15;
        enum_info++;
        
        enum_info->value_from_mapping = 0;
        enum_info++;
        
        enum_info->value_from_mapping = 21;
        enum_info++;
        
        enum_info->value_from_mapping = 47;
        enum_info++;
        
        enum_info->value_from_mapping = 52;
        enum_info++;
        
        enum_info->value_from_mapping = 51;
        enum_info++;
        
        enum_info->value_from_mapping = 53;
        enum_info++;
        
        enum_info->value_from_mapping = 54;
        enum_info++;
        
        enum_info->value_from_mapping = 43;
        enum_info++;
        
        enum_info->value_from_mapping = 59;
        enum_info++;
        
        enum_info->value_from_mapping = 42;
        enum_info++;
        
        enum_info->value_from_mapping = 16;
        enum_info++;
        
        enum_info->value_from_mapping = 40;
        enum_info++;
        
        enum_info->value_from_mapping = 14;
        enum_info++;
        
        enum_info->value_from_mapping = dnx_data_mdb_app_db.fields.numeric_mdb_field___211_get(unit);
        enum_info++;
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_irpp_fec_entry_format_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_IRPP_FEC_ENTRY_FORMAT];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "IRPP_FEC_ENTRY_FORMAT" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 9;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "FEC_ENTRY_DESTINATION", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FEC_ENTRY_DESTINATION_EEI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FEC_ENTRY_DESTINATION_LIF0", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FEC_ENTRY_DESTINATION_LIF0_17BIT_LIF1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FEC_ENTRY_DESTINATION_LIF0_HTM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FEC_ENTRY_DESTINATION_LIF0_LIF1_MC_RPF", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FEC_ENTRY_DESTINATION_LIF0_MC_RPF", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FEC_ENTRY_JR1_DESTINATION_EEI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FEC_ENTRY_JR1_DESTINATION_ETH_RIF_ARP", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    
    
    
    
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
        
        enum_info->value_from_mapping = 21;
        enum_info++;
        
        enum_info->value_from_mapping = 11;
        enum_info++;
        
        enum_info->value_from_mapping = 39;
        enum_info++;
        
        enum_info->value_from_mapping = 4;
        enum_info++;
        
        enum_info->value_from_mapping = 3;
        enum_info++;
        
        enum_info->value_from_mapping = 3;
        enum_info++;
        
        enum_info->value_from_mapping = 20;
        enum_info++;
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_irpp_fec_super_entry_format_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_IRPP_FEC_SUPER_ENTRY_FORMAT];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "IRPP_FEC_SUPER_ENTRY_FORMAT" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 4;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "SUPER_FEC_NO_PROTECTION", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SUPER_FEC_NO_PROTECTION_W_2_STAT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SUPER_FEC_W_PROTECTION", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "SUPER_FEC_W_PROTECTION_W_1_STAT", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    
    
    
    
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
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_irpp_fwd_stage_floating_formats_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_IRPP_FWD_STAGE_FLOATING_FORMATS];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "IRPP_FWD_STAGE_FLOATING_FORMATS" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 8;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "COMPRESSED_SOURCE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "COMPRESSED_SOURCE_AND_INTERFACE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "EM_PMF_ADDITIONAL_DATA_RESULT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FWD_NAT_TRANSLATION_RESULT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "KBP_FWD_NAT_TRANSLATION_RESULT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "LEARN_DESTINATION", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "TCAM_RESULT_VRF", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        
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
        
        enum_info->value_from_mapping = 0;
        enum_info++;
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_irpp_fwd_stage_formats_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_IRPP_FWD_STAGE_FORMATS];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "IRPP_FWD_STAGE_FORMATS" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 33;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "FWD_DEST", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FWD_DEST_DOUBLE_OUTLIF", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FWD_DEST_DOUBLE_OUTLIF_STAT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FWD_DEST_EEI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FWD_DEST_EEI_STAT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FWD_DEST_OUTLIF", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FWD_DEST_OUTLIF_STAT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FWD_DEST_OUTLIF_STAT_W_DEFAULT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FWD_DEST_OUTLIF_W_DEFAULT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FWD_DEST_STAT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FWD_DEST_STAT_W_DEFAULT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FWD_DEST_W_DEFAULT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FWD_MACT_RESULT_DEST_LIF_STAT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FWD_MACT_RESULT_DEST_STAT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FWD_MACT_RESULT_DOUBLE_OUTLIF", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FWD_MACT_RESULT_EEI_FEC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FWD_MACT_RESULT_NO_OUTLIF", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FWD_MACT_RESULT_NO_OUTLIF_NO_AUTO_LEARN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FWD_MACT_RESULT_SINGLE_OUTLIF", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FWD_NO_ACTION", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "KAPS_FEC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "KAPS_FEC_2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "KAPS_FEC_3", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "KAPS_FEC_4", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "KAPS_FEC_5", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "KAPS_FEC_6", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "KAPS_FEC_DEFAULT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "KAPS_MC_ID", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "KBP_DEST_W_DEFAULT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "KBP_FORWARD_DEST_EEI_W_DEFAULT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "KBP_FORWARD_DEST_STAT_W_DEFAULT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "KBP_FORWARD_OUTLIF_W_DEFAULT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "KBP_RPF_DEST_W_DEFAULT", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        
        enum_info->value_from_mapping = 10;
        enum_info++;
        
        enum_info->value_from_mapping = 7;
        enum_info++;
        
        enum_info->value_from_mapping = 8;
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
        
        enum_info->value_from_mapping = 11;
        enum_info++;
        
        enum_info->value_from_mapping = 2;
        enum_info++;
        
        enum_info->value_from_mapping = 13;
        enum_info++;
        
        enum_info->value_from_mapping = 1;
        enum_info++;
        
        enum_info->value_from_mapping = 50;
        enum_info++;
        
        enum_info->value_from_mapping = 49;
        enum_info++;
        
        enum_info->value_from_mapping = 12;
        enum_info++;
        
        enum_info->value_from_mapping = 40;
        enum_info++;
        
        enum_info->value_from_mapping = 16;
        enum_info++;
        
        enum_info->value_from_mapping = 23;
        enum_info++;
        
        enum_info->value_from_mapping = 48;
        enum_info++;
        
        enum_info->value_from_mapping = 55;
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
        
        enum_info->value_from_mapping = 0;
        enum_info++;
        
        enum_info->value_from_mapping = 17;
        enum_info++;
        
        enum_info->value_from_mapping = 14;
        enum_info++;
        
        enum_info->value_from_mapping = 15;
        enum_info++;
        
        enum_info->value_from_mapping = 18;
        enum_info++;
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_irpp_in_lif_formats_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_IRPP_IN_LIF_FORMATS];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "IRPP_IN_LIF_FORMATS" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 39;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "IN_ETH_AC_MP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_ETH_AC_VSI_P2P", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_ETH_VLAN_EDIT_ONLY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_ETH_VLAN_EDIT_VSI_MP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_AC2EEI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_AC2EEI_LARGE_GENERIC_DATA", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_AC2EEI_WITH_PROTECTION", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_AC_MP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_AC_MP_LARGE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_AC_MP_LARGE_GENERIC_DATA", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_AC_MP_OPTIMIZED_LEARN_PAYLOAD", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_AC_P2P", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_AC_P2P_LARGE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_AC_P2P_LARGE_GENERIC_DATA", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_AC_P2P_W_1_VLAN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_AC_P2P_W_VSI_WO_PROTECTION", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_AC_P2P_W_VSI_W_1_VLAN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_BIER_MPLS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_BIER_TI", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_DROPPED_COPY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_EVPN_EVI_MP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_EVPN_EVI_P2P_NO_LEARNING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_IPVX_1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_IPVX_2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_IPVX_3", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_ISID_MP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_ISID_P2P", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_LSP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_MIM_TUNNEL", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_MPLS_DUMMY", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_P2P_COMPACT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_PWE2EEI_NO_LEARNING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_PWE_MP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_PWE_P2P_NO_LEARNING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_PWE_P2P_NO_LEARNING_OPTIMIZED", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_RCH_CONTROL_LIF", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_TUNNEL_W_L3_PAYLOAD_LARGE_W_GENERIC_DATA", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_TUNNEL_W_L3_PAYLOAD_MP_FORWARD_W_GENERIC_DATA", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IN_LIF_TUNNEL_W_L3_PAYLOAD_P2P_FORWARD_TO_FEC_W_GENERIC_DATA", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        
        enum_info->value_from_mapping = 50;
        enum_info++;
        
        enum_info->value_from_mapping = 41;
        enum_info++;
        
        enum_info->value_from_mapping = 40;
        enum_info++;
        
        enum_info->value_from_mapping = 39;
        enum_info++;
        
        enum_info->value_from_mapping = 2;
        enum_info++;
        
        enum_info->value_from_mapping = 4;
        enum_info++;
        
        enum_info->value_from_mapping = 38;
        enum_info++;
        
        enum_info->value_from_mapping = 1;
        enum_info++;
        
        enum_info->value_from_mapping = 60;
        enum_info++;
        
        enum_info->value_from_mapping = 4;
        enum_info++;
        
        enum_info->value_from_mapping = 6;
        enum_info++;
        
        enum_info->value_from_mapping = 0;
        enum_info++;
        
        enum_info->value_from_mapping = 61;
        enum_info++;
        
        enum_info->value_from_mapping = 5;
        enum_info++;
        
        enum_info->value_from_mapping = 1;
        enum_info++;
        
        enum_info->value_from_mapping = 58;
        enum_info++;
        
        enum_info->value_from_mapping = 57;
        enum_info++;
        
        enum_info->value_from_mapping = 35;
        enum_info++;
        
        enum_info->value_from_mapping = 43;
        enum_info++;
        
        enum_info->value_from_mapping = 34;
        enum_info++;
        
        enum_info->value_from_mapping = 51;
        enum_info++;
        
        enum_info->value_from_mapping = 52;
        enum_info++;
        
        enum_info->value_from_mapping = 47;
        enum_info++;
        
        enum_info->value_from_mapping = 48;
        enum_info++;
        
        enum_info->value_from_mapping = dnx_data_mdb_app_db.fields.numeric_mdb_field___212_get(unit);
        enum_info++;
        
        enum_info->value_from_mapping = 54;
        enum_info++;
        
        enum_info->value_from_mapping = 55;
        enum_info++;
        
        enum_info->value_from_mapping = 33;
        enum_info++;
        
        enum_info->value_from_mapping = 53;
        enum_info++;
        
        enum_info->value_from_mapping = 42;
        enum_info++;
        
        enum_info->value_from_mapping = 32;
        enum_info++;
        
        enum_info->value_from_mapping = 3;
        enum_info++;
        
        enum_info->value_from_mapping = 36;
        enum_info++;
        
        enum_info->value_from_mapping = 37;
        enum_info++;
        
        enum_info->value_from_mapping = 46;
        enum_info++;
        
        enum_info->value_from_mapping = 15;
        enum_info++;
        
        enum_info->value_from_mapping = 45;
        enum_info++;
        
        enum_info->value_from_mapping = 59;
        enum_info++;
        
        enum_info->value_from_mapping = 56;
        enum_info++;
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_irpp_isem_access_formats_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_IRPP_ISEM_ACCESS_FORMATS];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "IRPP_ISEM_ACCESS_FORMATS" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 6;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "COMPRESSED_MAC_ID", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "FORWARD_DOMAIN", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "INLIF_INDEX", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_ADDRESS_MSBS_ID", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "IPV6_MP_TUNNEL_IDX", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        
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
        
        enum_info->value_from_mapping = 0;
        enum_info++;
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_irpp_my_mac_exem_formats_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_IRPP_MY_MAC_EXEM_FORMATS];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "IRPP_MY_MAC_EXEM_FORMATS" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "MY_MAC_EXEM_RESULT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        
        enum_info->value_from_mapping = 1;
        enum_info++;
        
        enum_info->value_from_mapping = 0;
        enum_info++;
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_irpp_vsi_formats_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_IRPP_VSI_FORMATS];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "IRPP_VSI_FORMATS" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 3;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "VSI_ENTRY_BASIC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "VSI_ENTRY_BASIC_NON_MC_DESTINATION", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "VSI_ENTRY_WITH_STATS", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        
        enum_info->value_from_mapping = 2;
        enum_info++;
        
        enum_info->value_from_mapping = 0;
        enum_info++;
        
        enum_info->value_from_mapping = 3;
        enum_info++;
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_irpp_vtt_tcam_access_formats_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_IRPP_VTT_TCAM_ACCESS_FORMATS];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "IRPP_VTT_TCAM_ACCESS_FORMATS" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "FOUND", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        
        enum_info->value_from_mapping = 1;
        enum_info++;
        
        enum_info->value_from_mapping = 0;
        enum_info++;
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_oamp_formats_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_OAMP_FORMATS];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "OAMP_FORMATS" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 22;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "MEP_DB_BFD_ON_IPV4_MULTI_HOP_SHORT_STATIC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MEP_DB_BFD_ON_IPV4_ONE_HOP_SHORT_STATIC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MEP_DB_BFD_ON_MPLS_SHORT_STATIC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MEP_DB_BFD_ON_PWE_SHORT_STATIC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MEP_DB_BFD_ON_PWE_STATIC_PART_1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MEP_DB_BFD_ON_PWE_STATIC_PART_2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MEP_DB_CCM_ETH_SHORT_STATIC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MEP_DB_CCM_ETH_STATIC_PART_1_DOWNMEP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MEP_DB_CCM_ETH_STATIC_PART_1_UPMEP", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MEP_DB_CCM_ETH_STATIC_PART_2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MEP_DB_EXTRA_DATA_IN_MDB_HEADER", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MEP_DB_EXTRA_DATA_IN_MDB_PAYLOAD", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MEP_DB_Y1731_ON_MPLS_TP_SHORT_STATIC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MEP_DB_Y1731_ON_MPLS_TP_STATIC_PART_1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MEP_DB_Y1731_ON_MPLS_TP_STATIC_PART_2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MEP_DB_Y1731_ON_PWE_SHORT_STATIC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MEP_DB_Y1731_ON_PWE_STATIC_PART_1", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "MEP_DB_Y1731_ON_PWE_STATIC_PART_2", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAMP_LM_SESSION_ID", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAMP_RMEP_INDEX", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAMP_RMEP_STATIC_DATA", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        
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
        
        enum_info->value_from_mapping = 0;
        enum_info++;
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_oam_classifier_formats_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_OAM_CLASSIFIER_FORMATS];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "OAM_CLASSIFIER_FORMATS" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 3;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "OAM_ACC_MEP_DB", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "OAM_LIF_DB", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        
        enum_info->value_from_mapping = 1;
        enum_info++;
        
        enum_info->value_from_mapping = 2;
        enum_info++;
        
        enum_info->value_from_mapping = 0;
        enum_info++;
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_prt_vp_formats_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_PRT_VP_FORMATS];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "PRT_VP_FORMATS" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "IN_PP_PORT_INDEX_RESULT_TYPE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        
        enum_info->value_from_mapping = 1;
        enum_info++;
        
        enum_info->value_from_mapping = 0;
        enum_info++;
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_tcam_identification_formats_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_TCAM_IDENTIFICATION_FORMATS];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "TCAM_IDENTIFICATION_FORMATS" , 6 , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "OAM_IDENTIFICATION", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    
    
    
    
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        
        enum_info->value_from_mapping = 1;
        enum_info++;
        
        enum_info->value_from_mapping = 0;
        enum_info++;
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_eedb_type_em_buster_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_EEDB_TYPE_EM_BUSTER];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "EEDB_TYPE_EM_BUSTER" , dnx_data_pp.ETPP.etps_type_size_bits_get(unit) , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 10;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_AC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_AC_QOS_OAM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_AC_STAT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_AC_STAT_PROTECTION", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_AC_TRIPLE_TAG", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_ARP_AC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_ARP_AC_1TAG_STAT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_L2_FODO_VLANS", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_RSPAN", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    
    
    
    
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
        
        enum_info->value_from_mapping = 11;
        enum_info++;
        
        enum_info->value_from_mapping = dnx_data_mdb_app_db.fields.numeric_mdb_field___213_get(unit);
        enum_info++;
        
        enum_info->value_from_mapping = 9;
        enum_info++;
        
        enum_info->value_from_mapping = 8;
        enum_info++;
        
        enum_info->value_from_mapping = 10;
        enum_info++;
        
        enum_info->value_from_mapping = 4;
        enum_info++;
        
        enum_info->value_from_mapping = 6;
        enum_info++;
        
        enum_info->value_from_mapping = 33;
        enum_info++;
        
        enum_info->value_from_mapping = 43;
        enum_info++;
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_eedb_type_vsd_enable_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_EEDB_TYPE_VSD_ENABLE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "EEDB_TYPE_VSD_ENABLE" , dnx_data_pp.ETPP.etps_type_size_bits_get(unit) , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 7;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_ARP_AC", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_ARP_AC_1TAG_STAT", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_ARP_SA_CUSTOM", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_ARP_SA_TUNNELING", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_ETH_RIF", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_ETH_RIF_STAT", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    
    
    
    
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
        
        enum_info->value_from_mapping = 6;
        enum_info++;
        
        enum_info->value_from_mapping = 5;
        enum_info++;
        
        enum_info->value_from_mapping = 7;
        enum_info++;
        
        enum_info->value_from_mapping = dnx_data_mdb_app_db.fields.numeric_mdb_field___214_get(unit);
        enum_info++;
        
        enum_info->value_from_mapping = 3;
        enum_info++;
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_eedb_type_svtag_enable_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_EEDB_TYPE_SVTAG_ENABLE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "EEDB_TYPE_SVTAG_ENABLE" , dnx_data_pp.ETPP.etps_type_size_bits_get(unit) , is_valid , FALSE , DBAL_FIELD_PRINT_TYPE_ENUM , 0 , 1 , TRUE ));
    
    
    
    
    cur_field_type_param->nof_enum_vals = 2;
    
    sal_memset(cur_field_type_param->enums, 0x0, cur_field_type_param->nof_enum_vals * sizeof(dbal_db_enum_info_struct_t));
    {
        dbal_db_enum_info_struct_t * enum_info = cur_field_type_param->enums;
        sal_strncpy(enum_info->name_from_interface, "NONE", sizeof(enum_info->name_from_interface));
        enum_info++;
        sal_strncpy(enum_info->name_from_interface, "ETPS_SVTAG", sizeof(enum_info->name_from_interface));
        enum_info++;
    }
    
    
    
    
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
        
        enum_info->value_from_mapping = dnx_data_mdb_app_db.fields.numeric_mdb_field___215_get(unit);
        enum_info++;
    }
    
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    SHR_FUNC_INIT_VARS(unit);
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_egress_glem_formats_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_egress_ppmc_formats_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_egress_vsi_formats_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_etpp_etps_formats_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_irpp_fec_entry_format_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_irpp_fec_super_entry_format_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_irpp_fwd_stage_floating_formats_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_irpp_fwd_stage_formats_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_irpp_in_lif_formats_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_irpp_isem_access_formats_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_irpp_my_mac_exem_formats_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_irpp_vsi_formats_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_irpp_vtt_tcam_access_formats_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_oamp_formats_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_oam_classifier_formats_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_prt_vp_formats_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_tcam_identification_formats_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_eedb_type_em_buster_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_eedb_type_vsd_enable_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_field_types_auto_generated_standard_1_standard_1_arr_formats_enum_encoding_eedb_type_svtag_enable_init(unit, cur_field_type_param, field_types_info));
exit:
    SHR_FUNC_EXIT;
}
