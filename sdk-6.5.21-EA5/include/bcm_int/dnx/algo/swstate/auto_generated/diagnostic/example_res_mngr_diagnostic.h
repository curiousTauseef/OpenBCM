/** \file algo/swstate/auto_generated/diagnostic/example_res_mngr_diagnostic.h
 *
 * sw state functions declarations
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef __EXAMPLE_RES_MNGR_DIAGNOSTIC_H__
#define __EXAMPLE_RES_MNGR_DIAGNOSTIC_H__

#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnxc/swstate/dnx_sw_state_size.h>
#include <soc/dnxc/swstate/dnx_sw_state_diagnostic_operation_counters.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/example_res_mngr_types.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
typedef enum {
    ALGO_RES_MNGR_DB_INFO,
    ALGO_RES_MNGR_DB_RESOURCE_TEST_INPUT_VALID_CORE_ALL_INFO,
    ALGO_RES_MNGR_DB_RESOURCE_TEST_INPUT_VALID_PER_CORE_INFO,
    ALGO_RES_MNGR_DB_RESOURCE_TEST_INPUT_VALID_INDEXED_RESOURCE_INFO,
    ALGO_RES_MNGR_DB_RESOURCE_TEST_INPUT_VALID_INDEXED_RESOURCE_PER_CORE_INFO,
    ALGO_RES_MNGR_DB_RESOURCE_TEST_PER_CORE_INFO,
    ALGO_RES_MNGR_DB_RESOURCE_TEST_INVALID_INFO,
    ALGO_RES_MNGR_DB_RESOURCE_TEST_INDEXED_RESOURCE_INFO,
    ALGO_RES_MNGR_DB_RESOURCE_TEST_INDEXED_RESOURCE_PER_CORE_INFO,
    ALGO_RES_MNGR_DB_RESOURCE_TEST_CORE_ALL_INFO,
    ALGO_RES_MNGR_DB_INFO_NOF_ENTRIES
} sw_state_algo_res_mngr_db_layout_e;


extern dnx_sw_state_diagnostic_info_t algo_res_mngr_db_info[SOC_MAX_NUM_DEVICES][ALGO_RES_MNGR_DB_INFO_NOF_ENTRIES];

extern const char* algo_res_mngr_db_layout_str[ALGO_RES_MNGR_DB_INFO_NOF_ENTRIES];
int algo_res_mngr_db_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_res_mngr_db_resource_test_input_valid_core_all_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_res_mngr_db_resource_test_input_valid_per_core_dump(
    int unit, int resource_test_input_valid_per_core_idx_0, dnx_sw_state_dump_filters_t filters);

int algo_res_mngr_db_resource_test_input_valid_indexed_resource_dump(
    int unit, int resource_test_input_valid_indexed_resource_idx_0, dnx_sw_state_dump_filters_t filters);

int algo_res_mngr_db_resource_test_input_valid_indexed_resource_per_core_dump(
    int unit, int resource_test_input_valid_indexed_resource_per_core_idx_0, int resource_test_input_valid_indexed_resource_per_core_idx_1, dnx_sw_state_dump_filters_t filters);

int algo_res_mngr_db_resource_test_per_core_dump(
    int unit, int resource_test_per_core_idx_0, dnx_sw_state_dump_filters_t filters);

int algo_res_mngr_db_resource_test_invalid_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_res_mngr_db_resource_test_indexed_resource_dump(
    int unit, int resource_test_indexed_resource_idx_0, dnx_sw_state_dump_filters_t filters);

int algo_res_mngr_db_resource_test_indexed_resource_per_core_dump(
    int unit, int resource_test_indexed_resource_per_core_idx_0, int resource_test_indexed_resource_per_core_idx_1, dnx_sw_state_dump_filters_t filters);

int algo_res_mngr_db_resource_test_core_all_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __EXAMPLE_RES_MNGR_DIAGNOSTIC_H__ */
