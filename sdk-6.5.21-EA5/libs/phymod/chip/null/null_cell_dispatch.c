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

#include <phymod/phymod.h>
#include <phymod/phymod_system.h>
#include <phymod/phymod_cell.h>
#include <phymod/phymod_cell_dispatch.h>

#ifdef PHYMOD_NULL_SUPPORT

#include <phymod/chip/null_cell.h>


__phymod_cell__dispatch__t__ phymod_cell_null_cell_driver = {

    NULL, /* phymod_phy_cell_speed_config_set */
    NULL, /* phymod_phy_cell_speed_config_get */
    NULL, /* phymod_phy_cell_autoneg_set */
    NULL, /* phymod_phy_cell_autoneg_get */
    NULL, /* phymod_phy_cell_autoneg_status_get */
    NULL, /* phymod_phy_cell_autoneg_advert_ability_set */
    NULL, /* phymod_phy_cell_autoneg_advert_ability_get */
    NULL, /* phymod_phy_cell_autoneg_remote_advert_ability_get */
    NULL, /* phymod_phy_cell_link_status_get */
};

#endif /* PHYMOD_NULL_SUPPORT */
