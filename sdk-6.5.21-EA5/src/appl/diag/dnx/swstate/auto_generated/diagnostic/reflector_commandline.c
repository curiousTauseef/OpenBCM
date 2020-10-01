/** \file dnx/swstate/auto_generated/diagnostic/reflector_commandline.c
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

#include <soc/dnx/swstate/auto_generated/diagnostic/reflector_diagnostic.h>
#include "reflector_commandline.h"
#include <soc/dnx/swstate/auto_generated/access/reflector_access.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
sh_sand_cmd_t sh_dnx_swstate_reflector_cmds[] = {
    {"uc", NULL, sh_dnx_swstate_reflector_uc_cmds, NULL, &dnx_swstate_reflector_uc_man},
    {"sbfd_reflector_cnt", NULL, sh_dnx_swstate_reflector_sbfd_reflector_cnt_cmds, NULL, &dnx_swstate_reflector_sbfd_reflector_cnt_man},
    {"dump", sh_dnx_swstate_reflector_dump_cmd, NULL, dnx_swstate_reflector_dump_options, &dnx_swstate_reflector_dump_man},
    {"size_get", sh_dnx_swstate_reflector_size_get_cmd, NULL, dnx_swstate_reflector_size_get_options, &dnx_swstate_reflector_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_reflector_diagnostic_operation_counters_cmd, NULL, dnx_swstate_reflector_diagnostic_operation_counters_options, &dnx_swstate_reflector_diagnostic_operation_counters_man},
    {NULL}
};


shr_error_e sh_dnx_swstate_reflector_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint8 is_init;
    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    reflector_sw_db_info.is_init(unit, &is_init);
    if (is_init) {
        SHR_IF_ERR_EXIT(reflector_sw_db_info_dump(unit, filters));
        if (!filters.nocontent)
        {
            dnx_sw_state_dump_detach_file(unit);
        }
    }
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_reflector_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_reflector_dump_man = {
    "swstate reflector dump",
    "print the module's content",
    "swstate reflector dump",
    "swstate reflector dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_reflector_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint32 size = 0;
    SHR_FUNC_INIT_VARS(unit);

    size = dnx_sw_state_info_size_get(reflector_sw_db_info_info[unit], reflector_sw_db_info_layout_str, REFLECTOR_SW_DB_INFO_INFO_NOF_ENTRIES, "REFLECTOR_SW_DB_INFO~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_reflector_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_reflector_size_get_man = {
    "swstate reflector size_get",
    "print the module's size",
    "swstate reflector size_get",
    "swstate reflector size_get",
};


shr_error_e sh_dnx_swstate_reflector_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{


    SHR_FUNC_INIT_VARS(unit);

    dnx_sw_state_diagnostic_operation_counters_print(reflector_sw_db_info_info[unit], reflector_sw_db_info_layout_str, REFLECTOR_SW_DB_INFO_INFO_NOF_ENTRIES, "REFLECTOR_SW_DB_INFO~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_reflector_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_reflector_diagnostic_operation_counters_man = {
    "swstate reflector diagnostic_operation_counters",
    "print the module's diagnostic operation counters",
    "swstate reflector diagnostic_operation_counters",
    "swstate reflector diagnostic_operation_counters",
};


sh_sand_man_t dnx_swstate_reflector_man = {
    cmd_dnx_swstate_reflector_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_reflector_desc[] = "swstate reflector commands";



sh_sand_cmd_t sh_dnx_swstate_reflector_uc_cmds[] = {
    {"encap_id", NULL, sh_dnx_swstate_reflector_uc_encap_id_cmds, NULL, &dnx_swstate_reflector_uc_encap_id_man},
    {"is_allocated", NULL, sh_dnx_swstate_reflector_uc_is_allocated_cmds, NULL, &dnx_swstate_reflector_uc_is_allocated_man},
    {"dump", sh_dnx_swstate_reflector_uc_dump_cmd, NULL, dnx_swstate_reflector_uc_dump_options, &dnx_swstate_reflector_uc_dump_man},
    {"size_get", sh_dnx_swstate_reflector_uc_size_get_cmd, NULL, dnx_swstate_reflector_uc_size_get_options, &dnx_swstate_reflector_uc_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_reflector_uc_diagnostic_operation_counters_cmd, NULL, dnx_swstate_reflector_uc_diagnostic_operation_counters_options, &dnx_swstate_reflector_uc_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_reflector_uc_man = {
    cmd_dnx_swstate_reflector_uc_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_reflector_uc_desc[] = "reflector_sw_db_info uc commands";


shr_error_e sh_dnx_swstate_reflector_uc_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(reflector_sw_db_info_uc_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_reflector_uc_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_reflector_uc_dump_man = {
    "swstate dump",
    "print the variable value",
    "reflector_sw_db_info uc dump []\n",
    "reflector_sw_db_info uc dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_reflector_uc_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(reflector_sw_db_info_info[unit], reflector_sw_db_info_layout_str, REFLECTOR_SW_DB_INFO_INFO_NOF_ENTRIES, "REFLECTOR_SW_DB_INFO~UC~", sizeof(((reflector_sw_db_info_t*)sw_state_roots_array[unit][REFLECTOR_MODULE_ID])->uc));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_reflector_uc_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_reflector_uc_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "reflector_sw_db_info uc size_get",
    "reflector_sw_db_info uc size_get",
};


shr_error_e sh_dnx_swstate_reflector_uc_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(reflector_sw_db_info_info[unit], reflector_sw_db_info_layout_str, REFLECTOR_SW_DB_INFO_INFO_NOF_ENTRIES, "REFLECTOR_SW_DB_INFO~UC~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_reflector_uc_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_reflector_uc_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "reflector_sw_db_info uc diagnostic_operation_counters",
    "reflector_sw_db_info uc diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_reflector_uc_encap_id_cmds[] = {
    {"dump", sh_dnx_swstate_reflector_uc_encap_id_dump_cmd, NULL, dnx_swstate_reflector_uc_encap_id_dump_options, &dnx_swstate_reflector_uc_encap_id_dump_man},
    {"size_get", sh_dnx_swstate_reflector_uc_encap_id_size_get_cmd, NULL, dnx_swstate_reflector_uc_encap_id_size_get_options, &dnx_swstate_reflector_uc_encap_id_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_reflector_uc_encap_id_diagnostic_operation_counters_cmd, NULL, dnx_swstate_reflector_uc_encap_id_diagnostic_operation_counters_options, &dnx_swstate_reflector_uc_encap_id_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_reflector_uc_encap_id_man = {
    cmd_dnx_swstate_reflector_uc_encap_id_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_reflector_uc_encap_id_desc[] = "reflector_sw_db_info uc encap_id commands";


shr_error_e sh_dnx_swstate_reflector_uc_encap_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(reflector_sw_db_info_uc_encap_id_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_reflector_uc_encap_id_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_reflector_uc_encap_id_dump_man = {
    "swstate dump",
    "print the variable value",
    "reflector_sw_db_info uc encap_id dump []\n",
    "reflector_sw_db_info uc encap_id dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_reflector_uc_encap_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(reflector_sw_db_info_info[unit], reflector_sw_db_info_layout_str, REFLECTOR_SW_DB_INFO_INFO_NOF_ENTRIES, "REFLECTOR_SW_DB_INFO~UC~ENCAP_ID~", sizeof(((reflector_sw_db_info_t*)sw_state_roots_array[unit][REFLECTOR_MODULE_ID])->uc.encap_id));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_reflector_uc_encap_id_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_reflector_uc_encap_id_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "reflector_sw_db_info uc encap_id size_get",
    "reflector_sw_db_info uc encap_id size_get",
};


shr_error_e sh_dnx_swstate_reflector_uc_encap_id_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(reflector_sw_db_info_info[unit], reflector_sw_db_info_layout_str, REFLECTOR_SW_DB_INFO_INFO_NOF_ENTRIES, "REFLECTOR_SW_DB_INFO~UC~ENCAP_ID~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_reflector_uc_encap_id_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_reflector_uc_encap_id_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "reflector_sw_db_info uc encap_id diagnostic_operation_counters",
    "reflector_sw_db_info uc encap_id diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_reflector_uc_is_allocated_cmds[] = {
    {"dump", sh_dnx_swstate_reflector_uc_is_allocated_dump_cmd, NULL, dnx_swstate_reflector_uc_is_allocated_dump_options, &dnx_swstate_reflector_uc_is_allocated_dump_man},
    {"size_get", sh_dnx_swstate_reflector_uc_is_allocated_size_get_cmd, NULL, dnx_swstate_reflector_uc_is_allocated_size_get_options, &dnx_swstate_reflector_uc_is_allocated_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_reflector_uc_is_allocated_diagnostic_operation_counters_cmd, NULL, dnx_swstate_reflector_uc_is_allocated_diagnostic_operation_counters_options, &dnx_swstate_reflector_uc_is_allocated_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_reflector_uc_is_allocated_man = {
    cmd_dnx_swstate_reflector_uc_is_allocated_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_reflector_uc_is_allocated_desc[] = "reflector_sw_db_info uc is_allocated commands";


shr_error_e sh_dnx_swstate_reflector_uc_is_allocated_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(reflector_sw_db_info_uc_is_allocated_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_reflector_uc_is_allocated_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_reflector_uc_is_allocated_dump_man = {
    "swstate dump",
    "print the variable value",
    "reflector_sw_db_info uc is_allocated dump []\n",
    "reflector_sw_db_info uc is_allocated dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_reflector_uc_is_allocated_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(reflector_sw_db_info_info[unit], reflector_sw_db_info_layout_str, REFLECTOR_SW_DB_INFO_INFO_NOF_ENTRIES, "REFLECTOR_SW_DB_INFO~UC~IS_ALLOCATED~", sizeof(((reflector_sw_db_info_t*)sw_state_roots_array[unit][REFLECTOR_MODULE_ID])->uc.is_allocated));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_reflector_uc_is_allocated_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_reflector_uc_is_allocated_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "reflector_sw_db_info uc is_allocated size_get",
    "reflector_sw_db_info uc is_allocated size_get",
};


shr_error_e sh_dnx_swstate_reflector_uc_is_allocated_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(reflector_sw_db_info_info[unit], reflector_sw_db_info_layout_str, REFLECTOR_SW_DB_INFO_INFO_NOF_ENTRIES, "REFLECTOR_SW_DB_INFO~UC~IS_ALLOCATED~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_reflector_uc_is_allocated_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_reflector_uc_is_allocated_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "reflector_sw_db_info uc is_allocated diagnostic_operation_counters",
    "reflector_sw_db_info uc is_allocated diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_reflector_sbfd_reflector_cnt_cmds[] = {
    {"dump", sh_dnx_swstate_reflector_sbfd_reflector_cnt_dump_cmd, NULL, dnx_swstate_reflector_sbfd_reflector_cnt_dump_options, &dnx_swstate_reflector_sbfd_reflector_cnt_dump_man},
    {"size_get", sh_dnx_swstate_reflector_sbfd_reflector_cnt_size_get_cmd, NULL, dnx_swstate_reflector_sbfd_reflector_cnt_size_get_options, &dnx_swstate_reflector_sbfd_reflector_cnt_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_reflector_sbfd_reflector_cnt_diagnostic_operation_counters_cmd, NULL, dnx_swstate_reflector_sbfd_reflector_cnt_diagnostic_operation_counters_options, &dnx_swstate_reflector_sbfd_reflector_cnt_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_reflector_sbfd_reflector_cnt_man = {
    cmd_dnx_swstate_reflector_sbfd_reflector_cnt_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_reflector_sbfd_reflector_cnt_desc[] = "reflector_sw_db_info sbfd_reflector_cnt commands";


shr_error_e sh_dnx_swstate_reflector_sbfd_reflector_cnt_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(reflector_sw_db_info_sbfd_reflector_cnt_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_reflector_sbfd_reflector_cnt_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_reflector_sbfd_reflector_cnt_dump_man = {
    "swstate dump",
    "print the variable value",
    "reflector_sw_db_info sbfd_reflector_cnt dump []\n",
    "reflector_sw_db_info sbfd_reflector_cnt dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_reflector_sbfd_reflector_cnt_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(reflector_sw_db_info_info[unit], reflector_sw_db_info_layout_str, REFLECTOR_SW_DB_INFO_INFO_NOF_ENTRIES, "REFLECTOR_SW_DB_INFO~SBFD_REFLECTOR_CNT~", sizeof(((reflector_sw_db_info_t*)sw_state_roots_array[unit][REFLECTOR_MODULE_ID])->sbfd_reflector_cnt));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_reflector_sbfd_reflector_cnt_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_reflector_sbfd_reflector_cnt_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "reflector_sw_db_info sbfd_reflector_cnt size_get",
    "reflector_sw_db_info sbfd_reflector_cnt size_get",
};


shr_error_e sh_dnx_swstate_reflector_sbfd_reflector_cnt_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(reflector_sw_db_info_info[unit], reflector_sw_db_info_layout_str, REFLECTOR_SW_DB_INFO_INFO_NOF_ENTRIES, "REFLECTOR_SW_DB_INFO~SBFD_REFLECTOR_CNT~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_reflector_sbfd_reflector_cnt_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_reflector_sbfd_reflector_cnt_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "reflector_sw_db_info sbfd_reflector_cnt diagnostic_operation_counters",
    "reflector_sw_db_info sbfd_reflector_cnt diagnostic_operation_counters",
};


#endif /* DNX_SW_STATE_DIAGNOSTIC */
#undef BSL_LOG_MODULE
