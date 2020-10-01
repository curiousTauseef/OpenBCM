 /** \file flow_def.h
 *
 * All dnx flow internal structs, callbacks structures etc.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef _DNX_FLOW_DEF_INCLUDED__
/*
 * {
 */
#define _DNX_FLOW_DEF_INCLUDED__

#ifndef BCM_DNX_SUPPORT
#error "This file is for use by DNX (JR2) family only!"
#endif

#include <bcm/types.h>
#include <sal/appl/sal.h>
#include <shared/bsl.h>
#include <soc/dnx/dbal/dbal.h>
#include <bcm/flow.h>
#include <bcm_int/dnx/algo/algo_gpm.h>

#define FLOW_STR_MAX 100
#define FLOW_ENABLER_INVALID 0
#define FLOW_MAX_NOF_POSSIBLE_COMMON_FIELDS 32

/** Enum for termination, initiator, match */
typedef enum
{
    /** application related to LIF termonation */
    FLOW_APP_TYPE_TERM,

    /** application related to LIF initiator */
    FLOW_APP_TYPE_INIT,

    /** application related to MATCH LIF */
    FLOW_APP_TYPE_MATCH,

    FLOW_APP_TYPE_NOF_TYPES
} dnx_flow_app_type_e;

typedef enum
{
    FIRST_FLOW_FIELD_TYPE = 0,
  /**
   * Field that is part of the Flow common fields.
   */
    FLOW_FIELD_TYPE_COMMON = FIRST_FLOW_FIELD_TYPE,
  /**
   * Field that is defined as a special field.
   */
    FLOW_FIELD_TYPE_SPECIAL,
    NOF_FLOW_FIELD_TYPES
} dnx_flow_field_type_e;

/** Generic field cb, for set,get,delete */
typedef int (
    *dnx_flow_field_cb) (
    int unit,
    uint32 entry_handle_id,
    dnx_flow_app_type_e flow_app_type,
    bcm_flow_handle_info_t * flow_handle_info,
    dnx_algo_gpm_gport_hw_resources_t gport_hw_resources,
    void *field_data);

/** set,get,delete field cbs */
typedef struct
{
    /** set callback */
    dnx_flow_field_cb field_set_cb;
    /** get callback */
    dnx_flow_field_cb field_get_cb;
    /*
     * replace callback (optional)
     * need to be implemented and used when replace need to perform different actions than the set callback
     * the set callback will be executed when the replace is not implemented
     */
    dnx_flow_field_cb field_replace_cb;
    /** delete callback */
    dnx_flow_field_cb field_delete_cb;
} dnx_flow_field_cbs_t;

/** Field description cb */
typedef const char *(
    *dnx_flow_field_desc_cb) (
    int unit);

/* 
 * Field value printing function type
 * The function needs to format a string for printing the
 * field's values
 */
typedef int (
    *dnx_flow_field_print_cb) (
    int unit,
    void *val,
    char print_string[FLOW_STR_MAX]);

/** Common field descriptor */
typedef struct
{
    char field_name[FLOW_STR_MAX];      /* Field name */
    uint32 term_field_enabler;  /* Field matching term enabler from flow.h (i.e - BCM_FLOW_TERMINATOR_ELEMENT_...) */
    uint32 init_field_enabler;  /* Field matching init enabler from flow.h (i.e - BCM_FLOW_INITIATOR_ELEMENT_...) */
    uint8 is_profile;           /* Indicate if field is a profile. Used by diagnostics In case the field is a profile - 
                                 * replace cb is usually defined, and the hw writes are done to other tables as well */
    dnx_flow_field_desc_cb desc_cb;     /* Field description callback. If a cb is defined - will be used in diagnostic */
    dnx_flow_field_cbs_t field_cbs;     /* Set, Get, Delete callbacks */
    dnx_flow_field_print_cb print_cb;   /* An optional call back function for printing the field value. If no function
                                         * is supplied - the field will be printed as an integer. */
} dnx_flow_common_field_desc_t;

/** Special field descriptor */
typedef struct
{
    char field_name[FLOW_STR_MAX];      /* Field name in case we want to overrun the DBAL name */
    dnx_flow_field_desc_cb desc_cb;     /* Field description */
    uint32 field_mapping;       /* default Mapping to dbal field */
    dnx_flow_field_cbs_t field_cbs;     /* Set, Get, Delete callbacks */
} dnx_flow_special_field_desc_t;

/** Generic application verify cb, flow_info should be casted */
typedef int (
    *dnx_flow_verify_cb) (
    int unit,
    bcm_flow_handle_info_t * flow_handle_info,
    void *flow_info,
    bcm_flow_special_fields_t * special_fields);

/** Common struct, contains fields which can be shared between term, init, match flow apps */
typedef struct
{
/* application params*/
    uint8 is_verify_disabled;
    uint8 is_error_recovery_disabled;
} dnx_flow_app_common_config_t;

/** dnx flow app configuration */
typedef struct
{
    /*
     * Application name
     */
    char app_name[FLOW_STR_MAX];
    /** related DBAL table */
    dbal_tables_e flow_table;

    /*
     * Flow app type(term, init, match)
     */
    dnx_flow_app_type_e flow_app_type;

    /*
     * Common application configuration 
     */
    const dnx_flow_app_common_config_t *flow_app_common_config;

    /*
     * Bitwise for supported common fields
     */
    uint32 valid_common_fields_bitmap;

    /*
     * specific table special fields
     */
    dbal_fields_e special_fields[BCM_FLOW_SPECIAL_FIELD_MAX_NOF_FIELDS];

    /*
     * verify cb 
     */
    dnx_flow_verify_cb verify_cb;

    
    /*
     * dnx_flow_result_type_pick_cb result_type_pick_cb;
     */
} dnx_flow_app_config_t;

/** Perform get if field is on handle */
shr_error_e dnx_flow_field_value32_get(
    int unit,
    uint32 entry_handle_id,
    dbal_fields_e field_id,
    uint32 *field_val);

/** Perform get if field is on handle */
shr_error_e dnx_flow_field_value8_get(
    int unit,
    uint32 entry_handle_id,
    dbal_fields_e field_id,
    uint8 *field_val);

int dnx_flow_init(
    int unit);

const char *dnx_flow_handle_to_string(
    int unit,
    bcm_flow_handle_t flow_handle_id);

const dnx_flow_app_config_t *dnx_flow_app_info_get(
    int unit,
    bcm_flow_handle_t flow_handle_id);

int dnx_flow_number_of_apps(
    void);

int dnx_flow_number_of_special_fields(
    void);

shr_error_e dnx_flow_number_of_common_fields(
    int unit,
    dnx_flow_app_type_e flow_app_type,
    int *nof_fields);

shr_error_e dnx_flow_common_fields_desc_by_app_type_get(
    int unit,
    dnx_flow_app_type_e flow_app_type,
    int field_idx,
    const dnx_flow_common_field_desc_t ** common_field_desc);

const char *flow_app_type_to_string(
    int unit,
    dnx_flow_app_type_e flow_app_type);

shr_error_e flow_field_encap_access_print_cb(
    int unit,
    void *val,
    char *print_string);

shr_error_e dnx_flow_field_encap_access_get(
    int unit,
    uint32 entry_handle_id,
    dnx_flow_app_type_e flow_app_type,
    bcm_flow_handle_info_t * flow_handle_info,
    dnx_algo_gpm_gport_hw_resources_t gport_hw_resources,
    void *field_data);

#endif  /*_DNX_FLOW_DEF_INCLUDED__*/
