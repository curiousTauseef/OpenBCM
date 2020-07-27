/*****************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by xfc_map_parser
 * from the NPL output file(s) header.yml
 * for device bcm56780_a0 and variant dna_2_4_13.
 * Edits to this file will be lost when it is regenerated.
 *
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 * All Rights Reserved.$
 *
 * Tool Path: $SDK/INTERNAL/fltg/xfc_map_parser
 */

#include <sal/sal_types.h>
#include <shr/shr_error.h>
#include <bsl/bsl.h>
#include <bcmpkt/flexhdr/bcmpkt_p_1588_t.h>
#include <bcmpkt/flexhdr/bcmpkt_p_1588_t_internal.h>

#define MASK(_bn) (((uint32_t)0x1<<(_bn))-1)
#define WORD_FIELD_GET(_d,_s,_l) (((_d) >> (_s)) & MASK(_l))
#define WORD_FIELD_SET(_d,_s,_l,_v) (_d)=(((_d) & ~(MASK(_l) << (_s))) | (((_v) & MASK(_l)) << (_s)))
#define WORD_FIELD_MASK(_d,_s,_l) (_d)=((_d) | (MASK(_l) << (_s)))

static uint32_t bcmpkt_p_1588_t_msg_type_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[0], 24, 4);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_P_1588_T_MSG_TYPE with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_p_1588_t_msg_type_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_P_1588_T_MSG_TYPE with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    WORD_FIELD_SET(data[0], 24, 4, val);
}

static uint32_t bcmpkt_p_1588_t_correction_get(uint32_t *data) {
    uint32_t val;

    val = SHR_E_PARAM;
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_P_1588_T_CORRECTION with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_p_1588_t_correction_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_P_1588_T_CORRECTION with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    LOG_ERROR(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Invalid param\n")));
}

static uint32_t bcmpkt_p_1588_t_srcportid_get(uint32_t *data) {
    uint32_t val;

    val = SHR_E_PARAM;
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_P_1588_T_SRCPORTID with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_p_1588_t_srcportid_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_P_1588_T_SRCPORTID with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    LOG_ERROR(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Invalid param\n")));
}

static uint32_t bcmpkt_p_1588_t_cntrl_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[8], 24, 8);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_P_1588_T_CNTRL with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_p_1588_t_cntrl_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_P_1588_T_CNTRL with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    WORD_FIELD_SET(data[8], 24, 8, val);
}

static uint32_t bcmpkt_p_1588_t_reserved1_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[0], 20, 4);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_P_1588_T_RESERVED1 with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_p_1588_t_reserved1_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_P_1588_T_RESERVED1 with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    WORD_FIELD_SET(data[0], 20, 4, val);
}

static uint32_t bcmpkt_p_1588_t_reserved3_get(uint32_t *data) {
    uint32_t val;

    val = SHR_E_PARAM;
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_P_1588_T_RESERVED3 with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_p_1588_t_reserved3_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_P_1588_T_RESERVED3 with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    LOG_ERROR(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Invalid param\n")));
}

static uint32_t bcmpkt_p_1588_t_reserved2_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[1], 16, 8);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_P_1588_T_RESERVED2 with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_p_1588_t_reserved2_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_P_1588_T_RESERVED2 with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    WORD_FIELD_SET(data[1], 16, 8, val);
}

static uint32_t bcmpkt_p_1588_t_seq_id_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[7], 0, 16);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_P_1588_T_SEQ_ID with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_p_1588_t_seq_id_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_P_1588_T_SEQ_ID with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    WORD_FIELD_SET(data[7], 0, 16, val);
}

static uint32_t bcmpkt_p_1588_t_logmsginterval_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[8], 16, 8);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_P_1588_T_LOGMSGINTERVAL with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_p_1588_t_logmsginterval_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_P_1588_T_LOGMSGINTERVAL with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    WORD_FIELD_SET(data[8], 16, 8, val);
}

static uint32_t bcmpkt_p_1588_t_domain_nb_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[1], 24, 8);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_P_1588_T_DOMAIN_NB with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_p_1588_t_domain_nb_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_P_1588_T_DOMAIN_NB with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    WORD_FIELD_SET(data[1], 24, 8, val);
}

static uint32_t bcmpkt_p_1588_t_msg_length_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[0], 0, 16);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_P_1588_T_MSG_LENGTH with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_p_1588_t_msg_length_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_P_1588_T_MSG_LENGTH with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    WORD_FIELD_SET(data[0], 0, 16, val);
}

static uint32_t bcmpkt_p_1588_t_version_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[0], 16, 4);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_P_1588_T_VERSION with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_p_1588_t_version_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_P_1588_T_VERSION with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    WORD_FIELD_SET(data[0], 16, 4, val);
}

static uint32_t bcmpkt_p_1588_t_transportspec_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[0], 28, 4);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_P_1588_T_TRANSPORTSPEC with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_p_1588_t_transportspec_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_P_1588_T_TRANSPORTSPEC with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    WORD_FIELD_SET(data[0], 28, 4, val);
}

static uint32_t bcmpkt_p_1588_t_flags_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[1], 0, 16);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_P_1588_T_FLAGS with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    return val;
}

static void bcmpkt_p_1588_t_flags_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_P_1588_T_FLAGS with value %u on device BCM56780_A0_DNA_2_4_13\n"), val));

    WORD_FIELD_SET(data[1], 0, 16, val);
}

static uint32_t bcmpkt_p_1588_t_i_support_get(uint32_t *data, uint32_t **addr) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_P_1588_T_I_SUPPORT on device BCM56780_A0_DNA_2_4_13\n")));
    return true;
}

const bcmpkt_p_1588_t_fget_t bcm56780_a0_dna_2_4_13_p_1588_t_fget = {
    {
        bcmpkt_p_1588_t_msg_type_get,
        bcmpkt_p_1588_t_correction_get,
        bcmpkt_p_1588_t_srcportid_get,
        bcmpkt_p_1588_t_cntrl_get,
        bcmpkt_p_1588_t_reserved1_get,
        bcmpkt_p_1588_t_reserved3_get,
        bcmpkt_p_1588_t_reserved2_get,
        bcmpkt_p_1588_t_seq_id_get,
        bcmpkt_p_1588_t_logmsginterval_get,
        bcmpkt_p_1588_t_domain_nb_get,
        bcmpkt_p_1588_t_msg_length_get,
        bcmpkt_p_1588_t_version_get,
        bcmpkt_p_1588_t_transportspec_get,
        bcmpkt_p_1588_t_flags_get,
    }
};

const bcmpkt_p_1588_t_fset_t bcm56780_a0_dna_2_4_13_p_1588_t_fset = {
    {
        bcmpkt_p_1588_t_msg_type_set,
        bcmpkt_p_1588_t_correction_set,
        bcmpkt_p_1588_t_srcportid_set,
        bcmpkt_p_1588_t_cntrl_set,
        bcmpkt_p_1588_t_reserved1_set,
        bcmpkt_p_1588_t_reserved3_set,
        bcmpkt_p_1588_t_reserved2_set,
        bcmpkt_p_1588_t_seq_id_set,
        bcmpkt_p_1588_t_logmsginterval_set,
        bcmpkt_p_1588_t_domain_nb_set,
        bcmpkt_p_1588_t_msg_length_set,
        bcmpkt_p_1588_t_version_set,
        bcmpkt_p_1588_t_transportspec_set,
        bcmpkt_p_1588_t_flags_set,
    }
};


const bcmpkt_p_1588_t_figet_t bcm56780_a0_dna_2_4_13_p_1588_t_figet = {
    {
        bcmpkt_p_1588_t_i_support_get
    }
};

static shr_enum_map_t bcm56780_a0_dna_2_4_13_p_1588_t_view_types[] = {
    {NULL, -1},
};

/* -2: unsupported, -1: global, others: view's value */
static int bcm56780_a0_dna_2_4_13_p_1588_t_view_infos[BCMPKT_P_1588_T_FID_COUNT] = {
    -1,
    -1,
    -2,
    -1,
    -1,
    -1,
    -1,
    -1,
    -2,
    -1,
    -1,
    -1,
    -2,
    -1,
};

void bcm56780_a0_dna_2_4_13_p_1588_t_view_info_get(bcmpkt_pmd_view_info_t *info)
{
    info->view_infos = bcm56780_a0_dna_2_4_13_p_1588_t_view_infos;
    info->view_types = bcm56780_a0_dna_2_4_13_p_1588_t_view_types;
    info->view_type_get = NULL;
}