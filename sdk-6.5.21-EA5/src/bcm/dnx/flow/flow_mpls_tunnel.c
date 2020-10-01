/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include "flow_def.h"

/** Supported initiator common fields */
#define VALID_MPLS_TUNNEL_INITIATOR_COMMON_FIELDS \
        BCM_FLOW_INITIATOR_ELEMENT_ENCAP_ACCESS_VALID | \
        BCM_FLOW_INITIATOR_ELEMENT_L3_INTF_ID_VALID | \
        BCM_FLOW_INITIATOR_ELEMENT_QOS_EGRESS_MODEL_VALID | \
        BCM_FLOW_INITIATOR_ELEMENT_QOS_MAP_ID_VALID

/** Supported initiator speciel fields */
#define VALID_MPLS_TUNNEL_INITIATOR_SPECIAL_FIELDS {DBAL_FIELD_MPLS_LABEL, DBAL_FIELD_MPLS_LABEL_2}

/**
 * Note: Commit hooks do not allow for global variables that are not const.
 * Should be moved to swstate when functionality for updating the fields is implemented.
 */
const dnx_flow_app_common_config_t dnx_flow_mpls_tunnel_common_config = {
    /*
     * is_verify_disabled
     */
    0,
    /*
     * is_error_recovery_disabled
     */
    0
};

const dnx_flow_app_config_t dnx_flow_app_mpls_tunnel_initiator = {
    /*
     * Application name
     */
    "MPLS_TUNNEL_INITIATOR",
    /** related DBAL table */
    DBAL_TABLE_EEDB_MPLS_TUNNEL,

    /*
     * Flow app type 
     */
    FLOW_APP_TYPE_INIT,

    /*
     * Common application configuration
     */
    &dnx_flow_mpls_tunnel_common_config,

    /*
     * Bitwise for supported common fields
     */
    VALID_MPLS_TUNNEL_INITIATOR_COMMON_FIELDS,

    /*
     * specific table special fields
     */
    VALID_MPLS_TUNNEL_INITIATOR_SPECIAL_FIELDS,

    /*
     * verify cb
     */
    0
        /*
         * TBD mechanism to pick the result type (override generic method)
         */
        /*
         * NULL
         */
};
