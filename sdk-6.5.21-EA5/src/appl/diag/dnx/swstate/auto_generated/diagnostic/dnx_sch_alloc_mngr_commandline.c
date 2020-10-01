/** \file dnx/swstate/auto_generated/diagnostic/dnx_sch_alloc_mngr_commandline.c
 *
 * sw state functions definitions
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

#ifdef BSL_LOG_MODULE
#error "BSL_LOG_MODULE redefined"
#endif
#define BSL_LOG_MODULE BSL_LS_SWSTATEDNX_GENERAL

#include <bcm_int/dnx/algo/swstate/auto_generated/diagnostic/dnx_sch_alloc_mngr_diagnostic.h>
#include "dnx_sch_alloc_mngr_commandline.h"
#include <bcm_int/dnx/algo/swstate/auto_generated/access/dnx_sch_alloc_mngr_access.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_device.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
sh_sand_cmd_t sh_dnx_swstate_dnx_sch_alloc_mngr_cmds[] = {
    {"sch_flow_alloc_mngr", NULL, sh_dnx_swstate_dnx_sch_alloc_mngr_sch_flow_alloc_mngr_cmds, NULL, &dnx_swstate_dnx_sch_alloc_mngr_sch_flow_alloc_mngr_man},
    {"interface", NULL, sh_dnx_swstate_dnx_sch_alloc_mngr_interface_cmds, NULL, &dnx_swstate_dnx_sch_alloc_mngr_interface_man},
    {"cl_class_alloc_mngr", NULL, sh_dnx_swstate_dnx_sch_alloc_mngr_cl_class_alloc_mngr_cmds, NULL, &dnx_swstate_dnx_sch_alloc_mngr_cl_class_alloc_mngr_man},
    {"dump", sh_dnx_swstate_dnx_sch_alloc_mngr_dump_cmd, NULL, dnx_swstate_dnx_sch_alloc_mngr_dump_options, &dnx_swstate_dnx_sch_alloc_mngr_dump_man},
    {"size_get", sh_dnx_swstate_dnx_sch_alloc_mngr_size_get_cmd, NULL, dnx_swstate_dnx_sch_alloc_mngr_size_get_options, &dnx_swstate_dnx_sch_alloc_mngr_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_dnx_sch_alloc_mngr_diagnostic_operation_counters_cmd, NULL, dnx_swstate_dnx_sch_alloc_mngr_diagnostic_operation_counters_options, &dnx_swstate_dnx_sch_alloc_mngr_diagnostic_operation_counters_man},
    {NULL}
};


shr_error_e sh_dnx_swstate_dnx_sch_alloc_mngr_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint8 is_init;
    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    sch_alloc_db.is_init(unit, &is_init);
    if (is_init) {
        SHR_IF_ERR_EXIT(sch_alloc_db_dump(unit, filters));
        if (!filters.nocontent)
        {
            dnx_sw_state_dump_detach_file(unit);
        }
    }
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_sch_alloc_mngr_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_sch_alloc_mngr_dump_man = {
    "swstate dnx_sch_alloc_mngr dump",
    "print the module's content",
    "swstate dnx_sch_alloc_mngr dump",
    "swstate dnx_sch_alloc_mngr dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_sch_alloc_mngr_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint32 size = 0;
    SHR_FUNC_INIT_VARS(unit);

    size = dnx_sw_state_info_size_get(sch_alloc_db_info[unit], sch_alloc_db_layout_str, SCH_ALLOC_DB_INFO_NOF_ENTRIES, "SCH_ALLOC_DB~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_sch_alloc_mngr_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_sch_alloc_mngr_size_get_man = {
    "swstate dnx_sch_alloc_mngr size_get",
    "print the module's size",
    "swstate dnx_sch_alloc_mngr size_get",
    "swstate dnx_sch_alloc_mngr size_get",
};


shr_error_e sh_dnx_swstate_dnx_sch_alloc_mngr_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{


    SHR_FUNC_INIT_VARS(unit);

    dnx_sw_state_diagnostic_operation_counters_print(sch_alloc_db_info[unit], sch_alloc_db_layout_str, SCH_ALLOC_DB_INFO_NOF_ENTRIES, "SCH_ALLOC_DB~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_sch_alloc_mngr_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_sch_alloc_mngr_diagnostic_operation_counters_man = {
    "swstate dnx_sch_alloc_mngr diagnostic_operation_counters",
    "print the module's diagnostic operation counters",
    "swstate dnx_sch_alloc_mngr diagnostic_operation_counters",
    "swstate dnx_sch_alloc_mngr diagnostic_operation_counters",
};


sh_sand_man_t dnx_swstate_dnx_sch_alloc_mngr_man = {
    cmd_dnx_swstate_dnx_sch_alloc_mngr_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_sch_alloc_mngr_desc[] = "swstate dnx_sch_alloc_mngr commands";



sh_sand_cmd_t sh_dnx_swstate_dnx_sch_alloc_mngr_sch_flow_alloc_mngr_cmds[] = {
    {"dump", sh_dnx_swstate_dnx_sch_alloc_mngr_sch_flow_alloc_mngr_dump_cmd, NULL, dnx_swstate_dnx_sch_alloc_mngr_sch_flow_alloc_mngr_dump_options, &dnx_swstate_dnx_sch_alloc_mngr_sch_flow_alloc_mngr_dump_man},
    {"size_get", sh_dnx_swstate_dnx_sch_alloc_mngr_sch_flow_alloc_mngr_size_get_cmd, NULL, dnx_swstate_dnx_sch_alloc_mngr_sch_flow_alloc_mngr_size_get_options, &dnx_swstate_dnx_sch_alloc_mngr_sch_flow_alloc_mngr_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_dnx_sch_alloc_mngr_sch_flow_alloc_mngr_diagnostic_operation_counters_cmd, NULL, dnx_swstate_dnx_sch_alloc_mngr_sch_flow_alloc_mngr_diagnostic_operation_counters_options, &dnx_swstate_dnx_sch_alloc_mngr_sch_flow_alloc_mngr_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_sch_alloc_mngr_sch_flow_alloc_mngr_man = {
    cmd_dnx_swstate_dnx_sch_alloc_mngr_sch_flow_alloc_mngr_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_sch_alloc_mngr_sch_flow_alloc_mngr_desc[] = "sch_alloc_db sch_flow_alloc_mngr commands";


shr_error_e sh_dnx_swstate_dnx_sch_alloc_mngr_sch_flow_alloc_mngr_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  sch_flow_alloc_mngr_idx_0 = 0;
    int  sch_flow_alloc_mngr_idx_1 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("sch_flow_alloc_mngr_idx_0", sch_flow_alloc_mngr_idx_0);
    SH_SAND_GET_INT32("sch_flow_alloc_mngr_idx_1", sch_flow_alloc_mngr_idx_1);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(sch_alloc_db_sch_flow_alloc_mngr_dump(unit, sch_flow_alloc_mngr_idx_0, sch_flow_alloc_mngr_idx_1, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_sch_alloc_mngr_sch_flow_alloc_mngr_dump_options[] = {
    {"sch_flow_alloc_mngr_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"sch_flow_alloc_mngr_idx_1", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_sch_alloc_mngr_sch_flow_alloc_mngr_dump_man = {
    "swstate dump",
    "print the variable value",
    "sch_alloc_db sch_flow_alloc_mngr dump [,sch_flow_alloc_mngr_idx_0=<int>,sch_flow_alloc_mngr_idx_1=<int>]\n",
    "sch_alloc_db sch_flow_alloc_mngr dump sch_flow_alloc_mngr_idx_0=0 sch_flow_alloc_mngr_idx_1=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_sch_alloc_mngr_sch_flow_alloc_mngr_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(sch_alloc_db_info[unit], sch_alloc_db_layout_str, SCH_ALLOC_DB_INFO_NOF_ENTRIES, "SCH_ALLOC_DB~SCH_FLOW_ALLOC_MNGR~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_sch_alloc_mngr_sch_flow_alloc_mngr_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_sch_alloc_mngr_sch_flow_alloc_mngr_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "sch_alloc_db sch_flow_alloc_mngr size_get",
    "sch_alloc_db sch_flow_alloc_mngr size_get",
};


shr_error_e sh_dnx_swstate_dnx_sch_alloc_mngr_sch_flow_alloc_mngr_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(sch_alloc_db_info[unit], sch_alloc_db_layout_str, SCH_ALLOC_DB_INFO_NOF_ENTRIES, "SCH_ALLOC_DB~SCH_FLOW_ALLOC_MNGR~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_sch_alloc_mngr_sch_flow_alloc_mngr_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_sch_alloc_mngr_sch_flow_alloc_mngr_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "sch_alloc_db sch_flow_alloc_mngr diagnostic_operation_counters",
    "sch_alloc_db sch_flow_alloc_mngr diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_dnx_sch_alloc_mngr_interface_cmds[] = {
    {"dump", sh_dnx_swstate_dnx_sch_alloc_mngr_interface_dump_cmd, NULL, dnx_swstate_dnx_sch_alloc_mngr_interface_dump_options, &dnx_swstate_dnx_sch_alloc_mngr_interface_dump_man},
    {"size_get", sh_dnx_swstate_dnx_sch_alloc_mngr_interface_size_get_cmd, NULL, dnx_swstate_dnx_sch_alloc_mngr_interface_size_get_options, &dnx_swstate_dnx_sch_alloc_mngr_interface_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_dnx_sch_alloc_mngr_interface_diagnostic_operation_counters_cmd, NULL, dnx_swstate_dnx_sch_alloc_mngr_interface_diagnostic_operation_counters_options, &dnx_swstate_dnx_sch_alloc_mngr_interface_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_sch_alloc_mngr_interface_man = {
    cmd_dnx_swstate_dnx_sch_alloc_mngr_interface_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_sch_alloc_mngr_interface_desc[] = "sch_alloc_db interface commands";


shr_error_e sh_dnx_swstate_dnx_sch_alloc_mngr_interface_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  interface_idx_0 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("interface_idx_0", interface_idx_0);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(sch_alloc_db_interface_dump(unit, interface_idx_0, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_sch_alloc_mngr_interface_dump_options[] = {
    {"interface_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_sch_alloc_mngr_interface_dump_man = {
    "swstate dump",
    "print the variable value",
    "sch_alloc_db interface dump [,interface_idx_0=<int>]\n",
    "sch_alloc_db interface dump interface_idx_0=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_sch_alloc_mngr_interface_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(sch_alloc_db_info[unit], sch_alloc_db_layout_str, SCH_ALLOC_DB_INFO_NOF_ENTRIES, "SCH_ALLOC_DB~INTERFACE~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_sch_alloc_mngr_interface_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_sch_alloc_mngr_interface_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "sch_alloc_db interface size_get",
    "sch_alloc_db interface size_get",
};


shr_error_e sh_dnx_swstate_dnx_sch_alloc_mngr_interface_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(sch_alloc_db_info[unit], sch_alloc_db_layout_str, SCH_ALLOC_DB_INFO_NOF_ENTRIES, "SCH_ALLOC_DB~INTERFACE~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_sch_alloc_mngr_interface_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_sch_alloc_mngr_interface_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "sch_alloc_db interface diagnostic_operation_counters",
    "sch_alloc_db interface diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_dnx_sch_alloc_mngr_cl_class_alloc_mngr_cmds[] = {
    {"dump", sh_dnx_swstate_dnx_sch_alloc_mngr_cl_class_alloc_mngr_dump_cmd, NULL, dnx_swstate_dnx_sch_alloc_mngr_cl_class_alloc_mngr_dump_options, &dnx_swstate_dnx_sch_alloc_mngr_cl_class_alloc_mngr_dump_man},
    {"size_get", sh_dnx_swstate_dnx_sch_alloc_mngr_cl_class_alloc_mngr_size_get_cmd, NULL, dnx_swstate_dnx_sch_alloc_mngr_cl_class_alloc_mngr_size_get_options, &dnx_swstate_dnx_sch_alloc_mngr_cl_class_alloc_mngr_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_dnx_sch_alloc_mngr_cl_class_alloc_mngr_diagnostic_operation_counters_cmd, NULL, dnx_swstate_dnx_sch_alloc_mngr_cl_class_alloc_mngr_diagnostic_operation_counters_options, &dnx_swstate_dnx_sch_alloc_mngr_cl_class_alloc_mngr_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_sch_alloc_mngr_cl_class_alloc_mngr_man = {
    cmd_dnx_swstate_dnx_sch_alloc_mngr_cl_class_alloc_mngr_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_sch_alloc_mngr_cl_class_alloc_mngr_desc[] = "sch_alloc_db cl_class_alloc_mngr commands";


shr_error_e sh_dnx_swstate_dnx_sch_alloc_mngr_cl_class_alloc_mngr_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  cl_class_alloc_mngr_idx_0 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("cl_class_alloc_mngr_idx_0", cl_class_alloc_mngr_idx_0);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(sch_alloc_db_cl_class_alloc_mngr_dump(unit, cl_class_alloc_mngr_idx_0, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_sch_alloc_mngr_cl_class_alloc_mngr_dump_options[] = {
    {"cl_class_alloc_mngr_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_sch_alloc_mngr_cl_class_alloc_mngr_dump_man = {
    "swstate dump",
    "print the variable value",
    "sch_alloc_db cl_class_alloc_mngr dump [,cl_class_alloc_mngr_idx_0=<int>]\n",
    "sch_alloc_db cl_class_alloc_mngr dump cl_class_alloc_mngr_idx_0=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_sch_alloc_mngr_cl_class_alloc_mngr_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(sch_alloc_db_info[unit], sch_alloc_db_layout_str, SCH_ALLOC_DB_INFO_NOF_ENTRIES, "SCH_ALLOC_DB~CL_CLASS_ALLOC_MNGR~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_sch_alloc_mngr_cl_class_alloc_mngr_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_sch_alloc_mngr_cl_class_alloc_mngr_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "sch_alloc_db cl_class_alloc_mngr size_get",
    "sch_alloc_db cl_class_alloc_mngr size_get",
};


shr_error_e sh_dnx_swstate_dnx_sch_alloc_mngr_cl_class_alloc_mngr_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(sch_alloc_db_info[unit], sch_alloc_db_layout_str, SCH_ALLOC_DB_INFO_NOF_ENTRIES, "SCH_ALLOC_DB~CL_CLASS_ALLOC_MNGR~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_sch_alloc_mngr_cl_class_alloc_mngr_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_sch_alloc_mngr_cl_class_alloc_mngr_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "sch_alloc_db cl_class_alloc_mngr diagnostic_operation_counters",
    "sch_alloc_db cl_class_alloc_mngr diagnostic_operation_counters",
};


#endif /* DNX_SW_STATE_DIAGNOSTIC */
#undef BSL_LOG_MODULE
