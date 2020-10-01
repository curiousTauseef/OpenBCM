/** \file algo/swstate/auto_generated/types/algo_consistent_hashing_types.h
 *
 * sw state types (structs/enums/typedefs)
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

#ifndef __ALGO_CONSISTENT_HASHING_TYPES_H__
#define __ALGO_CONSISTENT_HASHING_TYPES_H__

#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <bcm_int/dnx/algo/consistent_hashing/consistent_hashing_manager.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr_internal.h>
#include <soc/dnxc/swstate/types/sw_state_bitmap.h>
#include <soc/dnxc/swstate/types/sw_state_defragmented_chunk.h>
/*
 * MACROs
 */

#define DNX_ALGO_CONSISTENT_HASHING_MAX_NOF_INSTANCES 3

#define DNX_ALGO_CONSISTENT_HASHING_MAX_TEMPLATE_MNGR_HANDLE_LENGTH DNX_ALGO_TEMPLATE_MNGR_MAX_NAME_LENGTH

/*
 * ENUMs
 */

/**
 * Enum used to map all consistent hashing manager templates
 */
typedef enum {
    /**
     * Invalid consistent managed Id
     */
    CONSISTENT_MANAGER_INVALID = -1,
    /**
     * ECMP consistent hashing manager handle
     */
    L3_ECMP_CONSISTENT_MANAGER = 0,
    /**
     * chm unit testing one
     */
    CHM_UNIT_TEST_1 = 1,
    /**
     * chm unit testing two
     */
    CHM_UNIT_TEST_2 = 2,
    /**
     * chm unit testing three
     */
    CHM_UNIT_TEST_3 = 3,
    /**
     * chm unit testing four
     */
    CHM_UNIT_TEST_4 = 4,
    /**
     * chm unit testing five
     */
    CHM_UNIT_TEST_5 = 5,
    /**
     * chm unit testing six
     */
    CHM_UNIT_TEST_6 = 6,
    /**
     * chm unit testing seven
     */
    CHM_UNIT_TEST_7 = 7,
    /**
     * Consistent managed count.
     */
    CONSISTENT_MANAGER_COUNT
} dnx_consistent_hashing_e;

/*
 * STRUCTs
 */

typedef struct {
    /**
     * the profile type is an enum in the user module
     */
    int profile_type;
    /**
     * each profile supports up to this number of members
     */
    uint32 max_nof_elements_in_profile;
    /**
     * number of consecutive profiles
     */
    uint32 consecutive_profiles;
    /**
     * hierarchy of the profile
     */
    uint32 hierarchy;
    /**
     * not full profiles are uniquely allocated for the object using them - this field is used to identify this object
     */
    uint32 unique_identifyer;
} dnx_algo_consistent_hashing_manager_template_manager_key_t;

/**
 * handle to the template manager instance in the consistent hashing element
 */
typedef struct {
    /**
     * handle to the template manager instance in the consistent hashing element
     */
    char name[DNX_ALGO_CONSISTENT_HASHING_MAX_TEMPLATE_MNGR_HANDLE_LENGTH];
} template_mngr_handle_t;

/**
 * information to manage an instance of consistent hashing element
 */
typedef struct {
    /**
     * handle to the template manager instance in the consistent hashing element
     */
    template_mngr_handle_t template_mngr_handle;
    /**
     * defragmented chunk instance in the consistent hashing element
     */
    sw_state_defragmented_chunk_t* def_chunk;
    /**
     * an array that maps from profile ID to profile offset
     */
    uint32* profile_to_offset_map;
    /**
     * the relevant call back functions for this consistent hashing element
     */
    consistent_hashing_cbs_t cbs;
    /**
     * an array that maps from profile offset to profile ID
     */
    int* offset_to_profile_map;
    /**
     * number of hierarchies this CHM is supporting
     */
    uint32 nof_hierarchies;
    /**
     * HW bank size
     */
    uint32 bank_size;
} consistent_hashing_instance_t;

typedef struct {
    /**
     * bitmap to mark which instances are used
     */
    SHR_BITDCL occupied_bmp[((DNX_ALGO_CONSISTENT_HASHING_MAX_NOF_INSTANCES)/SHR_BITWID)+1];
    /**
     * array of consistent hashing instances
     */
    consistent_hashing_instance_t ch_instance_array[DNX_ALGO_CONSISTENT_HASHING_MAX_NOF_INSTANCES];
    /**
     * Template manager instance in the consistent hashing element
     */
    dnx_algo_template_t chm_templates[CONSISTENT_MANAGER_COUNT];
} consistent_hashing_manager_t;


#endif /* __ALGO_CONSISTENT_HASHING_TYPES_H__ */
