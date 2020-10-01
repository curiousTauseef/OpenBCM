/** \file dnx/swstate/auto_generated/diagnostic/dnx_field_range_commandline.h
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

#ifndef __DNX_FIELD_RANGE_COMMANDLINE_H__
#define __DNX_FIELD_RANGE_COMMANDLINE_H__

#include <appl/diag/sand/diag_sand_framework.h>
#include <appl/diag/sand/diag_sand_utils.h>
#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnx/swstate/auto_generated/types/dnx_field_range_types.h>
#include <soc/dnx/swstate/auto_generated/types/dnx_field_types.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
shr_error_e sh_dnx_swstate_dnx_field_range_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_range_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_dump_man;
shr_error_e sh_dnx_swstate_dnx_field_range_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_range_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_size_get_man;
shr_error_e sh_dnx_swstate_dnx_field_range_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_range_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_diagnostic_operation_counters_man;
extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_range_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_man;
extern const char cmd_dnx_swstate_dnx_field_range_desc[];

extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_range_ext_l4_ops_range_types_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_range_types_man;
extern const char cmd_dnx_swstate_dnx_field_range_ext_l4_ops_range_types_desc[];
shr_error_e sh_dnx_swstate_dnx_field_range_ext_l4_ops_range_types_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_range_ext_l4_ops_range_types_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_range_types_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_range_ext_l4_ops_range_types_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_range_ext_l4_ops_range_types_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_range_types_size_get_man;


shr_error_e sh_dnx_swstate_dnx_field_range_ext_l4_ops_range_types_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_range_ext_l4_ops_range_types_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_range_types_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_man;
extern const char cmd_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_desc[];
shr_error_e sh_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_size_get_man;


shr_error_e sh_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_dnx_qual_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_dnx_qual_man;
extern const char cmd_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_dnx_qual_desc[];
shr_error_e sh_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_dnx_qual_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_dnx_qual_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_dnx_qual_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_dnx_qual_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_dnx_qual_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_dnx_qual_size_get_man;


shr_error_e sh_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_dnx_qual_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_dnx_qual_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_dnx_qual_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_man;
extern const char cmd_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_desc[];
shr_error_e sh_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_size_get_man;


shr_error_e sh_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_input_type_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_input_type_man;
extern const char cmd_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_input_type_desc[];
shr_error_e sh_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_input_type_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_input_type_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_input_type_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_input_type_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_input_type_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_input_type_size_get_man;


shr_error_e sh_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_input_type_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_input_type_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_input_type_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_input_arg_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_input_arg_man;
extern const char cmd_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_input_arg_desc[];
shr_error_e sh_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_input_arg_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_input_arg_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_input_arg_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_input_arg_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_input_arg_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_input_arg_size_get_man;


shr_error_e sh_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_input_arg_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_input_arg_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_input_arg_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_offset_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_offset_man;
extern const char cmd_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_offset_desc[];
shr_error_e sh_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_offset_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_offset_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_offset_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_offset_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_offset_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_offset_size_get_man;


shr_error_e sh_dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_offset_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_offset_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_range_ext_l4_ops_ffc_quals_qual_info_offset_diagnostic_operation_counters_man;


#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __DNX_FIELD_RANGE_COMMANDLINE_H__ */
