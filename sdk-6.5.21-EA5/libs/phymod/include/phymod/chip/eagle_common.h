/*
 *         
 * 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 *         
 *     
 * DO NOT EDIT THIS FILE!
 */

#ifndef _EAGLE_COMMON_H__H_
#define _EAGLE_COMMON_H__H_

#include <phymod/phymod.h>

/* Translate eagle osr_mode register value to phymod enum*/
int eagle_osr_mode_to_enum(int osr_mode, phymod_osr_mode_t* osr_mode_en);

#endif /*_EAGLE_COMMON_H__H_*/
