
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifdef BSL_LOG_MODULE
#error "BSL_LOG_MODULE redefined"
#endif
#define BSL_LOG_MODULE BSL_LS_BCMDNX_OAM
#ifdef BCM_DNX2_SUPPORT

 
#include <shared/shrextend/shrextend_debug.h>
#include <soc/memory.h>
#include <soc/feature.h>
#include <soc/types.h>
#include <soc/register.h>
#include <soc/dnxc/drv_dnxc_utils.h>
#include <bcm/bfd.h>

#include <src/bcm/dnx/oam/oam_oamp.h>
#include <src/bcm/dnx/oam/bfd_oamp.h>
#include <src/bcm/dnx/oam/oamp_pe.h>
#include <src/bcm/dnx/oam/oam_oamp_crc.h>
#include <src/bcm/dnx/oam/oamp_pe_infra.h>
#include <soc/dnx/dbal/dbal.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_headers.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_device.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_internal_oam.h>
#include <bcm_int/dnx/algo/port/algo_port_mgmt.h>
#include <bcm_int/dnx/mpls/mpls.h>
#include <bcm_int/dnx/bfd/bfd.h>
#include <include/bcm/vlan.h>
#include <include/bcm_int/dnx/switch/switch_tpid.h>
#include <include/soc/dnx/dnx_data/auto_generated/dnx_data_oam.h>
#include <bcm_int/dnx/algo/oamp/algo_oamp.h>
#include <bcm_int/dnx/algo/bfd/algo_bfd.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/access/algo_oam_access.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/access/algo_oamp_access.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/access/algo_bfd_access.h>
#include <include/bcm/switch.h>
#include <include/bcm_int/dnx_dispatch.h>
#include <include/soc/dnx/intr/auto_generated/jr2/jr2_intr.h>
#include <soc/dnx/mdb.h>
#include <src/bcm/dnx/bfd/bfd_internal.h>
#include <src/bcm/dnx/oam/dnx2/bfd_oamp_v1.h>





#define DNX_OAM_SET_RDI_GEN_METHOD_FIELD_ON_MEP_PROFILE(rdi_method, rx_disable, scanner_disable) \
               rdi_method = ( (rx_disable)==0) <<1 | ((scanner_disable)==0)











shr_error_e
dummy_example_v1(
    int unit,
    const bcm_oam_endpoint_info_t * endpoint_info)
{
    SHR_FUNC_INIT_VARS(unit);

    SHR_NULL_CHECK(endpoint_info, _SHR_E_PARAM, "endpoint_info");

exit:
    SHR_FUNC_EXIT;
}


static shr_error_e
dnx_oam_oamp_ccm_endpoint_mep_db_create_system_headers_v1(
    int unit,
    const bcm_oam_endpoint_info_t * endpoint_info,
    const bcm_oam_group_info_t * group_info,
    dnx_algo_gpm_gport_hw_resources_t gport_hw_resources,
    oam_oamp_profile_hw_data_t * mep_hw_profiles_write_data,
    dnx_oam_oamp_ccm_endpoint_t * mep_db_entry,
    uint8 slm_enabled)
{
    dnx_oam_itmh_priority_t itmh_priority;
    int profile_id;
    int system_headers_mode;
    uint32 udh_header_size;
    uint8 first_reference;
    uint32 mep_pe_profile;
    uint32 sys_port;
    dnx_algo_gpm_gport_phy_info_t gport_info;
    bcm_vlan_port_t vlan_port;
    dnx_algo_gpm_gport_phy_info_t *tx_gport_data = NULL;

    SHR_FUNC_INIT_VARS(unit);

    
    bcm_vlan_port_t_init(&vlan_port);

    SHR_ALLOC_SET_ZERO(tx_gport_data, sizeof(dnx_algo_gpm_gport_phy_info_t),
                       "Structure for reading data about tx_gport", "%s%s%s\r\n", EMPTY, EMPTY, EMPTY);

    system_headers_mode = dnx_data_headers.system_headers.system_headers_mode_get(unit);
    SHR_IF_ERR_EXIT(oamp_pe_udh_header_size_get(unit, (uint32 *) &udh_header_size));

    
    mep_db_entry->server_destination = 0;
    if (!DNX_OAM_DISSECT_IS_ENDPOINT_UPMEP(endpoint_info))
    {
        
        
        itmh_priority.tc = (endpoint_info->int_pri & 0x1F) >> 2;
        itmh_priority.dp = (endpoint_info->int_pri & 0x3);
        
        SHR_IF_ERR_EXIT(algo_oam_db.oam_itmh_priority_profile.allocate_single
                        (unit, 0, &itmh_priority, NULL, &profile_id, &first_reference));
        mep_db_entry->itmh_tc_dp_profile = profile_id;
        if (first_reference)
        {
            mep_hw_profiles_write_data->flags |= DNX_OAM_OAMP_PROFILE_ITMH_PRIORITY_FLAG;

            mep_hw_profiles_write_data->itmh_profile = profile_id;
            mep_hw_profiles_write_data->itmh_priority.dp = itmh_priority.dp;
            mep_hw_profiles_write_data->itmh_priority.tc = itmh_priority.tc;
        }

        if (mep_db_entry->mep_type == DBAL_ENUM_FVAL_OAMP_MEP_TYPE_ETH_OAM)
        {
            
            SHR_IF_ERR_EXIT(dnx_oam_system_port_profile_sw_update(unit, endpoint_info, mep_hw_profiles_write_data));
            mep_db_entry->unified_port_access.port_profile = mep_hw_profiles_write_data->pp_port_profile;

            
            if ((system_headers_mode == DBAL_ENUM_FVAL_SYSTEM_HEADERS_MODE_JERICHO_MODE) && udh_header_size != 0)
            {
                if (DNX_OAM_GROUP_MAID_IS_EXTRA_DATA(group_info->flags))
                {
                    SHR_IF_ERR_EXIT(dnx_oamp_pe_mep_pe_profile_sw_get
                                    (unit, DBAL_ENUM_FVAL_MEP_PE_PROFILE_SW_DOWN_MEP_MAID_48, &mep_pe_profile));
                }
                else
                {
                    SHR_IF_ERR_EXIT(dnx_oamp_pe_mep_pe_profile_sw_get
                                    (unit, DBAL_ENUM_FVAL_MEP_PE_PROFILE_SW_DOWN_MEP, &mep_pe_profile));
                }
                mep_db_entry->mep_pe_profile = (uint8) mep_pe_profile;
            }
        }
        else
        {
            
            
            if (BCM_L3_ITF_TYPE_IS_FEC(endpoint_info->intf_id))
            {
                mep_db_entry->flags |= DNX_OAMP_OAM_CCM_MEP_DESTINATION_IS_FEC;
                mep_db_entry->fec_id_or_glob_out_lif.fec_id = BCM_L3_ITF_VAL_GET(endpoint_info->intf_id);
                mep_db_entry->dest_sys_port_agr = BCM_GPORT_INVALID;
            }
            else
            {
                
                if (BCM_L3_ITF_TYPE_IS_LIF(endpoint_info->intf_id))
                {
                    mep_db_entry->fec_id_or_glob_out_lif.glob_out_lif = BCM_L3_ITF_VAL_GET(endpoint_info->intf_id);
                    SHR_IF_ERR_EXIT(dnx_algo_gpm_gport_phy_info_get(unit, endpoint_info->tx_gport,
                                                                    DNX_ALGO_GPM_GPORT_TO_PHY_OP_RETRIVE_SYS_PORT,
                                                                    tx_gport_data));

                    mep_db_entry->dest_sys_port_agr = tx_gport_data->sys_port;
                }
                else
                {
                    SHR_ERR_EXIT(_SHR_E_PARAM, "Error: provided interface is not a valid FEC nor an out-LIF.\n");
                }
            }
            
            if ((dnx_data_oam.property.oam_injected_over_lsp_cnt_get(unit) == 1)
                && (endpoint_info->type == bcmOAMEndpointTypeBHHMPLS)
                && (endpoint_info->mpls_out_gport == endpoint_info->intf_id))
            {
                
                mep_db_entry->mep_type = DBAL_ENUM_FVAL_OAMP_MEP_TYPE_Y1731_PWE;

                if (endpoint_info->mpls_out_gport != BCM_GPORT_INVALID)
                {
                    SHR_IF_ERR_EXIT(dnx_algo_gpm_gport_to_hw_resources
                                    (unit, endpoint_info->mpls_out_gport, DNX_ALGO_GPM_GPORT_HW_RESOURCES_GLOBAL_LIF,
                                     &gport_hw_resources));
                    mep_db_entry->fec_id_or_glob_out_lif.glob_out_lif = gport_hw_resources.global_out_lif;
                }
            }
        }
    }
    else
    {
        
        if (IS_OAM_SERVER(endpoint_info))
        {
            mep_db_entry->unified_port_access.ccm_eth_up_mep_port.pp_port = endpoint_info->gport;
            mep_db_entry->unified_port_access.ccm_eth_up_mep_port.port_core = 0;
            if (endpoint_info->tx_gport != BCM_GPORT_INVALID)
            {
                sys_port = BCM_GPORT_SYSTEM_PORT_ID_GET(endpoint_info->tx_gport);
                
                if (system_headers_mode == DBAL_ENUM_FVAL_SYSTEM_HEADERS_MODE_JERICHO_MODE)
                {
                    SHR_IF_ERR_EXIT(dbal_fields_parent_field32_value_set(unit, DBAL_FIELD_DESTINATION_JR1,
                                                                         DBAL_FIELD_PORT_ID, &sys_port,
                                                                         &mep_db_entry->server_destination));
                }
                else
                {
                    SHR_IF_ERR_EXIT(dbal_fields_parent_field32_value_set(unit, DBAL_FIELD_DESTINATION,
                                                                         DBAL_FIELD_PORT_ID, &sys_port,
                                                                         &mep_db_entry->server_destination));
                }
            }
        }
        else
        {
            
            vlan_port.vlan_port_id = endpoint_info->gport;
            SHR_IF_ERR_EXIT(bcm_vlan_port_find(unit, &vlan_port));

            
            SHR_IF_ERR_EXIT(dnx_algo_gpm_gport_phy_info_get(unit, vlan_port.port,
                                                            DNX_ALGO_GPM_GPORT_TO_PHY_OP_PP_PORT_IS_MANDATORY,
                                                            &gport_info));

            
            mep_db_entry->unified_port_access.ccm_eth_up_mep_port.pp_port = gport_info.internal_port_pp_info.pp_port[0];
            mep_db_entry->unified_port_access.ccm_eth_up_mep_port.port_core =
                gport_info.internal_port_pp_info.core_id[0];
        }

    }

    
    if ((!DNX_OAM_DISSECT_IS_ENDPOINT_UPMEP(endpoint_info)) && !slm_enabled)
    {

        if (!((_SHR_IS_FLAG_SET(endpoint_info->flags2, BCM_OAM_ENDPOINT_FLAGS2_EGRESS_INJECTION_DOWN)) &&
              (system_headers_mode == DBAL_ENUM_FVAL_SYSTEM_HEADERS_MODE_JERICHO2_MODE)))
        {
            
            mep_db_entry->counter_interface = endpoint_info->lm_counter_if + 1;
            mep_db_entry->counter_ptr = endpoint_info->lm_counter_base_id;
        }
    }

    if (_SHR_IS_FLAG_SET(endpoint_info->flags2, BCM_OAM_ENDPOINT_FLAGS2_EGRESS_INJECTION_DOWN))
    {
        SHR_IF_ERR_EXIT(dnx_algo_gpm_gport_to_hw_resources
                        (unit, endpoint_info->gport, DNX_ALGO_GPM_GPORT_HW_RESOURCES_GLOBAL_LIF, &gport_hw_resources));
        mep_db_entry->fec_id_or_glob_out_lif.glob_out_lif = gport_hw_resources.global_out_lif;
    }

    SHR_EXIT();
exit:
    SHR_FREE(tx_gport_data);
    SHR_FUNC_EXIT;
}


static shr_error_e
dnx_oam_oamp_ccm_endpoint_mep_db_create_network_headers_v1(
    int unit,
    const bcm_oam_endpoint_info_t * endpoint_info,
    const bcm_oam_group_info_t * group_info,
    oam_oamp_profile_hw_data_t * mep_hw_profiles_write_data,
    dnx_oam_oamp_ccm_endpoint_t * mep_db_entry,
    uint8 is_dual_ended_lm,
    const uint8 is_mpls_lm_dm_without_bfd_endpoint,
    dnx_oam_mep_profile_t * mep_profile)
{
    uint8 ccm_rx_without_tx = 0;
    uint32 mpls_tp_mdl_ignore = 0;
    int profile_id;
    uint8 first_reference;
    int prev_ccm_period = 0;

    SHR_FUNC_INIT_VARS(unit);

    if (mep_db_entry->mep_type == DBAL_ENUM_FVAL_OAMP_MEP_TYPE_ETH_OAM)
    {
        SHR_IF_ERR_EXIT(dnx_oam_oamp_ccm_endpoint_eth_oam_init
                        (unit, endpoint_info, mep_db_entry, mep_hw_profiles_write_data));
    }
    else
    {
        SHR_IF_ERR_EXIT(dnx_oam_oamp_ccm_endpoint_mpls_oam_init
                        (unit, endpoint_info, mep_db_entry, mep_hw_profiles_write_data));
    }

    if (!DNX_OAM_IS_ENDPOINT_RFC6374(endpoint_info))
    {
        if (_SHR_IS_FLAG_SET(endpoint_info->flags, BCM_OAM_ENDPOINT_REPLACE))
        {
            
            SHR_IF_ERR_EXIT(dnx_oam_oamp_ccm_interval_to_ccm_period
                            (unit, mep_db_entry->ccm_interval, &prev_ccm_period));

            if (endpoint_info->ccm_period == BCM_OAM_ENDPOINT_CCM_PERIOD_DISABLED
                && prev_ccm_period != BCM_OAM_ENDPOINT_CCM_PERIOD_DISABLED)
            {
                ccm_rx_without_tx = 1;
            }
        }

        if (!ccm_rx_without_tx)
        {
            
            SHR_IF_ERR_EXIT(dnx_oam_oamp_ccm_period_to_ccm_interval
                            (unit, endpoint_info->ccm_period, &mep_db_entry->ccm_interval));
        }

        
        DNX_OAM_SET_RDI_GEN_METHOD_FIELD_ON_MEP_PROFILE(mep_profile->rdi_gen_method,
                                                        (endpoint_info->flags2 &
                                                         BCM_OAM_ENDPOINT_FLAGS2_RDI_FROM_RX_DISABLE),
                                                        (endpoint_info->flags2 &
                                                         BCM_OAM_ENDPOINT_FLAGS2_RDI_FROM_LOC_DISABLE));
    }
    

    mep_profile->opcode_bit_map = 0xff;
    
    if ((_SHR_IS_FLAG_SET(endpoint_info->flags2, BCM_OAM_ENDPOINT_FLAGS2_TX_STATISTICS))
        || (_SHR_IS_FLAG_SET(endpoint_info->flags2, BCM_OAM_ENDPOINT_FLAGS2_RX_STATISTICS)))
    {
        dnx_oam_oamp_statistics_enable(unit, endpoint_info->flags2, mep_profile);
    }
    
    if (DNX_OAM_GROUP_MAID_IS_EXTRA_DATA(group_info->flags))
    {
        mep_profile->maid_check_dis = TRUE;
    }
    
    SHR_IF_ERR_EXIT(algo_oam_db.mpls_tp_mdl_ignore.get(unit, &mpls_tp_mdl_ignore));
    if (mpls_tp_mdl_ignore)
    {
        if (endpoint_info->type == bcmOAMEndpointTypeBhhSection ||
            endpoint_info->type == bcmOAMEndpointTypeBHHMPLS || endpoint_info->type == bcmOAMEndpointTypeBHHPwe)
        {
            mep_profile->mdl_check_dis = TRUE;
        }
    }
    
    mep_profile->lmm_offset =
        dnx_oam_lm_dm_set_offset(unit, mep_db_entry, is_dual_ended_lm, 0  , 0  ,
                                 (endpoint_info->type == bcmOAMEndpointTypeMplsLmDmLsp),
                                 _SHR_IS_FLAG_SET(endpoint_info->flags2,
                                                  BCM_OAM_ENDPOINT_FLAGS2_EGRESS_INJECTION_DOWN));
    mep_profile->lmr_offset =
        dnx_oam_lm_dm_set_offset(unit, mep_db_entry, is_dual_ended_lm, 0  , 1  ,
                                 (endpoint_info->type == bcmOAMEndpointTypeMplsLmDmLsp),
                                 _SHR_IS_FLAG_SET(endpoint_info->flags2,
                                                  BCM_OAM_ENDPOINT_FLAGS2_EGRESS_INJECTION_DOWN));
    mep_profile->dmm_offset =
        dnx_oam_lm_dm_set_offset(unit, mep_db_entry, is_dual_ended_lm, 1  , 0  ,
                                 (endpoint_info->type == bcmOAMEndpointTypeMplsLmDmLsp),
                                 _SHR_IS_FLAG_SET(endpoint_info->flags2,
                                                  BCM_OAM_ENDPOINT_FLAGS2_EGRESS_INJECTION_DOWN));
    mep_profile->dmr_offset =
        dnx_oam_lm_dm_set_offset(unit, mep_db_entry, is_dual_ended_lm, 1  , 1  ,
                                 (endpoint_info->type == bcmOAMEndpointTypeMplsLmDmLsp),
                                 _SHR_IS_FLAG_SET(endpoint_info->flags2,
                                                  BCM_OAM_ENDPOINT_FLAGS2_EGRESS_INJECTION_DOWN));

    if (!DNX_OAM_IS_ENDPOINT_RFC6374(endpoint_info))
    {
        
        SHR_IF_ERR_EXIT(dnx_oam_oamp_scan_count_calc(unit,
                                                     endpoint_info->id, 0,
                                                     (endpoint_info->endpoint_memory_type ==
                                                      bcmOamEndpointMemoryTypeShortEntry), mep_db_entry->ccm_interval,
                                                     ccm_rx_without_tx, OAMP_MEP_TX_OPCODE_CCM_BFD, mep_profile));
    }
    else
    {
        
        if (is_mpls_lm_dm_without_bfd_endpoint)
        {
            mep_profile->ccm_count = DNX_OAM_OAMP_ETH1731_MEP_PROFILE_MAX_CCM_CNT;
        }
        mep_profile->lmm_count = DNX_OAM_OAMP_ETH1731_MEP_PROFILE_MAX_CCM_CNT;
        mep_profile->dmm_count = DNX_OAM_OAMP_ETH1731_MEP_PROFILE_MAX_CCM_CNT;
    }

    
    mep_profile->cluster_id = 0xFF;

    SHR_IF_ERR_EXIT(algo_oam_db.oam_mep_profile.allocate_single
                    (unit, 0, mep_profile, NULL, &profile_id, &first_reference));
    if (first_reference)
    {
        mep_hw_profiles_write_data->flags |= DNX_OAM_OAMP_PROFILE_MEP_PROFILE_FLAG;
        mep_hw_profiles_write_data->mep_profile_index = profile_id;
        sal_memcpy(&(mep_hw_profiles_write_data->mep_profile), mep_profile, sizeof(dnx_oam_mep_profile_t));
    }

    mep_db_entry->mep_profile = profile_id;

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}


static shr_error_e
dnx_oam_oamp_ccm_endpoint_mep_db_create_oam_pdu_v1(
    int unit,
    const bcm_oam_endpoint_info_t * endpoint_info,
    const bcm_oam_group_info_t * group_info,
    const dnx_oam_endpoint_info_t * sw_endpoint_info,
    oam_oamp_profile_hw_data_t * mep_hw_profiles_write_data,
    oam_oamp_profile_hw_data_t * mep_hw_profiles_delete_data,
    dnx_oam_oamp_ccm_endpoint_t * mep_db_entry,
    uint8 is_dual_ended_lm,
    uint8 is_1dm_enabled)
{
    int system_headers_mode, index;
    uint32 udh_header_size;
    int num_short_entries_in_bank, entry_bank, extra_data_header_bank;
    dnx_oam_oamp_trap_tcam_entry_t tcam_data;
    uint8 first_reference, last_reference;
    uint32 mep_pe_profile;
    dnx_oam_oamp_mep_db_args_t *group_entry_info = NULL;

    SHR_FUNC_INIT_VARS(unit);

    SHR_ALLOC_SET_ZERO(group_entry_info, sizeof(dnx_oam_oamp_mep_db_args_t),
                       "Structure for reading data about group", "%s%s%s\r\n", EMPTY, EMPTY, EMPTY);
    system_headers_mode = dnx_data_headers.system_headers.system_headers_mode_get(unit);
    SHR_IF_ERR_EXIT(oamp_pe_udh_header_size_get(unit, (uint32 *) &udh_header_size));

    if (DNX_OAM_IS_ENDPOINT_RFC6374(endpoint_info))
    {
        mep_db_entry->session_id = endpoint_info->session_id;
        mep_db_entry->timestamp_format = endpoint_info->timestamp_format;
    }

    if (!DNX_OAM_IS_ENDPOINT_RFC6374(endpoint_info))
    {
        
        mep_db_entry->mdl = endpoint_info->level;
        
        mep_db_entry->mep_id = endpoint_info->name;

        if (!_SHR_IS_FLAG_SET(endpoint_info->flags, BCM_OAM_ENDPOINT_REPLACE) &&
            !DNX_OAM_GROUP_MAID_IS_EXTRA_DATA(group_info->flags))
        {
            
            SHR_IF_ERR_EXIT(dnx_oam_update_accelarated_endpoint_info_with_group_config
                            (unit, group_info->name, mep_db_entry));
        }

        
        if (endpoint_info->port_state != 0)
        {
            
            mep_db_entry->flags |= DNX_OAMP_OAM_CCM_MEP_PORT_TLV_EN;
            
            mep_db_entry->flags |=
                ((endpoint_info->port_state) == BCM_OAM_PORT_TLV_UP) ? DNX_OAMP_OAM_CCM_MEP_PORT_TLV_VAL : 0;
        }

        
        mep_db_entry->interface_status_tlv_code = endpoint_info->interface_state;

        
        
        if (DNX_OAM_GROUP_MAID_IS_EXTRA_DATA(group_info->flags))
        {
            
            if (!((system_headers_mode == DBAL_ENUM_FVAL_SYSTEM_HEADERS_MODE_JERICHO_MODE) &&
                  (DNX_OAM_DISSECT_IS_ENDPOINT_UPMEP(endpoint_info)) && (udh_header_size != 0)))
            {
                SHR_IF_ERR_EXIT(dnx_oamp_pe_mep_pe_profile_sw_get
                                (unit, DBAL_ENUM_FVAL_MEP_PE_PROFILE_SW_MAID_48, &mep_pe_profile));
                mep_db_entry->mep_pe_profile = (uint8) mep_pe_profile;
            }

            if (endpoint_info->endpoint_memory_type == bcmOamEndpointMemoryTypeSelfContained)
            {
                num_short_entries_in_bank = dnx_data_oam.oamp.nof_mep_db_entries_per_bank_get(unit) *
                    dnx_data_oam.oamp.mep_db_nof_sub_entries_get(unit);
                entry_bank = endpoint_info->id / num_short_entries_in_bank;
                extra_data_header_bank = group_info->group_name_index / num_short_entries_in_bank;
                SHR_IF_ERR_EXIT(dnx_oam_oamp_mep_db_get(unit, group_info->group_name_index, group_entry_info));
                if ((entry_bank >= extra_data_header_bank) &&
                    (entry_bank < extra_data_header_bank + group_entry_info->exclusive.extra_data.extra_data_len))
                {
                    SHR_ERR_EXIT(_SHR_E_PARAM,
                                 "Error: for self contained accelerated OAM endpoint with 48B MAID, all extra data \n"
                                 "entries must not be in the same bank as the main endpoint entry.\n");
                }

                
                mep_db_entry->extra_data_header = OAM_ID_TO_MEP_DB_ENTRY(group_info->group_name_index);

                if (_SHR_IS_FLAG_SET(endpoint_info->flags2, BCM_OAM_ENDPOINT_FLAGS2_EGRESS_INJECTION_DOWN))
                {
                    SHR_IF_ERR_EXIT(dnx_oamp_pe_mep_pe_profile_sw_get
                                    (unit, DBAL_ENUM_FVAL_MEP_PE_PROFILE_SW_DOWN_MEP_INJ_SELF_CONTAINED_MAID_48,
                                     &mep_pe_profile));
                    mep_db_entry->mep_pe_profile = (uint8) mep_pe_profile;
                }

                if (DNX_OAM_DISSECT_IS_EXTRA_DATA_PER_ENDPOINT(endpoint_info))
                {
                    if (_SHR_IS_FLAG_SET(endpoint_info->flags2, BCM_OAM_ENDPOINT_FLAGS2_SIGNAL))
                    {
                        SHR_IF_ERR_EXIT(dnx_oamp_pe_mep_pe_profile_sw_get
                                        (unit, DBAL_ENUM_FVAL_MEP_PE_PROFILE_SW_SIGNAL_DETECT_MAID_48,
                                         &mep_pe_profile));
                        mep_db_entry->extra_data.flags =
                            DNX_OAMP_CCM_ENDPOINT_EXTRA_DATA_SD | DNX_OAMP_CCM_ENDPOINT_EXTRA_DATA_UPDATE;
                        mep_db_entry->extra_data.opcodes_to_prepend = DNX_OAMP_EXTRA_DATA_TO_PREPEND_CCM;
                        mep_db_entry->extra_data.signal_degradation_rx = endpoint_info->rx_signal;
                    }
                    else
                    {
                        SHR_IF_ERR_EXIT(dnx_oamp_pe_mep_pe_profile_sw_get
                                        (unit, DBAL_ENUM_FVAL_MEP_PE_PROFILE_SW_LMDM_FLEXIBLE_DA_MAID_48,
                                         &mep_pe_profile));
                        if (DNX_OAM_LMDM_FLEXIBLE_DA_IS_SET_TO_ENABLE(endpoint_info, sw_endpoint_info))
                        {
                            
                            mep_db_entry->extra_data.flags = DNX_OAMP_CCM_ENDPOINT_EXTRA_DATA_DMAC;
                            mep_db_entry->extra_data.opcodes_to_prepend =
                                DNX_OAMP_EXTRA_DATA_TO_PREPEND_CCM | DNX_OAMP_EXTRA_DATA_TO_PREPEND_LMM |
                                DNX_OAMP_EXTRA_DATA_TO_PREPEND_DMM;
                            sal_memset(mep_db_entry->extra_data.dmac, 0, sizeof(bcm_mac_t));
                        }
                    }
                    mep_db_entry->mep_pe_profile = (uint8) mep_pe_profile;
                    mep_db_entry->extra_data_header = OAM_ID_TO_MEP_DB_ENTRY(endpoint_info->extra_data_index);
                    mep_db_entry->extra_data.index = OAM_ID_TO_MEP_DB_ENTRY(endpoint_info->extra_data_index);
                    sal_memcpy(mep_db_entry->extra_data.maid48, group_info->name, BCM_OAM_GROUP_NAME_LENGTH);
                    mep_db_entry->extra_data.flags |= DNX_OAMP_CCM_ENDPOINT_EXTRA_DATA_MAID48;

                }
                else if (DNX_OAM_LMDM_FLEXIBLE_DA_IS_SET_TO_DISABLE(endpoint_info, sw_endpoint_info))
                {
                    
                    mep_db_entry->extra_data.index = OAM_ID_TO_MEP_DB_ENTRY(sw_endpoint_info->extra_data_index);
                    mep_db_entry->extra_data.flags = 0;
                    mep_db_entry->extra_data.length = sw_endpoint_info->extra_data_length;
                }

                if (is_1dm_enabled)
                {
                    
                    SHR_IF_ERR_EXIT(dnx_oamp_pe_mep_pe_profile_sw_get
                                    (unit, DBAL_ENUM_FVAL_MEP_PE_PROFILE_SW_1DM_MAID_48, &mep_pe_profile));
                    mep_db_entry->mep_pe_profile = (uint8) mep_pe_profile;
                }
            }
            else
            {
                mep_db_entry->extra_data_header = group_info->id;
            }
            if (IS_OAM_SERVER(endpoint_info) && DNX_OAM_DISSECT_IS_ENDPOINT_UPMEP(endpoint_info))
            {
                
                SHR_IF_ERR_EXIT(dnx_oamp_pe_mep_pe_profile_sw_get
                                (unit, DBAL_ENUM_FVAL_MEP_PE_PROFILE_SW_UP_MEP_SERVER_MAID_48, &mep_pe_profile));
                mep_db_entry->mep_pe_profile = (uint8) mep_pe_profile;
            }
        }
        
        else
        {
            if (_SHR_IS_FLAG_SET(endpoint_info->flags2, BCM_OAM_ENDPOINT_FLAGS2_EGRESS_INJECTION_DOWN))
            {
                SHR_IF_ERR_EXIT(dnx_oamp_pe_mep_pe_profile_sw_get
                                (unit, DBAL_ENUM_FVAL_MEP_PE_PROFILE_SW_DOWN_MEP_INJ_SELF_CONTAINED, &mep_pe_profile));
                mep_db_entry->mep_pe_profile = (uint8) mep_pe_profile;
            }

            if (IS_OAM_SERVER(endpoint_info) && DNX_OAM_DISSECT_IS_ENDPOINT_UPMEP(endpoint_info))
            {
                
                SHR_IF_ERR_EXIT(dnx_oamp_pe_mep_pe_profile_sw_get
                                (unit, DBAL_ENUM_FVAL_MEP_PE_PROFILE_SW_UP_MEP_SERVER, &mep_pe_profile));
                mep_db_entry->mep_pe_profile = (uint8) mep_pe_profile;
            }
            if (DNX_OAM_DISSECT_IS_EXTRA_DATA_PER_ENDPOINT(endpoint_info))
            {
                if (_SHR_IS_FLAG_SET(endpoint_info->flags2, BCM_OAM_ENDPOINT_FLAGS2_SIGNAL))
                {
                    
                    SHR_IF_ERR_EXIT(dnx_oamp_pe_mep_pe_profile_sw_get
                                    (unit, DBAL_ENUM_FVAL_MEP_PE_PROFILE_SW_SIGNAL_DETECT, &mep_pe_profile));
                    if (_SHR_IS_FLAG_SET(endpoint_info->flags, BCM_OAM_ENDPOINT_REPLACE))
                    {
                        mep_db_entry->extra_data.flags = DNX_OAMP_CCM_ENDPOINT_EXTRA_DATA_UPDATE;
                    }
                    mep_db_entry->extra_data.flags |= DNX_OAMP_CCM_ENDPOINT_EXTRA_DATA_SD;
                    mep_db_entry->extra_data.opcodes_to_prepend = DNX_OAMP_EXTRA_DATA_TO_PREPEND_CCM;

                    mep_db_entry->extra_data.signal_degradation_rx = endpoint_info->rx_signal;
                }
                else
                {
                    
                    SHR_IF_ERR_EXIT(dnx_oamp_pe_mep_pe_profile_sw_get
                                    (unit, DBAL_ENUM_FVAL_MEP_PE_PROFILE_SW_LMDM_FLEXIBLE_DA, &mep_pe_profile));
                    if (DNX_OAM_LMDM_FLEXIBLE_DA_IS_SET_TO_ENABLE(endpoint_info, sw_endpoint_info))
                    {
                        
                        mep_db_entry->extra_data.flags = DNX_OAMP_CCM_ENDPOINT_EXTRA_DATA_DMAC;
                        mep_db_entry->extra_data.opcodes_to_prepend =
                            DNX_OAMP_EXTRA_DATA_TO_PREPEND_LMM | DNX_OAMP_EXTRA_DATA_TO_PREPEND_DMM;
                        sal_memset(mep_db_entry->extra_data.dmac, 0, sizeof(bcm_mac_t));
                    }
                }
                mep_db_entry->mep_pe_profile = (uint8) mep_pe_profile;
                mep_db_entry->extra_data.index = OAM_ID_TO_MEP_DB_ENTRY(endpoint_info->extra_data_index);
                mep_db_entry->extra_data_header = OAM_ID_TO_MEP_DB_ENTRY(endpoint_info->extra_data_index);
            }
            else if (DNX_OAM_LMDM_FLEXIBLE_DA_IS_SET_TO_DISABLE(endpoint_info, sw_endpoint_info))
            {
                SHR_IF_ERR_EXIT(dnx_oamp_pe_mep_pe_profile_sw_get
                                (unit, DBAL_ENUM_FVAL_MEP_PE_PROFILE_SW_DEFAULT, &mep_pe_profile));
                mep_db_entry->mep_pe_profile = (uint8) mep_pe_profile;
                mep_db_entry->extra_data_header = endpoint_info->extra_data_index;
                
                mep_db_entry->extra_data.index = OAM_ID_TO_MEP_DB_ENTRY(sw_endpoint_info->extra_data_index);
                mep_db_entry->extra_data.flags = 0;
                mep_db_entry->extra_data.length = sw_endpoint_info->extra_data_length;
            }

            if (is_1dm_enabled)
            {
                
                SHR_IF_ERR_EXIT(dnx_oamp_pe_mep_pe_profile_sw_get
                                (unit, DBAL_ENUM_FVAL_MEP_PE_PROFILE_SW_1DM, &mep_pe_profile));
                mep_db_entry->mep_pe_profile = (uint8) mep_pe_profile;
            }
        }
    }
    
    tcam_data.trap_code = BCM_GPORT_TRAP_GET_ID(endpoint_info->remote_gport);

    if (IS_OAM_SERVER(endpoint_info) &&
        (!_SHR_IS_FLAG_SET(endpoint_info->flags, BCM_OAM_ENDPOINT_REPLACE) ||
         (mep_hw_profiles_delete_data->tcam_entry.trap_code != tcam_data.trap_code)))
    {
        tcam_data.mep_type = mep_db_entry->mep_type;
        SHR_IF_ERR_EXIT(algo_oam_db.oam_trap_tcam_index.allocate_single
                        (unit, 0, &tcam_data, NULL, &index, &first_reference));
        mep_hw_profiles_write_data->tcam_index = index;
        if (first_reference)
        {
            mep_hw_profiles_write_data->flags |= DNX_OAM_OAMP_PROFILE_TRAP_TCAM_FLAG;
            mep_hw_profiles_write_data->tcam_entry.trap_code = tcam_data.trap_code;
            mep_hw_profiles_write_data->tcam_entry.mep_type = tcam_data.mep_type;
        }

        if (_SHR_IS_FLAG_SET(endpoint_info->flags, BCM_OAM_ENDPOINT_REPLACE))
        {
            SHR_IF_ERR_EXIT(algo_oam_db.oam_trap_tcam_index.free_single(unit,
                                                                        mep_hw_profiles_delete_data->tcam_index,
                                                                        &last_reference));
            if (last_reference)
            {
                mep_hw_profiles_delete_data->flags |= DNX_OAM_OAMP_PROFILE_TRAP_TCAM_FLAG;
            }
        }
    }

    SHR_EXIT();
exit:
    SHR_FREE(group_entry_info);
    SHR_FUNC_EXIT;
}


static shr_error_e
dnx_oam_oamp_mep_db_create_prepare_for_ccm_endpoint_replace(
    int unit,
    const bcm_oam_endpoint_info_t * endpoint_info,
    dnx_oam_oamp_ccm_endpoint_t * mep_db_entry,
    uint8 *slm_enabled,
    uint8 *is_dual_ended_lm,
    uint8 *is_1dm_enabled,
    oam_oamp_profile_hw_data_t * mep_hw_profiles_delete_data,
    dnx_oam_mep_profile_t * mep_profile)
{
    int counter = 0;

    SHR_FUNC_INIT_VARS(unit);

    

    if (DNX_OAM_IS_ENDPOINT_RFC6374(endpoint_info))
    {
        mep_db_entry->mep_type = DBAL_ENUM_FVAL_OAMP_MEP_TYPE_RFC_6374;
    }
    else
    {
        
        mep_db_entry->mep_type = 0;
    }
    
    SHR_IF_ERR_EXIT(dnx_oamp_mep_db_ccm_endpoint_get(unit, (uint16) endpoint_info->id,
                                                     DNX_OAM_DISSECT_IS_DOWN_MEP_EGRESS_INJECTION(endpoint_info),
                                                     mep_db_entry));

    
    SHR_IF_ERR_EXIT(algo_oam_db.oam_mep_profile.profile_data_get(unit, mep_db_entry->mep_profile, &counter,
                                                                 mep_profile));

    
    *slm_enabled = mep_profile->slm_lm;

    
    *is_dual_ended_lm = mep_profile->piggy_back_lm;

    
    if (mep_profile->dm_measurement_type == DBAL_ENUM_FVAL_DM_ONE_WAY_TIMESTAMP_ENCODING_ENCODING_1_WAY_FORMAT4)
    {
        *is_1dm_enabled = TRUE;
    }

    
    SHR_IF_ERR_EXIT(dnx_oam_oamp_ccm_endpoint_mep_db_profiles_free(unit, mep_db_entry, mep_hw_profiles_delete_data));

    
    mep_db_entry->flags = DNX_OAMP_OAM_CCM_MEP_UPDATE;

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}


shr_error_e
dnx_oam_oamp_ccm_endpoint_mep_db_create_v1(
    int unit,
    const bcm_oam_endpoint_info_t * endpoint_info,
    const bcm_oam_group_info_t * group_info,
    const dnx_oam_endpoint_info_t * sw_endpoint_info,
    dnx_oam_oamp_ccm_endpoint_t * mep_db_entry,
    oam_oamp_profile_hw_data_t * mep_hw_profiles_write_data,
    oam_oamp_profile_hw_data_t * mep_hw_profiles_delete_data)
{

    uint8 slm_enabled = 0;
    uint8 is_dual_ended_lm = 0;
    dnx_bfd_oamp_v1_only_endpoint_t *bfd_entry_values = NULL;
    dnx_oam_mep_profile_t mep_profile;
    dnx_algo_gpm_gport_hw_resources_t gport_hw_resources;
    int counter = 0;
    uint32 udh_header_size;
    uint8 last_reference;
    uint8 is_1dm_enabled = 0, is_mpls_lm_dm_without_bfd_endpoint = 0;

    SHR_FUNC_INIT_VARS(unit);

    SHR_IF_ERR_EXIT(oamp_pe_udh_header_size_get(unit, (uint32 *) &udh_header_size));

    
    sal_memset(&mep_profile, 0, sizeof(dnx_oam_mep_profile_t));

    if (DNX_OAM_IS_ENDPOINT_RFC6374(endpoint_info))
    {
        SHR_IF_ERR_EXIT(dnx_oam_mpls_lm_dm_without_bfd_endpoint
                        (unit, endpoint_info->id, &is_mpls_lm_dm_without_bfd_endpoint));
    }

    if (DNX_OAM_IS_ENDPOINT_RFC6374(endpoint_info) && !is_mpls_lm_dm_without_bfd_endpoint)
    {
        
        SHR_ALLOC_SET_ZERO(bfd_entry_values, sizeof(dnx_bfd_oamp_v1_only_endpoint_t),
                           "Structure for reading data about BFD EP", "%s%s%s\r\n", EMPTY, EMPTY, EMPTY);

        SHR_IF_ERR_EXIT(dnx_bfd_oamp_v1_only_mep_db_endpoint_get(unit, (uint16) endpoint_info->id, bfd_entry_values));

        if (!_SHR_IS_FLAG_SET(endpoint_info->flags, BCM_OAM_ENDPOINT_REPLACE))
        {
            
            SHR_IF_ERR_EXIT(algo_oam_db.oam_mep_profile.profile_data_get(unit, bfd_entry_values->mep_profile, &counter,
                                                                         &mep_profile));

            
            SHR_IF_ERR_EXIT(algo_oam_db.
                            oam_mep_profile.free_single(unit, (int) bfd_entry_values->mep_profile, &last_reference));
        }
    }

    if (_SHR_IS_FLAG_SET(endpoint_info->flags, BCM_OAM_ENDPOINT_REPLACE))
    {
        SHR_IF_ERR_EXIT(dnx_oam_oamp_mep_db_create_prepare_for_ccm_endpoint_replace
                        (unit, endpoint_info, mep_db_entry, &slm_enabled, &is_dual_ended_lm, &is_1dm_enabled,
                         mep_hw_profiles_delete_data, &mep_profile));
    }

   
    mep_db_entry->flags |= ((endpoint_info->endpoint_memory_type == bcmOamEndpointMemoryTypeLmDmOffloadedEntry) ?
                            DNX_OAMP_OAM_CCM_MEP_LM_DM_OFFLOADED :
                            ((endpoint_info->endpoint_memory_type == bcmOamEndpointMemoryTypeShortEntry) ?
                             DNX_OAMP_OAM_CCM_MEP_Q_ENTRY : 0));

    mep_db_entry->flags |= (endpoint_info->flags & BCM_OAM_ENDPOINT_RDI_TX) ? DNX_OAMP_OAM_CCM_MEP_RDI_FROM_PACKET : 0;

    
    if (DNX_OAM_GROUP_MAID_IS_EXTRA_DATA(group_info->flags))
    {
        mep_db_entry->flags |= DNX_OAMP_OAM_CCM_MEP_48B_MAID;
    }

    
    if (_SHR_IS_FLAG_SET(endpoint_info->flags2, BCM_OAM_ENDPOINT_FLAGS2_EGRESS_INJECTION_DOWN))
    {
        mep_db_entry->flags |= DNX_OAMP_OAM_CCM_MEP_DOWN_MEP_EGRESS_INJECTION;
        mep_db_entry->vsi = endpoint_info->vpn;
    }

    
    if (DNX_OAM_DISSECT_IS_EXTRA_DATA_PER_ENDPOINT(endpoint_info))
    {
        if (!DNX_OAM_IS_ENDPOINT_RFC6374(endpoint_info))
        {
            if (_SHR_IS_FLAG_SET(endpoint_info->flags2, BCM_OAM_ENDPOINT_FLAGS2_SIGNAL))
            {
                mep_db_entry->flags |= DNX_OAMP_OAM_CCM_MEP_SIGNAL_DEGRADATION_ENABLE;
                mep_db_entry->signal_degradation_tx = endpoint_info->tx_signal;
            }
            else
            {
                mep_db_entry->flags |= DNX_OAMP_OAM_CCM_MEP_LMDM_FLEXIBLE_DA;
            }
        }
    }

   
    SHR_IF_ERR_EXIT(dnx_oam_oamp_endpoint_bcm_mep_type_to_mep_db_mep_type
                    (unit, endpoint_info->type, &mep_db_entry->mep_type));

    if (DNX_OAM_IS_ENDPOINT_RFC6374(endpoint_info))
    {
        if (is_mpls_lm_dm_without_bfd_endpoint)
        {
            mep_db_entry->ach_sel = 0;
        }
        else
        {
            mep_db_entry->ach_sel = bfd_entry_values->ach_sel;
        }
        
        if (endpoint_info->type == bcmOAMEndpointTypeMplsLmDmLsp)
        {
            mep_db_entry->flags |= DNX_OAMP_OAM_RF6374_GAL;
        }
        mep_db_entry->flags |= DNX_OAMP_OAM_RF6374_ACH;
        mep_db_entry->flex_lm_dm_entry = OAM_ID_TO_MEP_DB_ENTRY(endpoint_info->extra_data_index);
    }

    
    SHR_IF_ERR_EXIT(dnx_oam_oamp_ccm_endpoint_mep_db_create_system_headers_v1
                    (unit, endpoint_info, group_info, gport_hw_resources, mep_hw_profiles_write_data, mep_db_entry,
                     slm_enabled));

    
    SHR_IF_ERR_EXIT(dnx_oam_oamp_ccm_endpoint_mep_db_create_network_headers_v1
                    (unit, endpoint_info, group_info, mep_hw_profiles_write_data, mep_db_entry, is_dual_ended_lm,
                     is_mpls_lm_dm_without_bfd_endpoint, &mep_profile));

    
    SHR_IF_ERR_EXIT(dnx_oam_oamp_ccm_endpoint_mep_db_create_oam_pdu_v1(unit,
                                                                       endpoint_info,
                                                                       group_info,
                                                                       sw_endpoint_info,
                                                                       mep_hw_profiles_write_data,
                                                                       mep_hw_profiles_delete_data,
                                                                       mep_db_entry, is_dual_ended_lm, is_1dm_enabled));

exit:
    SHR_FREE(bfd_entry_values);
    SHR_FUNC_EXIT;
}


#endif 
