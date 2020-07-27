/** \file dnxf/swstate/auto_generated/diagnostic/dnxf_commandline.h
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

#ifndef __DNXF_COMMANDLINE_H__
#define __DNXF_COMMANDLINE_H__

#include <appl/diag/sand/diag_sand_framework.h>
#include <appl/diag/sand/diag_sand_utils.h>
#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnxf/swstate/auto_generated/types/dnxf_types.h>
#include <soc/dnxc/swstate/types/sw_state_bitmap.h>
#include <soc/types.h>
#include <soc/dnxc/swstate/auto_generated/types/dnxc_types.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
shr_error_e sh_dnx_swstate_dnxf_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_dump_man;
shr_error_e sh_dnx_swstate_dnxf_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_size_get_man;
shr_error_e sh_dnx_swstate_dnxf_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_diagnostic_operation_counters_man;
extern sh_sand_cmd_t sh_dnx_swstate_dnxf_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_man;
extern const char cmd_dnx_swstate_dnxf_desc[];

extern sh_sand_cmd_t sh_dnx_swstate_dnxf_modid_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_man;
extern const char cmd_dnx_swstate_dnxf_modid_desc[];
shr_error_e sh_dnx_swstate_dnxf_modid_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_modid_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_dump_man;


shr_error_e sh_dnx_swstate_dnxf_modid_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_modid_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_modid_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_modid_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_modid_local_map_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_local_map_man;
extern const char cmd_dnx_swstate_dnxf_modid_local_map_desc[];
shr_error_e sh_dnx_swstate_dnxf_modid_local_map_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_modid_local_map_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_local_map_dump_man;


shr_error_e sh_dnx_swstate_dnxf_modid_local_map_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_modid_local_map_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_local_map_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_modid_local_map_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_modid_local_map_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_local_map_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_modid_local_map_valid_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_local_map_valid_man;
extern const char cmd_dnx_swstate_dnxf_modid_local_map_valid_desc[];
shr_error_e sh_dnx_swstate_dnxf_modid_local_map_valid_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_modid_local_map_valid_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_local_map_valid_dump_man;


shr_error_e sh_dnx_swstate_dnxf_modid_local_map_valid_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_modid_local_map_valid_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_local_map_valid_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_modid_local_map_valid_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_modid_local_map_valid_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_local_map_valid_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_modid_local_map_module_id_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_local_map_module_id_man;
extern const char cmd_dnx_swstate_dnxf_modid_local_map_module_id_desc[];
shr_error_e sh_dnx_swstate_dnxf_modid_local_map_module_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_modid_local_map_module_id_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_local_map_module_id_dump_man;


shr_error_e sh_dnx_swstate_dnxf_modid_local_map_module_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_modid_local_map_module_id_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_local_map_module_id_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_modid_local_map_module_id_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_modid_local_map_module_id_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_local_map_module_id_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_modid_group_map_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_group_map_man;
extern const char cmd_dnx_swstate_dnxf_modid_group_map_desc[];
shr_error_e sh_dnx_swstate_dnxf_modid_group_map_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_modid_group_map_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_group_map_dump_man;


shr_error_e sh_dnx_swstate_dnxf_modid_group_map_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_modid_group_map_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_group_map_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_modid_group_map_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_modid_group_map_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_group_map_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_modid_group_map_raw_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_group_map_raw_man;
extern const char cmd_dnx_swstate_dnxf_modid_group_map_raw_desc[];
shr_error_e sh_dnx_swstate_dnxf_modid_group_map_raw_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_modid_group_map_raw_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_group_map_raw_dump_man;


shr_error_e sh_dnx_swstate_dnxf_modid_group_map_raw_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_modid_group_map_raw_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_group_map_raw_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_modid_group_map_raw_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_modid_group_map_raw_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_group_map_raw_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_modid_modid_to_group_map_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_modid_to_group_map_man;
extern const char cmd_dnx_swstate_dnxf_modid_modid_to_group_map_desc[];
shr_error_e sh_dnx_swstate_dnxf_modid_modid_to_group_map_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_modid_modid_to_group_map_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_modid_to_group_map_dump_man;


shr_error_e sh_dnx_swstate_dnxf_modid_modid_to_group_map_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_modid_modid_to_group_map_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_modid_to_group_map_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_modid_modid_to_group_map_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_modid_modid_to_group_map_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_modid_modid_to_group_map_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_mc_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_mc_man;
extern const char cmd_dnx_swstate_dnxf_mc_desc[];
shr_error_e sh_dnx_swstate_dnxf_mc_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_mc_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_mc_dump_man;


shr_error_e sh_dnx_swstate_dnxf_mc_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_mc_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_mc_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_mc_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_mc_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_mc_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_mc_mode_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_mc_mode_man;
extern const char cmd_dnx_swstate_dnxf_mc_mode_desc[];
shr_error_e sh_dnx_swstate_dnxf_mc_mode_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_mc_mode_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_mc_mode_dump_man;


shr_error_e sh_dnx_swstate_dnxf_mc_mode_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_mc_mode_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_mc_mode_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_mc_mode_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_mc_mode_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_mc_mode_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_mc_id_map_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_mc_id_map_man;
extern const char cmd_dnx_swstate_dnxf_mc_id_map_desc[];
shr_error_e sh_dnx_swstate_dnxf_mc_id_map_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_mc_id_map_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_mc_id_map_dump_man;


shr_error_e sh_dnx_swstate_dnxf_mc_id_map_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_mc_id_map_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_mc_id_map_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_mc_id_map_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_mc_id_map_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_mc_id_map_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_mc_nof_mc_groups_created_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_mc_nof_mc_groups_created_man;
extern const char cmd_dnx_swstate_dnxf_mc_nof_mc_groups_created_desc[];
shr_error_e sh_dnx_swstate_dnxf_mc_nof_mc_groups_created_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_mc_nof_mc_groups_created_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_mc_nof_mc_groups_created_dump_man;


shr_error_e sh_dnx_swstate_dnxf_mc_nof_mc_groups_created_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_mc_nof_mc_groups_created_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_mc_nof_mc_groups_created_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_mc_nof_mc_groups_created_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_mc_nof_mc_groups_created_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_mc_nof_mc_groups_created_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_lb_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_lb_man;
extern const char cmd_dnx_swstate_dnxf_lb_desc[];
shr_error_e sh_dnx_swstate_dnxf_lb_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lb_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lb_dump_man;


shr_error_e sh_dnx_swstate_dnxf_lb_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lb_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lb_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_lb_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lb_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lb_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_lb_group_to_first_link_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_lb_group_to_first_link_man;
extern const char cmd_dnx_swstate_dnxf_lb_group_to_first_link_desc[];
shr_error_e sh_dnx_swstate_dnxf_lb_group_to_first_link_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lb_group_to_first_link_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lb_group_to_first_link_dump_man;


shr_error_e sh_dnx_swstate_dnxf_lb_group_to_first_link_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lb_group_to_first_link_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lb_group_to_first_link_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_lb_group_to_first_link_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lb_group_to_first_link_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lb_group_to_first_link_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_port_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_port_man;
extern const char cmd_dnx_swstate_dnxf_port_desc[];
shr_error_e sh_dnx_swstate_dnxf_port_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_port_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_port_dump_man;


shr_error_e sh_dnx_swstate_dnxf_port_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_port_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_port_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_port_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_port_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_port_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_port_cl72_conf_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_port_cl72_conf_man;
extern const char cmd_dnx_swstate_dnxf_port_cl72_conf_desc[];
shr_error_e sh_dnx_swstate_dnxf_port_cl72_conf_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_port_cl72_conf_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_port_cl72_conf_dump_man;


shr_error_e sh_dnx_swstate_dnxf_port_cl72_conf_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_port_cl72_conf_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_port_cl72_conf_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_port_cl72_conf_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_port_cl72_conf_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_port_cl72_conf_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_port_phy_lane_config_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_port_phy_lane_config_man;
extern const char cmd_dnx_swstate_dnxf_port_phy_lane_config_desc[];
shr_error_e sh_dnx_swstate_dnxf_port_phy_lane_config_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_port_phy_lane_config_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_port_phy_lane_config_dump_man;


shr_error_e sh_dnx_swstate_dnxf_port_phy_lane_config_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_port_phy_lane_config_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_port_phy_lane_config_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_port_phy_lane_config_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_port_phy_lane_config_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_port_phy_lane_config_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_port_is_connected_to_repeater_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_port_is_connected_to_repeater_man;
extern const char cmd_dnx_swstate_dnxf_port_is_connected_to_repeater_desc[];
shr_error_e sh_dnx_swstate_dnxf_port_is_connected_to_repeater_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_port_is_connected_to_repeater_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_port_is_connected_to_repeater_dump_man;


shr_error_e sh_dnx_swstate_dnxf_port_is_connected_to_repeater_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_port_is_connected_to_repeater_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_port_is_connected_to_repeater_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_port_is_connected_to_repeater_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_port_is_connected_to_repeater_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_port_is_connected_to_repeater_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_port_isolation_status_stored_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_port_isolation_status_stored_man;
extern const char cmd_dnx_swstate_dnxf_port_isolation_status_stored_desc[];
shr_error_e sh_dnx_swstate_dnxf_port_isolation_status_stored_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_port_isolation_status_stored_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_port_isolation_status_stored_dump_man;


shr_error_e sh_dnx_swstate_dnxf_port_isolation_status_stored_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_port_isolation_status_stored_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_port_isolation_status_stored_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_port_isolation_status_stored_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_port_isolation_status_stored_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_port_isolation_status_stored_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_port_orig_isolated_status_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_port_orig_isolated_status_man;
extern const char cmd_dnx_swstate_dnxf_port_orig_isolated_status_desc[];
shr_error_e sh_dnx_swstate_dnxf_port_orig_isolated_status_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_port_orig_isolated_status_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_port_orig_isolated_status_dump_man;


shr_error_e sh_dnx_swstate_dnxf_port_orig_isolated_status_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_port_orig_isolated_status_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_port_orig_isolated_status_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_port_orig_isolated_status_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_port_orig_isolated_status_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_port_orig_isolated_status_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_intr_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_intr_man;
extern const char cmd_dnx_swstate_dnxf_intr_desc[];
shr_error_e sh_dnx_swstate_dnxf_intr_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_intr_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_intr_dump_man;


shr_error_e sh_dnx_swstate_dnxf_intr_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_intr_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_intr_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_intr_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_intr_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_intr_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_intr_flags_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_intr_flags_man;
extern const char cmd_dnx_swstate_dnxf_intr_flags_desc[];
shr_error_e sh_dnx_swstate_dnxf_intr_flags_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_intr_flags_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_intr_flags_dump_man;


shr_error_e sh_dnx_swstate_dnxf_intr_flags_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_intr_flags_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_intr_flags_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_intr_flags_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_intr_flags_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_intr_flags_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_intr_storm_timed_count_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_intr_storm_timed_count_man;
extern const char cmd_dnx_swstate_dnxf_intr_storm_timed_count_desc[];
shr_error_e sh_dnx_swstate_dnxf_intr_storm_timed_count_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_intr_storm_timed_count_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_intr_storm_timed_count_dump_man;


shr_error_e sh_dnx_swstate_dnxf_intr_storm_timed_count_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_intr_storm_timed_count_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_intr_storm_timed_count_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_intr_storm_timed_count_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_intr_storm_timed_count_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_intr_storm_timed_count_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_intr_storm_timed_period_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_intr_storm_timed_period_man;
extern const char cmd_dnx_swstate_dnxf_intr_storm_timed_period_desc[];
shr_error_e sh_dnx_swstate_dnxf_intr_storm_timed_period_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_intr_storm_timed_period_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_intr_storm_timed_period_dump_man;


shr_error_e sh_dnx_swstate_dnxf_intr_storm_timed_period_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_intr_storm_timed_period_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_intr_storm_timed_period_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_intr_storm_timed_period_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_intr_storm_timed_period_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_intr_storm_timed_period_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_intr_storm_nominal_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_intr_storm_nominal_man;
extern const char cmd_dnx_swstate_dnxf_intr_storm_nominal_desc[];
shr_error_e sh_dnx_swstate_dnxf_intr_storm_nominal_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_intr_storm_nominal_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_intr_storm_nominal_dump_man;


shr_error_e sh_dnx_swstate_dnxf_intr_storm_nominal_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_intr_storm_nominal_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_intr_storm_nominal_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_intr_storm_nominal_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_intr_storm_nominal_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_intr_storm_nominal_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_lane_map_db_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_man;
extern const char cmd_dnx_swstate_dnxf_lane_map_db_desc[];
shr_error_e sh_dnx_swstate_dnxf_lane_map_db_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lane_map_db_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_dump_man;


shr_error_e sh_dnx_swstate_dnxf_lane_map_db_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lane_map_db_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_lane_map_db_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lane_map_db_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_lane_map_db_map_size_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_map_size_man;
extern const char cmd_dnx_swstate_dnxf_lane_map_db_map_size_desc[];
shr_error_e sh_dnx_swstate_dnxf_lane_map_db_map_size_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lane_map_db_map_size_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_map_size_dump_man;


shr_error_e sh_dnx_swstate_dnxf_lane_map_db_map_size_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lane_map_db_map_size_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_map_size_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_lane_map_db_map_size_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lane_map_db_map_size_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_map_size_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_lane_map_db_lane2serdes_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_lane2serdes_man;
extern const char cmd_dnx_swstate_dnxf_lane_map_db_lane2serdes_desc[];
shr_error_e sh_dnx_swstate_dnxf_lane_map_db_lane2serdes_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lane_map_db_lane2serdes_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_lane2serdes_dump_man;


shr_error_e sh_dnx_swstate_dnxf_lane_map_db_lane2serdes_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lane_map_db_lane2serdes_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_lane2serdes_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_lane_map_db_lane2serdes_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lane_map_db_lane2serdes_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_lane2serdes_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_lane_map_db_lane2serdes_rx_id_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_lane2serdes_rx_id_man;
extern const char cmd_dnx_swstate_dnxf_lane_map_db_lane2serdes_rx_id_desc[];
shr_error_e sh_dnx_swstate_dnxf_lane_map_db_lane2serdes_rx_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lane_map_db_lane2serdes_rx_id_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_lane2serdes_rx_id_dump_man;


shr_error_e sh_dnx_swstate_dnxf_lane_map_db_lane2serdes_rx_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lane_map_db_lane2serdes_rx_id_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_lane2serdes_rx_id_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_lane_map_db_lane2serdes_rx_id_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lane_map_db_lane2serdes_rx_id_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_lane2serdes_rx_id_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_lane_map_db_lane2serdes_tx_id_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_lane2serdes_tx_id_man;
extern const char cmd_dnx_swstate_dnxf_lane_map_db_lane2serdes_tx_id_desc[];
shr_error_e sh_dnx_swstate_dnxf_lane_map_db_lane2serdes_tx_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lane_map_db_lane2serdes_tx_id_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_lane2serdes_tx_id_dump_man;


shr_error_e sh_dnx_swstate_dnxf_lane_map_db_lane2serdes_tx_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lane_map_db_lane2serdes_tx_id_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_lane2serdes_tx_id_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_lane_map_db_lane2serdes_tx_id_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lane_map_db_lane2serdes_tx_id_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_lane2serdes_tx_id_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_lane_map_db_serdes2lane_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_serdes2lane_man;
extern const char cmd_dnx_swstate_dnxf_lane_map_db_serdes2lane_desc[];
shr_error_e sh_dnx_swstate_dnxf_lane_map_db_serdes2lane_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lane_map_db_serdes2lane_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_serdes2lane_dump_man;


shr_error_e sh_dnx_swstate_dnxf_lane_map_db_serdes2lane_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lane_map_db_serdes2lane_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_serdes2lane_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_lane_map_db_serdes2lane_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lane_map_db_serdes2lane_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_serdes2lane_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_lane_map_db_serdes2lane_rx_id_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_serdes2lane_rx_id_man;
extern const char cmd_dnx_swstate_dnxf_lane_map_db_serdes2lane_rx_id_desc[];
shr_error_e sh_dnx_swstate_dnxf_lane_map_db_serdes2lane_rx_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lane_map_db_serdes2lane_rx_id_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_serdes2lane_rx_id_dump_man;


shr_error_e sh_dnx_swstate_dnxf_lane_map_db_serdes2lane_rx_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lane_map_db_serdes2lane_rx_id_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_serdes2lane_rx_id_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_lane_map_db_serdes2lane_rx_id_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lane_map_db_serdes2lane_rx_id_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_serdes2lane_rx_id_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_lane_map_db_serdes2lane_tx_id_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_serdes2lane_tx_id_man;
extern const char cmd_dnx_swstate_dnxf_lane_map_db_serdes2lane_tx_id_desc[];
shr_error_e sh_dnx_swstate_dnxf_lane_map_db_serdes2lane_tx_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lane_map_db_serdes2lane_tx_id_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_serdes2lane_tx_id_dump_man;


shr_error_e sh_dnx_swstate_dnxf_lane_map_db_serdes2lane_tx_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lane_map_db_serdes2lane_tx_id_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_serdes2lane_tx_id_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_lane_map_db_serdes2lane_tx_id_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_lane_map_db_serdes2lane_tx_id_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_lane_map_db_serdes2lane_tx_id_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_synce_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_synce_man;
extern const char cmd_dnx_swstate_dnxf_synce_desc[];
shr_error_e sh_dnx_swstate_dnxf_synce_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_synce_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_synce_dump_man;


shr_error_e sh_dnx_swstate_dnxf_synce_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_synce_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_synce_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_synce_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_synce_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_synce_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_synce_master_synce_enabled_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_synce_master_synce_enabled_man;
extern const char cmd_dnx_swstate_dnxf_synce_master_synce_enabled_desc[];
shr_error_e sh_dnx_swstate_dnxf_synce_master_synce_enabled_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_synce_master_synce_enabled_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_synce_master_synce_enabled_dump_man;


shr_error_e sh_dnx_swstate_dnxf_synce_master_synce_enabled_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_synce_master_synce_enabled_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_synce_master_synce_enabled_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_synce_master_synce_enabled_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_synce_master_synce_enabled_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_synce_master_synce_enabled_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnxf_synce_slave_synce_enabled_cmds[];
extern sh_sand_man_t dnx_swstate_dnxf_synce_slave_synce_enabled_man;
extern const char cmd_dnx_swstate_dnxf_synce_slave_synce_enabled_desc[];
shr_error_e sh_dnx_swstate_dnxf_synce_slave_synce_enabled_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_synce_slave_synce_enabled_dump_options[];
extern sh_sand_man_t dnx_swstate_dnxf_synce_slave_synce_enabled_dump_man;


shr_error_e sh_dnx_swstate_dnxf_synce_slave_synce_enabled_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_synce_slave_synce_enabled_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnxf_synce_slave_synce_enabled_size_get_man;


shr_error_e sh_dnx_swstate_dnxf_synce_slave_synce_enabled_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnxf_synce_slave_synce_enabled_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnxf_synce_slave_synce_enabled_diagnostic_operation_counters_man;


#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __DNXF_COMMANDLINE_H__ */