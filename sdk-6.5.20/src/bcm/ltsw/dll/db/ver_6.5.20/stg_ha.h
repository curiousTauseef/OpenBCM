/**************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by HA parser from YAML formated file.
 * Edits to this file will be lost when it is regenerated.
 * Tool: bcmha/scripts/ha_yml_parser.py
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#ifndef STG_HA_H
#define STG_HA_H

#include <shr/shr_ha.h>

typedef struct {
   /*! STP state per port in IPIPE. */
   uint8_t ing_state;
   /*! STP state per port in EPIPE */
   uint8_t egr_state;
} bcmint_stg_stp_info_t;

#define BCMINT_STG_STP_INFO_T_ID 0x4f9f907825a7c9de

#endif /* STG_HA_H */
