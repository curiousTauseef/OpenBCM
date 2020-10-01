/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated from the registers file.
 * Edits to this file will be lost when it is regenerated.
 *
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 *
 * File:        allregs_y.i
 * Purpose:     Independent register descriptions.
 */

#if defined(BCM_56725_A0) || defined(BCM_56820_A0)
    { /* SOC_REG_INT_Y_CPU_SLOT_COUNTr */
        soc_block_list[4],
        soc_genreg,
        1,
        0,
        0x6080108,
        0,
        0,
        2,
        soc_Y_CPU_SLOT_COUNTr_fields,
        SOC_RESET_VAL_DEC(0x00000500, 0x00000000)
        SOC_RESET_MASK_DEC(0x000007ff, 0x00000000)
        -1,
        -1,
        6,
    },
#endif /* chips */

#if defined(BCM_56725_A0) || defined(BCM_56820_A0)
    { /* SOC_REG_INT_Y_TDM_ENr */
        soc_block_list[4],
        soc_genreg,
        1,
        0,
        0x6080118,
        0,
        0,
        1,
        soc_E2E_HOL_ENr_fields,
        SOC_RESET_VAL_DEC(0x00000000, 0x00000000)
        SOC_RESET_MASK_DEC(0x00000001, 0x00000000)
        -1,
        -1,
        6,
    },
#endif /* chips */

