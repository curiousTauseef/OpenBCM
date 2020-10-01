/*
* $Id: compat_6520.h,v 1.0 2020/07/08
* This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
* 
* Copyright 2007-2020 Broadcom Inc. All rights reserved.
*
* RPC Compatibility with sdk-6.5.20 routines
*/

#ifndef _COMPAT_6520_H_
#define _COMPAT_6520_H_

#ifdef BCM_RPC_SUPPORT
#include <bcm/flow.h>
#include <bcm/ecn.h>
#include <bcm/mirror.h>
#if defined(INCLUDE_L3)
#include <bcm/l3.h>
#endif /* defined(INCLUDE_L3) */
#include <bcm/vlan.h>
#include <bcm/field.h>
#include <bcm/port.h>
#include <bcm/fcoe.h>
#include <bcm/types.h>
#include <bcm/oam.h>
#if defined(INCLUDE_BFD)
#include <bcm/bfd.h>
#endif /* defined(INCLUDE_BFD) */
#include <bcm/flowtracker.h>
#include <bcm/flexstate.h>

/* Initialize a VLAN tag action set structure. */
typedef struct bcm_compat6520_vlan_action_set_s {
    bcm_vlan_t new_outer_vlan;    /* New outer VLAN for Add/Replace actions. */
    bcm_vlan_t new_inner_vlan;    /* New inner VLAN for Add/Replace actions. */
    uint8 new_inner_pkt_prio;    /* New inner packet priority for Add/Replace actions. */
    uint8 new_outer_cfi;    /* New outer packet CFI for Add/Replace actions. */
    uint8 new_inner_cfi;    /* New inner packet CFI for Add/Replace actions. */
    bcm_if_t ingress_if;    /* L3 Ingress Interface. */
    int priority;    /* Internal or packet priority. */
    bcm_vlan_action_t dt_outer;    /* Outer-tag action for double-tagged packets. */
    bcm_vlan_action_t dt_outer_prio;    /* Outer-priority-tag action for double-tagged packets. */
    bcm_vlan_action_t dt_outer_pkt_prio;    /* Outer packet priority action for double-tagged packets. */
    bcm_vlan_action_t dt_outer_cfi;    /* Outer packet CFI action for double-tagged packets. */
    bcm_vlan_action_t dt_inner;    /* Inner-tag action for double-tagged packets. */
    bcm_vlan_action_t dt_inner_prio;    /* Inner-priority-tag action for double-tagged packets. */
    bcm_vlan_action_t dt_inner_pkt_prio;    /* Inner packet priority action for double-tagged packets. */
    bcm_vlan_action_t dt_inner_cfi;    /* Inner packet CFI action for double-tagged packets. */
    bcm_vlan_action_t ot_outer;    /* Outer-tag action for single-outer-tagged packets. */
    bcm_vlan_action_t ot_outer_prio;    /* Outer-priority-tag action for single-outer-tagged packets. */
    bcm_vlan_action_t ot_outer_pkt_prio;    /* Outer packet priority action for single-outer-tagged packets. */
    bcm_vlan_action_t ot_outer_cfi;    /* Outer packet CFI action for single-outer-tagged packets. */
    bcm_vlan_action_t ot_inner;    /* Inner-tag action for single-outer-tagged packets. */
    bcm_vlan_action_t ot_inner_pkt_prio;    /* Inner packet priority action for single-outer-tagged packets. */
    bcm_vlan_action_t ot_inner_cfi;    /* Inner packet CFI action for single-outer-tagged packets. */
    bcm_vlan_action_t it_outer;    /* Outer-tag action for single-inner-tagged packets. */
    bcm_vlan_action_t it_outer_pkt_prio;    /* Outer packet priority action for single-inner-tagged packets. */
    bcm_vlan_action_t it_outer_cfi;    /* Outer packet CFI action for single-inner-tagged packets. */
    bcm_vlan_action_t it_inner;    /* Inner-tag action for single-inner-tagged packets. */
    bcm_vlan_action_t it_inner_prio;    /* Inner-priority-tag action for single-inner-tagged packets. */
    bcm_vlan_action_t it_inner_pkt_prio;    /* Inner packet priority action for single-inner-tagged packets. */
    bcm_vlan_action_t it_inner_cfi;    /* Inner packet CFI action for single-inner-tagged packets. */
    bcm_vlan_action_t ut_outer;    /* Outer-tag action for untagged packets. */
    bcm_vlan_action_t ut_outer_pkt_prio;    /* Outer packet priority action for untagged packets. */
    bcm_vlan_action_t ut_outer_cfi;    /* Outer packet CFI action for untagged packets. */
    bcm_vlan_action_t ut_inner;    /* Inner-tag action for untagged packets. */
    bcm_vlan_action_t ut_inner_pkt_prio;    /* Inner packet priority action for untagged packets. */
    bcm_vlan_action_t ut_inner_cfi;    /* Inner packet CFI action for untagged packets. */
    bcm_vlan_pcp_action_t outer_pcp;    /* Outer tag's pcp field action of outgoing packets. */
    bcm_vlan_pcp_action_t inner_pcp;    /* Inner tag's pcp field action of outgoing packets. */
    bcm_policer_t policer_id;    /* Base policer to be used */
    uint16 outer_tpid;    /* New outer-tag's tpid field for modify action */
    uint16 inner_tpid;    /* New inner-tag's tpid field for modify action */
    bcm_vlan_tpid_action_t outer_tpid_action;    /* Action of outer-tag's tpid field */
    bcm_vlan_tpid_action_t inner_tpid_action;    /* Action of inner-tag's tpid field */
    int action_id;    /* Action Set index */
    uint32 class_id;    /* Class ID */
    bcm_tsn_pri_map_t taf_gate_primap;    /* TAF (Time Aware Filtering) gate priority mapping */
    uint32 flags;    /* BCM_VLAN_ACTION_SET_xxx. */
    bcm_vlan_action_t outer_tag;    /* Outer-tag action for all tagged packets. */
    bcm_vlan_action_t inner_tag;    /* Inner_tag action for all tagged packets. */
    bcm_vlan_t forwarding_domain;    /* Forwarding domain (VLAN or VPN). */
    int inner_qos_map_id;    /* Map ID of inner QOS profile */
    int outer_qos_map_id;    /* Map ID of outer QOS profile. */
    uint32 opaque_ctrl_id;    /* Opaque control ID. */
} bcm_compat6520_vlan_action_set_t;

/* VLAN/VSAN Translation Action Set. */
typedef struct bcm_compat6520_fcoe_vsan_action_set_s {
    uint32 flags;    /* BCM_FCOE_VSAN_ACTION_*  */
    bcm_fcoe_vsan_id_t new_vsan;    /* new VSAN ID to replace with */
    uint8 new_vsan_pri;    /* new VSAN priority to replace with */
    bcm_fcoe_vsan_vft_t vft;    /* remaining fields of VFT header */
    bcm_if_t ingress_if;    /* TBD */
    bcm_fcoe_vsan_action_t dt_vsan;    /* Vsan action when double tagged */
    bcm_fcoe_vsan_action_t dt_vsan_pri;    /* VSAN Priority action when double tagged */
    bcm_fcoe_vsan_action_t it_vsan;    /* Vsan action when single inner tagged */
    bcm_fcoe_vsan_action_t it_vsan_pri;    /* Vsan Priority action when single inner tagged */
    bcm_fcoe_vsan_action_t ot_vsan;    /* Vsan action when single outer tagged */
    bcm_fcoe_vsan_action_t ot_vsan_pri;    /* Vsan Priority action when single outer tagged */
    bcm_fcoe_vsan_action_t ut_vsan;    /* Vsan action when un-tagged */
    bcm_fcoe_vsan_action_t ut_vsan_pri;    /* Vsan Priority action when un-tagged */
    bcm_compat6520_vlan_action_set_t vlan_action;    /* VLAN actions */
} bcm_compat6520_fcoe_vsan_action_set_t;

/* Add FCOE VSAN and VLAN translation action. */
extern int bcm_compat6520_fcoe_vsan_translate_action_add(
    int unit,
    bcm_fcoe_vsan_translate_key_config_t *key,
    bcm_compat6520_fcoe_vsan_action_set_t *action);

/* Add VLAN actions to a field entry. */
extern int bcm_compat6520_field_action_vlan_actions_add(
    int unit,
    bcm_field_entry_t entry,
    bcm_field_action_t action,
    bcm_compat6520_vlan_action_set_t *vlan_action_set);

/* Retrieve VLAN actions configured to a field entry. */
extern int bcm_compat6520_field_action_vlan_actions_get(
    int unit,
    bcm_field_entry_t entry,
    bcm_field_action_t action,
    bcm_compat6520_vlan_action_set_t *vlan_action_set);

/* Get or set the port's default VLAN tag actions. */
extern int bcm_compat6520_vlan_port_default_action_get(
    int unit,
    bcm_port_t port,
    bcm_compat6520_vlan_action_set_t *action);

/* Get or set the port's default VLAN tag actions. */
extern int bcm_compat6520_vlan_port_default_action_set(
    int unit,
    bcm_port_t port,
    bcm_compat6520_vlan_action_set_t *action);

/* Get or set the egress default VLAN tag actions. */
extern int bcm_compat6520_vlan_port_egress_default_action_get(
    int unit,
    bcm_port_t port,
    bcm_compat6520_vlan_action_set_t *action);

/* Get or set the egress default VLAN tag actions. */
extern int bcm_compat6520_vlan_port_egress_default_action_set(
    int unit,
    bcm_port_t port,
    bcm_compat6520_vlan_action_set_t *action);

/* Add protocol-based VLAN with specified action. If the entry already exists, update the action. */
extern int bcm_compat6520_vlan_port_protocol_action_add(
    int unit,
    bcm_port_t port,
    bcm_port_frametype_t frame,
    bcm_port_ethertype_t ether,
    bcm_compat6520_vlan_action_set_t *action);

/* Get protocol-based VLAN specified action. */
extern int bcm_compat6520_vlan_port_protocol_action_get(
    int unit,
    bcm_port_t port,
    bcm_port_frametype_t frame,
    bcm_port_ethertype_t ether,
    bcm_compat6520_vlan_action_set_t *action);

/* Add an association from MAC address to VLAN actions to use for assigning VLAN tag actions to untagged packets. */
extern int bcm_compat6520_vlan_mac_action_add(
    int unit,
    bcm_mac_t mac,
    bcm_compat6520_vlan_action_set_t *action);

/* Retrieve an association from MAC address to VLAN actions, which
are used for VLAN tag assignment to untagged packets. */
extern int bcm_compat6520_vlan_mac_action_get(
    int unit,
    bcm_mac_t mac,
    bcm_compat6520_vlan_action_set_t *action);

/* Add an entry to the VLAN Translation table and assign VLAN actions. */
extern int bcm_compat6520_vlan_translate_action_add(
    int unit,
    bcm_gport_t port,
    bcm_vlan_translate_key_t key_type,
    bcm_vlan_t outer_vlan,
    bcm_vlan_t inner_vlan,
    bcm_compat6520_vlan_action_set_t *action);

/* Add an entry to the VLAN Translation table and assign VLAN actions. */
extern int bcm_compat6520_vlan_translate_action_create(
    int unit,
    bcm_gport_t port,
    bcm_vlan_translate_key_t key_type,
    bcm_vlan_t outer_vlan,
    bcm_vlan_t inner_vlan,
    bcm_compat6520_vlan_action_set_t *action);

/* Get the assigned VLAN actions for the given port, key type, and VLAN tags. */
extern int bcm_compat6520_vlan_translate_action_get(
    int unit,
    bcm_gport_t port,
    bcm_vlan_translate_key_t key_type,
    bcm_vlan_t outer_vlan,
    bcm_vlan_t inner_vlan,
    bcm_compat6520_vlan_action_set_t *action);

/* Add an entry to the egress VLAN Translation table and assign VLAN actions. */
extern int bcm_compat6520_vlan_translate_egress_action_add(
    int unit,
    int port_class,
    bcm_vlan_t outer_vlan,
    bcm_vlan_t inner_vlan,
    bcm_compat6520_vlan_action_set_t *action);

/* Get the assigned VLAN actions for egress VLAN translation on the given port class and VLAN tags. */
extern int bcm_compat6520_vlan_translate_egress_action_get(
    int unit,
    int port_class,
    bcm_vlan_t outer_vlan,
    bcm_vlan_t inner_vlan,
    bcm_compat6520_vlan_action_set_t *action);

/* Add an entry based on gport to the egress VLAN Translation table and assign VLAN actions. */
extern int bcm_compat6520_vlan_translate_egress_gport_action_add(
    int unit,
    bcm_gport_t port,
    bcm_vlan_t outer_vlan,
    bcm_vlan_t inner_vlan,
    bcm_compat6520_vlan_action_set_t *action);

/* Get the assigned VLAN actions for egress VLAN translation on the given gport and VLAN tags. */
extern int bcm_compat6520_vlan_translate_egress_gport_action_get(
    int unit,
    bcm_gport_t port,
    bcm_vlan_t outer_vlan,
    bcm_vlan_t inner_vlan,
    bcm_compat6520_vlan_action_set_t *action);

/* Add an entry to the VLAN Translation table, which assigns VLAN actions for packets matching within the VLAN range(s). */
extern int bcm_compat6520_vlan_translate_action_range_add(
    int unit,
    bcm_gport_t port,
    bcm_vlan_t outer_vlan_low,
    bcm_vlan_t outer_vlan_high,
    bcm_vlan_t inner_vlan_low,
    bcm_vlan_t inner_vlan_high,
    bcm_compat6520_vlan_action_set_t *action);

/* Get assigned VLAN actions from VLAN Translation table for the specified VLAN range(s). */
extern int bcm_compat6520_vlan_translate_action_range_get(
    int unit,
    bcm_gport_t port,
    bcm_vlan_t outer_vlan_low,
    bcm_vlan_t outer_vlan_high,
    bcm_vlan_t inner_vlan_low,
    bcm_vlan_t inner_vlan_high,
    bcm_compat6520_vlan_action_set_t *action);

/* Set a VLAN translation ID instance with tag actions. */
extern int bcm_compat6520_vlan_translate_action_id_set(
    int unit,
    uint32 flags,
    int action_id,
    bcm_compat6520_vlan_action_set_t *action);

/* Get tag actions from a VLAN translation ID instance. */
extern int bcm_compat6520_vlan_translate_action_id_get(
    int unit,
    uint32 flags,
    int action_id,
    bcm_compat6520_vlan_action_set_t *action);

/* Add an association from IP subnet to VLAN actions to use for assigning VLAN tag actions to untagged packets. */
extern int bcm_compat6520_vlan_ip_action_add(
    int unit,
    bcm_vlan_ip_t *vlan_ip,
    bcm_compat6520_vlan_action_set_t *action);

/* Get an association from IP subnet to VLAN actions that used for assigning VLAN tag actions to untagged packets. */
extern int bcm_compat6520_vlan_ip_action_get(
    int unit,
    bcm_vlan_ip_t *vlan_ip,
    bcm_compat6520_vlan_action_set_t *action);

/* Add action for match criteria for Vlan assignment. */
extern int bcm_compat6520_vlan_match_action_add(
    int unit,
    uint32 options,
    bcm_vlan_match_info_t *match_info,
    bcm_compat6520_vlan_action_set_t *action_set);

/* Get action for match criteria. */
extern int bcm_compat6520_vlan_match_action_get(
    int unit,
    bcm_vlan_match_info_t *match_info,
    bcm_compat6520_vlan_action_set_t *action_set);

/* Get all actions and match criteria for given vlan match. */
extern int bcm_compat6520_vlan_match_action_multi_get(
    int unit,
    bcm_vlan_match_t match,
    int size,
    bcm_vlan_match_info_t *match_info_array,
    bcm_compat6520_vlan_action_set_t *action_set_array,
    int *count);

/* This structure contains the configuration of a VLAN. */
typedef struct bcm_compat6520_vlan_control_vlan_s {
    bcm_vrf_t vrf;    /*  */
    bcm_vlan_t forwarding_vlan;    /* Shared VLAN ID. */
    bcm_if_t ingress_if;    /* Mapped Ingress interface. */
    uint16 outer_tpid;    /*  */
    uint32 flags;    /*  */
    bcm_vlan_mcast_flood_t ip6_mcast_flood_mode;    /*  */
    bcm_vlan_mcast_flood_t ip4_mcast_flood_mode;    /*  */
    bcm_vlan_mcast_flood_t l2_mcast_flood_mode;    /*  */
    int if_class;    /*  */
    bcm_vlan_forward_t forwarding_mode;    /*  */
    bcm_vlan_urpf_mode_t urpf_mode;    /*  */
    bcm_cos_queue_t cosq;    /*  */
    int qos_map_id;    /* index to int_pri->queue offset mapping profile */
    bcm_fabric_distribution_t distribution_class;    /* Fabric Distribution Class. */
    bcm_multicast_t broadcast_group;    /* Group to handle broadcast frames */
    bcm_multicast_t unknown_multicast_group;    /* Group to handle unknown multicast frames */
    bcm_multicast_t unknown_unicast_group;    /* Group to handle unknown unicast frames */
    bcm_multicast_t trill_nonunicast_group;    /* Group to handle trill-domain nonunicast frames */
    bcm_trill_name_t source_trill_name;    /* Source RBridge nickname per VLAN */
    int trunk_index;    /* Trunk index for static PSC */
    bcm_vlan_protocol_packet_ctrl_t protocol_pkt;    /* Protocol packet control per VLAN */
    int nat_realm_id;    /* Realm id of interface that this vlan maps to */
    int l3_if_class;    /* L3IIF class id. */
    bcm_vlan_vp_mc_ctrl_t vp_mc_ctrl;    /* VP replication control, Auto, Enable, Disable */
    int aging_cycles;    /* number of aging meta-cycles */
    int entropy_id;    /* aging profile ID */
    bcm_vpn_t vpn;    /* vpn */
    bcm_vlan_t egress_vlan;    /* egress outer vlan */
    uint32 learn_flags;    /* Learn control flags for VLAN-based (BCM_VLAN_LEARN_CONTROL_XXX) */
    uint32 sr_flags;    /* Flags for Seamless Redundancy: BCM_VLAN_CONTROL_SR_FLAG_xxx */
    uint32 flags2;    /* BCM_VLAN_FLAGS2_XXX */
    uint32 ingress_stat_id;    /* Object statistics id ingress. */
    int ingress_stat_pp_profile;    /* Statistic profile ingress. */
    uint32 egress_stat_id;    /* Object statistics id egress. */
    int egress_stat_pp_profile;    /* Statistic profile egress. */
    bcm_compat6520_vlan_action_set_t egress_action;    /* Egress VLAN actions. */
    bcm_vlan_l2_view_t l2_view;    /* L2 table view. */
    int egress_class_id;    /* Class ID for EFP qualifier. */
    int egress_opaque_ctrl_id;    /* Egress opaque control ID. */
    int ingress_opaque_ctrl_id;    /* Ingress opaque control ID. */
    bcm_gport_t unknown_dest;    /* Gport for default destination, valid when BCM_VLAN_FLAGS2_UNKNOWN_DEST is set */
} bcm_compat6520_vlan_control_vlan_t;

/* Set or retrieve current VLAN properties selectively. */
extern int bcm_compat6520_vlan_control_vlan_selective_get(
    int unit,
    bcm_vlan_t vlan,
    uint32 valid_fields,
    bcm_compat6520_vlan_control_vlan_t *control);

/* Set or retrieve current VLAN properties selectively. */
extern int bcm_compat6520_vlan_control_vlan_selective_set(
    int unit,
    bcm_vlan_t vlan,
    uint32 valid_fields,
    bcm_compat6520_vlan_control_vlan_t *control);

/* Set or retrieve current VLAN properties. */
extern int bcm_compat6520_vlan_control_vlan_get(
    int unit,
    bcm_vlan_t vlan,
    bcm_compat6520_vlan_control_vlan_t *control);

/* Set or retrieve current VLAN properties. */
extern int bcm_compat6520_vlan_control_vlan_set(
    int unit,
    bcm_vlan_t vlan,
    bcm_compat6520_vlan_control_vlan_t control);

/* VLAN Egress Translation Action Set. */
typedef struct bcm_compat6520_vlan_translate_egress_action_set_s {
    uint32 flags;    /*  */
    bcm_compat6520_vlan_action_set_t vlan_action;    /* VLAN actions. */
} bcm_compat6520_vlan_translate_egress_action_set_t;

/* Add an entry to the egress VLAN Translation table and assign VLAN actions. It extends bcm_vlan_egress_action_add API for additional keys. */
extern int bcm_compat6520_vlan_translate_egress_action_extended_add(
    int unit,
    bcm_vlan_translate_egress_key_config_t *key_config,
    bcm_compat6520_vlan_translate_egress_action_set_t *action);

/* Retrive an egress translation entry including key types added by bcm_vlan_translate_egress_extended_action_add API. */
extern int bcm_compat6520_vlan_translate_egress_action_extended_get(
    int unit,
    bcm_vlan_translate_egress_key_config_t *key_config,
    bcm_compat6520_vlan_translate_egress_action_set_t *action);


#if defined(INCLUDE_L3)
/* L3 AACL Structure.
@p Contains information required for manipulating L3 AACLs.
 */
typedef struct bcm_compat6520_l3_aacl_s {
    uint32 flags;    /* See BCM_L3_AACL_FLAGS_xxx flag definitions. */
    bcm_ip_t ip;    /* IP subnet address (IPv4). */
    bcm_ip_t ip_mask;    /* IP subnet mask (IPv4). */
    bcm_ip6_t ip6;    /* IP subnet address (IPv6). */
    bcm_ip6_t ip6_mask;    /* IP subnet mask (IPv6). */
    bcm_l4_port_t l4_port;    /* L4 port. */
    bcm_l4_port_t l4_port_mask;    /* L4 port mask. */
    uint32 class_id;    /* Compression class ID. */
} bcm_compat6520_l3_aacl_t;

/* Adds a L3 AACL to the compression table. */
extern int bcm_compat6520_l3_aacl_add(
    int unit,
    uint32 options,
    bcm_compat6520_l3_aacl_t *aacl);

/* Deletes a L3 AACL from the compression table. */
extern int bcm_compat6520_l3_aacl_delete(
    int unit,
    bcm_compat6520_l3_aacl_t *aacl);

/* Deletes all AACLs. */
extern int bcm_compat6520_l3_aacl_delete_all(
    int unit,
    bcm_compat6520_l3_aacl_t *aacl);

/* Finds information from the AACL table. */
extern int bcm_compat6520_l3_aacl_find(
    int unit,
    bcm_compat6520_l3_aacl_t *aacl);
#endif /* defined(INCLUDE_L3) */

#if defined(INCLUDE_BFD)
/* BFD endpoint object. */
typedef struct bcm_compat6520_bfd_endpoint_info_s {
    uint32 flags;                       /* Control flags. */
    bcm_bfd_endpoint_t id;              /* Endpoint identifier. */
    bcm_bfd_endpoint_t remote_id;       /* Remote endpoint identifier. */
    bcm_bfd_tunnel_type_t type;         /* Type of BFD encapsulation. */
    bcm_gport_t gport;                  /* Gport identifier. */
    bcm_gport_t tx_gport;               /* TX gport associated with this
                                           endpoint. */
    bcm_gport_t remote_gport;           /* Gport identifier of trapping
                                           destination: OAMP or CPU, local or
                                           remote. */
    int bfd_period;                     /* For local endpoints, this is the BFD
                                           transmission period in ms. */
    bcm_vpn_t vpn;                      /* VPN. */
    uint8 vlan_pri;                     /* VLAN tag priority. */
    uint8 inner_vlan_pri;               /* Inner VLAN tag priority. */
    bcm_vrf_t vrf_id;                   /* Vrf identifier. */
    bcm_mac_t dst_mac;                  /* Destination MAC. */
    bcm_mac_t src_mac;                  /* Source MAC. */
    bcm_vlan_t pkt_inner_vlan_id;       /* TX Packet inner Vlan Id. */
    bcm_ip_t dst_ip_addr;               /* Destination IPv4 address. */
    bcm_ip6_t dst_ip6_addr;             /* Destination IPv6 address. */
    bcm_ip_t src_ip_addr;               /* Source IPv4 address. */
    bcm_ip6_t src_ip6_addr;             /* Source IPv6 address. */
    uint8 ip_tos;                       /* IPv4 Tos / IPv6 Traffic Class. */
    uint8 ip_ttl;                       /* IPv4 TTL / IPv6 Hop Count. */
    bcm_ip_t inner_dst_ip_addr;         /* Inner destination IPv4 address. */
    bcm_ip6_t inner_dst_ip6_addr;       /* Inner destination IPv6 address. */
    bcm_ip_t inner_src_ip_addr;         /* Inner source IPv4 address. */
    bcm_ip6_t inner_src_ip6_addr;       /* Inner source IPv6 address. */
    uint8 inner_ip_tos;                 /* Inner IPv4 Tos / IPv6 Traffic Class. */
    uint8 inner_ip_ttl;                 /* Inner IPv4 TTL / IPv6 Hop Count. */
    uint32 udp_src_port;                /* UDP source port for Ipv4, Ipv6. */
    bcm_mpls_label_t label;             /* Incoming inner label. */
    bcm_mpls_label_t mpls_hdr;          /* MPLS Header. */
    bcm_mpls_egress_label_t egress_label; /* The MPLS outgoing label information. */
    bcm_if_t egress_if;                 /* Egress interface. */
    uint8 mep_id[BCM_BFD_ENDPOINT_MAX_MEP_ID_LENGTH]; /* MPLS-TP CC/CV TLV and Source MEP ID. */
    uint8 mep_id_length;                /* Length of MPLS-TP CC/CV TLV and
                                           MEP-ID. */
    bcm_cos_t int_pri;                  /* Egress queuing for outgoing BFD to
                                           remote. */
    uint8 cpu_qid;                      /* CPU queue for BFD. */
    bcm_bfd_state_t local_state;        /* Local session state. */
    uint32 local_discr;                 /* Local discriminator. */
    bcm_bfd_diag_code_t local_diag;     /* Local diagnostic code. */
    uint32 local_flags;                 /* Flags combination on outgoing frames. */
    uint32 local_min_tx;                /* Desired local min tx interval. */
    uint32 local_min_rx;                /* Required local rx interval. */
    uint32 local_min_echo;              /* Local minimum echo interval. */
    uint8 local_detect_mult;            /* Local detection interval multiplier. */
    bcm_bfd_auth_type_t auth;           /* Authentication type. */
    uint32 auth_index;                  /* Authentication index. */
    uint32 tx_auth_seq;                 /* Tx authentication sequence id. */
    uint32 rx_auth_seq;                 /* Rx authentication sequence id. */
    uint32 remote_flags;                /* Remote flags. */
    bcm_bfd_state_t remote_state;       /* Remote session state. */
    uint32 remote_discr;                /* Remote discriminator. */
    bcm_bfd_diag_code_t remote_diag;    /* Remote diagnostic code. */
    uint32 remote_min_tx;               /* Desired remote min tx interval. */
    uint32 remote_min_rx;               /* Required remote rx interval. */
    uint32 remote_min_echo;             /* Remote minimum echo interval. */
    uint8 remote_detect_mult;           /* Remote detection interval multiplier. */
    int sampling_ratio;                 /* 0 - No packets sampled to the CPU.
                                           1-8 - Count of packets (with events)
                                           that need to arrive before one is
                                           sampled to the CPU. */
    uint8 loc_clear_threshold;          /* Number of packets required to reset
                                           the Loss-of-Continuity status per
                                           endpoint. */
    uint32 ip_subnet_length;            /* The subnet length for incoming packet
                                           validity check. Value 0 indicates no
                                           check is performed, positive values
                                           indicate the amount of MSBs to be
                                           compared. */
    uint8 remote_mep_id[BCM_BFD_ENDPOINT_MAX_MEP_ID_LENGTH]; /* MPLS-TP CC/CV TLV and Remote MEP ID. */
    uint8 remote_mep_id_length;         /* Length of MPLS-TP CC/CV TLV and
                                           REMOTE MEP-ID. */
    uint8 mis_conn_mep_id[BCM_BFD_ENDPOINT_MAX_MEP_ID_LENGTH]; /* MPLS-TP CC/CV TLV and Mis
                                           connectivity MEP ID. */
    uint8 mis_conn_mep_id_length;       /* Length of MPLS-TP CC/CV TLV and Mis
                                           connectivity MEP-ID. */
    uint32 bfd_detection_time;          /* Optional: BFD Detection Time, in
                                           microseconds. */
    bcm_vlan_t pkt_vlan_id;             /* TX Packet Vlan Id. */
    bcm_vlan_t rx_pkt_vlan_id;          /* RX Packet Vlan Id. */
    bcm_mpls_label_t gal_label;         /* MPLS GAL label. */
    uint32 faults;                      /* Fault flags. */
    uint32 flags2;                      /* Second set of control flags. */
    int ipv6_extra_data_index;          /* Pointer to first extended data entry */
    int punt_good_packet_period;        /* BFD good packets sampling period.
                                           Every punt_good_packet_period
                                           milliseconds, a single packet is
                                           punted to the CPU */
    uint8 bfd_period_cluster;           /* Tx period group. All MEPs in a group
                                           must be created with the same Tx
                                           period. Modifying the Tx period in
                                           one MEP affects the others. */
} bcm_compat6520_bfd_endpoint_info_t;

/* Create or update an BFD endpoint object */
extern int bcm_compat6520_bfd_endpoint_create(
    int unit,
    bcm_compat6520_bfd_endpoint_info_t *endpoint_info);

/* Get an BFD endpoint object. */
extern int bcm_compat6520_bfd_endpoint_get(
    int unit,
    bcm_bfd_endpoint_t endpoint,
    bcm_compat6520_bfd_endpoint_info_t *endpoint_info);
#endif /* defined(INCLUDE_BFD) */

/* port mapping properties structure. */
typedef struct bcm_compat6520_port_mapping_info_s {
    uint32 channel;    /* logical port channel. */
    int core;    /* core id */
    uint32 tm_port;    /* tm port id */
    uint32 pp_port;    /* pp port id */
    uint32 base_q_pair;    /* base queue pair id */
    uint32 num_priorities;    /* number of port priorities */
    uint32 base_hr;    /* base hr id */
    uint32 num_sch_priorities;    /* number of sch port priorities */
    uint32 base_uc_queue;    /* base uc queue */
    uint32 num_uc_queue;    /* number of uc queue */
    uint32 base_mc_queue;    /* base mc queue */
    uint32 num_mc_queue;    /* number of mc queue */
} bcm_compat6520_port_mapping_info_t;

/* add/remove/get port */
extern int bcm_compat6520_port_add(
    int unit,
    bcm_port_t port,
    uint32 flags,
    bcm_port_interface_info_t *interface_info,
    bcm_compat6520_port_mapping_info_t *mapping_info);

/* add/remove/get port */
extern int bcm_compat6520_port_get(
    int unit,
    bcm_port_t port,
    uint32 *flags,
    bcm_port_interface_info_t *interface_info,
    bcm_compat6520_port_mapping_info_t *mapping_info);


/* Sample profile structure. */
typedef struct bcm_compat6520_mirror_sample_profile_s {
    uint8 enable;    /* Sample enable. */
    uint32 rate;    /* Sample rate. */
    uint8 pool_count_enable;    /* Enable to count the packets seen by the sampler. */
    uint8 sample_count_enable;    /* Enable to count the packets sampled by the sampler. */
    uint8 trace_enable;    /* Enable to generate trace event. */
    bcm_mirror_sample_mirror_mode_t mirror_mode;    /* Sample mirror mode. */
} bcm_compat6520_mirror_sample_profile_t;

/* Set sample profile entry with given profile id and type. */
extern int bcm_compat6520_mirror_sample_profile_set(
    int unit,
    bcm_mirror_sample_type_t type,
    int profile_id,
    bcm_compat6520_mirror_sample_profile_t *profile);

/* Get sample profile entry with given profile id and type. */
extern int bcm_compat6520_mirror_sample_profile_get(
    int unit,
    bcm_mirror_sample_type_t type,
    int profile_id,
    bcm_compat6520_mirror_sample_profile_t *profile);

/* OAM loss object. */
typedef struct bcm_compat6520_oam_loss_s {
    uint32 flags;
    int loss_id;                        /* Oam Loss ID. */
    bcm_oam_endpoint_t id;              /* Endpoint ID of Local MEP. */
    bcm_oam_endpoint_t remote_id;       /* Endpoint ID of Remote MEP. */
    int period;                         /* Frequency of loss tx period in
                                           milliseconds. */
    int loss_threshold;                 /* Loss ratio (expressed in 100th of
                                           percent) which if exceeded will
                                           declare the period degraded with a
                                           Loss Measurement packet exception.  A
                                           value of -1 for Loss Measurement
                                           exception on all received packets. */
    int loss_nearend;                   /* Nearend loss (expressed in 100th of
                                           percent). A value os -1 if not
                                           available. */
    int loss_farend;                    /* Farend loss (expressed in 100th of
                                           percent). A value os -1 if not
                                           available. */
    uint32 loss_nearend_byte;           /* Nearend loss in bytes. */
    uint32 loss_farend_byte;            /* Farend loss in bytes. */
    uint32 loss_nearend_byte_upper;     /* Nearend loss in bytes (Upper 32 bits
                                           in 64 bit byte count mode). */
    uint32 loss_farend_byte_upper;      /* Farend loss in bytes (Upper 32 bits
                                           in 64 bit byte count mode). */
    int loss_nearend_max;               /* Nearend maximal loss. A value os -1
                                           if not available. Reset when read. */
    int loss_nearend_acc;               /* Nearend accumulated loss. A value os
                                           -1 if not available. Reset when read. */
    int loss_farend_max;                /* Farend maximal loss. A value os -1 if
                                           not available. Reset when read. */
    int loss_farend_acc;                /* Farend accumulated loss. A value os
                                           -1 if not available. Reset when read. */
    uint32 tx_nearend;                  /* Last local transmit frame count
                                           recorded at time of LMR */
    uint32 rx_nearend;                  /* Last local receive frame count
                                           recorded at time of LMR */
    uint32 tx_farend;                   /* Last peer transmit frame count
                                           recorded at time of LMR */
    uint32 rx_farend;                   /* Last peer receive frame count
                                           recorded at time of LMR */
    uint32 tx_nearend_byte;             /* Local transmit byte count */
    uint32 rx_nearend_byte;             /* Local receive byte count */
    uint32 tx_farend_byte;              /* Peer transmit byte count */
    uint32 rx_farend_byte;              /* Peer receive byte count */
    uint32 tx_nearend_byte_upper;       /* Local transmit byte count (Upper 32
                                           bits in 64 bit byte count mode). */
    uint32 rx_nearend_byte_upper;       /* Local receive byte count (Upper 32
                                           bits in 64 bit byte count mode). */
    uint32 tx_farend_byte_upper;        /* Peer transmit byte count (Upper 32
                                           bits in 64 bit byte count mode). */
    uint32 rx_farend_byte_upper;        /* Peer receive byte count (Upper 32
                                           bits in 64 bit byte count mode). */
    uint8 pkt_pri_bitmap;               /* Bitmap of packet priorities which
                                           should be counted for LM.  A value of
                                           zero is the equivalent of all ones. */
    uint8 pkt_dp_bitmap;                /* Bitmap of packet color or DP which
                                           should be counted for LM.  A value of
                                           zero is the equivalent of all ones. */
    uint8 pkt_pri;                      /* Egress marking for outgoing LM
                                           messages */
    bcm_cos_t int_pri;                  /* Egress queuing for outgoing LM
                                           messages */
    bcm_gport_t gport;                  /* For CEP only; may return a diverged
                                           LP */
    uint32 rx_oam_packets;              /* Count of OAM packets received by this
                                           endpoint */
    uint32 tx_oam_packets;              /* Count of OAM packets transmitted by
                                           this endpoint */
    bcm_mac_t peer_da_mac_address;      /* MAC DA in LMM injection in case peer
                                           endpoint is not configured in
                                           remote_id */
    uint32 lm_counter_base_id[BCM_OAM_LM_COUNTER_MAX]; /* Base index of LM Counter group
                                           (returned during endpoint create) of
                                           the counter to be stamped or
                                           incremented */
    uint32 lm_counter_offset[BCM_OAM_LM_COUNTER_MAX]; /* LM Counter offset from the base */
    int lm_counter_action[BCM_OAM_LM_COUNTER_MAX]; /* LM Counter action (type
                                           bcm_oam_lm_counter_action_t) */
    uint32 lm_counter_byte_offset[BCM_OAM_LM_COUNTER_MAX]; /* LM Counter byte offset for increment */
    uint32 lm_counter_size;             /* Valid index count in LM Counter array */
    uint32 pm_id;                       /* Performance measurement ID in BTE */
    int measurement_period;             /* Slr measurement period in
                                           milliseconds. */
    uint32 slm_counter_base_id;         /* Must be even. Two counters are used,
                                           given counter for RX and given
                                           counter plus 1 for TX */
    uint32 slm_counter_core_id;         /* Slm counter core ID. */
} bcm_compat6520_oam_loss_t;

/* Add an OAM loss object */
extern int bcm_compat6520_oam_loss_add(
        int unit,
        bcm_compat6520_oam_loss_t *oam_loss);

/* Get an OAM loss object */
extern int bcm_compat6520_oam_loss_get(
        int unit,
        bcm_compat6520_oam_loss_t *oam_loss);

/* Delete an OAM loss object */
extern int bcm_compat6520_oam_loss_delete(
        int unit,
        bcm_compat6520_oam_loss_t *oam_loss);

/*
 * Mirror destination Structure
 *
 * Contains information required for manipulating mirror destinations.
 */
typedef struct bcm_compat6520_mirror_destination_s {
    bcm_gport_t mirror_dest_id;         /* Unique mirror destination and
                                           encapsulation identifier. */
    uint32 flags;                       /* See BCM_MIRROR_DEST_xxx flag
                                           definitions. */
    bcm_gport_t gport;                  /* Mirror destination. */
    uint8 version;                      /* IP header version. */
    uint8 tos;                          /* Traffic Class/Tos byte. */
    uint8 ttl;                          /* Hop limit. */
    bcm_ip_t src_addr;                  /* Tunnel source ip address (IPv4). */
    bcm_ip_t dst_addr;                  /* Tunnel destination ip address (IPv4). */
    bcm_ip6_t src6_addr;                /* Tunnel source ip address (IPv6). */
    bcm_ip6_t dst6_addr;                /* Tunnel destination ip address (IPv6). */
    uint32 flow_label;                  /* IPv6 header flow label field. */
    bcm_mac_t src_mac;                  /* L2 source mac address. */
    bcm_mac_t dst_mac;                  /* L2 destination mac address. */
    uint16 tpid;                        /* L2 header outer TPID. */
    bcm_vlan_t vlan_id;                 /* Vlan id. */
    bcm_trill_name_t trill_src_name;    /* TRILL source bridge nickname */
    bcm_trill_name_t trill_dst_name;    /* TRILL destination bridge nickname */
    int trill_hopcount;                 /* TRILL hop count */
    uint16 niv_src_vif;                 /* Source Virtual Interface of NIV tag */
    uint16 niv_dst_vif;                 /* Destination Virtual Interface of NIV
                                           tag */
    uint32 niv_flags;                   /* NIV flags BCM_MIRROR_NIV_XXX */
    uint16 gre_protocol;                /* L3 GRE header protocol */
    bcm_policer_t policer_id;           /* policer_id */
    int stat_id;                        /* stat_id */
    int stat_id2;                       /* stat_id2 for second counter pointer */
    bcm_if_t encap_id;                  /* Encapsulation index */
    bcm_if_t tunnel_id;                 /* IP tunnel for encapsulation. Valid
                                           only if BCM_MIRROR_DEST_TUNNEL_IP_GRE
                                           is set */
    uint16 span_id;                     /* SPAN-ID. Valid only if
                                           BCM_MIRROR_DEST_TUNNEL_WITH_SPAN_ID
                                           is set */
    uint8 pkt_prio;                     /* L2 header PCP */
    uint32 sample_rate_dividend;        /* The probability of mirroring a packet
                                           is: sample_rate_dividend >=
                                           sample_rate_divisor ? 1 :
                                           sample_rate_dividend /
                                           sample_rate_divisor */
    uint32 sample_rate_divisor;
    uint8 int_pri;                      /* Internal Priority */
    uint16 etag_src_vid;                /* Extended (source) port vlan id */
    uint16 etag_dst_vid;                /* Extended (destination) port vlan id */
    uint16 udp_src_port;                /* UDP source port */
    uint16 udp_dst_port;                /* UDP destination port */
    uint32 egress_sample_rate_dividend; /* The probability of outbound mirroring
                                           a packet from the destination is
                                           sample_rate_dividend >=
                                           sample_rate_divisor ? 1 :
                                           sample_rate_dividend /
                                           sample_rate_divisor */
    uint32 egress_sample_rate_divisor;
    uint8 recycle_context;              /* recycle context of egress originating
                                           packets */
    uint16 packet_copy_size;            /*  If non zero, the copied packet will
                                           be truncated to the first
                                           packet_copy_size . Current supported
                                           values for DNX are 0, 64, 128, 192 */
    uint16 egress_packet_copy_size;     /* If non zero and the packet is copied
                                           from the egress, the packet will be
                                           truncated to the first
                                           packet_copy_size . Current supported
                                           values for DNX are 0, 256. */
    bcm_mirror_pkt_header_updates_t packet_control_updates;
    bcm_mirror_psc_t rtag;              /* specify RTAG HASH algorithm used for
                                           shared-id mirror destination */
    uint8 df;                           /* Set the do not fragment bit of IP
                                           header in mirror encapsulation */
    uint8 truncate;                     /* Setting truncate would result in
                                           mirroring a truncated frame */
    uint16 template_id;                 /* Template ID for IPFIX HDR */
    uint32 observation_domain;          /* Observation domain for IPFIX HDR */
    uint32 is_recycle_strict_priority;  /* Recycle priority (1-lossless, 0-high) */
    int ext_stat_id[BCM_MIRROR_EXT_STAT_ID_COUNT]; /* ext_stat_id to support statistic
                                           interface for mirror packets. */
    uint32 flags2;                      /* See BCM_MIRROR_DEST_FLAGS2_xxx flag
                                           definitions. */
    uint32 vni;                         /* Virtual Network Interface ID. */
    uint32 gre_seq_number;              /* Sequence number value used in GRE
                                           header. If no value is provided,
                                           gre_seq_number will start with 0.
                                           Valid only if
                                           BCM_MIRROR_DEST_TUNNEL_IP_GRE is set. */
    bcm_mirror_pkt_erspan_encap_t erspan_header; /* ERSPAN encapsulation header fields.
                                           Valid only if only
                                           BCM_MIRROR_DEST_TUNNEL_IP_GRE is set. */
    uint32 initial_seq_number;          /* Starting seq number in SFLOW or PSAMP
                                           header */
    bcm_mirror_psamp_fmt2_meta_data_t meta_data_type; /* Type of item in 'meta_data' */
    uint16 meta_data;                   /* Actual value of class id or meta
                                           data, based on 'meta_data_type' */
    int ext_stat_valid;                 /* Validates the ext_stat. */
    int ext_stat_type_id[BCM_MIRROR_EXT_STAT_ID_COUNT]; /* Type ids for statistic interface. */
    uint16 ipfix_version;               /* IPFIX version number in PSAMP
                                           encapsulation. */
    uint16 psamp_epoch;                 /* PSAMP epoch field. */
    int cosq;                           /* Queue id that mirror copy is enqueued
                                           into. */
    uint8 cfi;                          /* CFI of VLAN tag. */
    bcm_mirror_timestamp_mode_t timestamp_mode; /* Set timestamp mode for mirror
                                           encapsulation. */
    bcm_mirror_multi_dip_group_t multi_dip_group; /* Multiple destination IP group. */
    int drop_group_bmp;
    bcm_port_t second_pass_src_port;    /* Source port in the second pass. */
    bcm_mirror_truncate_mode_t encap_truncate_mode; /* Truncate mode for mirror
                                           encapsulation packets. */
    int encap_truncate_profile_id;      /* Truncate length profile ID for mirror
                                           encapsulation packets. */
    bcm_mirror_loopback_header_type_t loopback_header_type; /* Loopback header type. */
    bcm_port_t second_pass_dst_port;    /* Destination port in the second pass. */
    bcm_mirror_int_probe_header_t int_probe_header; /* INT(Inband Network Telemetry) probe
                                          header for mirror encapsulation
                                          packets. */
    uint8 duplicate_pri;                /* The priority of duplicate mirror
                                          packets. The packet with highest
                                          priority (0 is lowest) will be
                                          mirrored and others will be dropped.
                                          Applicable only if duplication is not
                                          allowed. */
    int ip_proto;                       /* IP Protocol number in ERSPAN IP
                                          encap. */
} bcm_compat6520_mirror_destination_t;

/* Create a mirror (destination, encapsulation) pair. */
extern int bcm_compat6520_mirror_destination_create(
    int unit,
    bcm_compat6520_mirror_destination_t *mirror_dest);

/* Get  mirror (destination, encapsulation) pair. */
extern int bcm_compat6520_mirror_destination_get(
    int unit,
    bcm_gport_t mirror_dest_id,
    bcm_compat6520_mirror_destination_t *mirror_dest);

/* ECN traffic map info. */
typedef struct bcm_compat6520_ecn_traffic_map_info_s {
    uint32 flags;    /* BCM_ECN_TRAFFIC_MAP_XXX flag definitions. */
    uint8 ecn;    /* ECN value of packet's IP header. */
    int int_cn;    /* Mapped internal congestion notification(int_cn) value. */
    uint8 tunnel_ecn;    /* ECN information of packet's tunnel header. */
    bcm_ecn_traffic_map_tunnel_type_t tunnel_type;    /* Tunnel type. */
    bcm_ecn_traffic_map_type_t type;    /* Traffic map type bcmEcnTrafficMapTypeXXX to be configured. */
} bcm_compat6520_ecn_traffic_map_info_t;

/* To set/get the mapped internal congestion notification (int_cn). */
extern int bcm_compat6520_ecn_traffic_map_get(
    int unit,
    bcm_compat6520_ecn_traffic_map_info_t *map);

/* To set/get the mapped internal congestion notification (int_cn). */
extern int bcm_compat6520_ecn_traffic_map_set(
    int unit,
    bcm_compat6520_ecn_traffic_map_info_t *map);

/* PM stats structure */
typedef struct bcm_compat6520_oam_pm_stats_s {
    uint32 far_loss_min;                /* Antecedent of the minimum far loss
                                           ratio. */
    uint32 far_tx_min;                  /* Consequent of the minimum far loss
                                           ratio. */
    uint32 far_loss_max;                /* Antecedent of the maximum far loss
                                           ratio. */
    uint32 far_tx_max;                  /* Consequent of the maximum far loss
                                           ratio. */
    uint32 far_loss;                    /* Total far loss at far-end */
    uint32 near_loss_min;               /* Antecedent of the minimum near loss
                                           ratio. */
    uint32 near_tx_min;                 /* Consequent of the minimum near loss
                                           ratio. */
    uint32 near_loss_max;               /* Antecedent of the maximum near loss
                                           ratio. */
    uint32 near_tx_max;                 /* Consequent of the maximum near loss
                                           ratio. */
    uint32 near_loss;                   /* Total near loss at near-end */
    uint32 lm_tx_count;                 /* Count of LM packets transmitted from
                                           local node during sampling interval */
    uint32 DM_min;                      /* Minimum Frame delay */
    uint32 DM_max;                      /* Maximum Frame delay */
    uint32 DM_avg;                      /* Frame delay */
    uint32 dm_tx_count;                 /* Count of DM packets transmitted from
                                           local node during sampling interval */
    uint8 profile_id;                   /* Profile number associated with this
                                           session to measure the DM frames */
    uint32 bin_counters[BCM_OAM_MAX_PM_PROFILE_BIN_EDGES+1]; /* Bins Count of associated profile */
    uint32 lm_rx_count;                 /* Count of LM packets received in local
                                           node during sampling interval */
    uint32 dm_rx_count;                 /* Count of DM packets received in local
                                           node during sampling interval */
    uint32 far_total_tx_pkt_count;      /* Total Tx data packets at far-end */
    uint32 near_total_tx_pkt_count;     /* Total Tx data packets at near-end */
    uint32 flags;                       /* Flags related to PM processed stats */
} bcm_compat6520_oam_pm_stats_t;

/* Get the processed stats for a given endpoint */
extern int bcm_compat6520_oam_pm_stats_get(
    int unit,
    bcm_oam_endpoint_t endpoint_id,
    bcm_compat6520_oam_pm_stats_t *stats_ptr);

#if defined(INCLUDE_L3)
/* Flow encap config structure */
typedef struct bcm_compat6520_flow_encap_config_s {
    bcm_vpn_t vpn;    /* VPN representing a vfi or vrf */
    bcm_gport_t flow_port;    /* flow port id representing a DVP */
    bcm_if_t intf_id;    /* l3 interface id */
    uint32 dvp_group;    /* DVP group ID */
    uint32 oif_group;    /* L3 OUT interface group ID */
    uint32 vnid;    /* VN_ID. */
    uint8 pri;    /* service tag priority. */
    uint8 cfi;    /* service tag cfi */
    uint16 tpid;    /* service tag tpid */
    bcm_vlan_t vlan;    /* service VLAN ID. */
    uint32 flags;    /* BCM_FLOW_ENCAP_FLAG_xxx. */
    uint32 options;    /* BCM_FLOW_ENCAP_OPTION_xxx. */
    bcm_flow_encap_criteria_t criteria;    /* flow encap criteria. */
    uint32 valid_elements;    /* bitmap of valid fields for the encap action */
    bcm_flow_handle_t flow_handle;    /* flow handle derived from flow name */
    uint32 flow_option;    /* flow option derived from flow option name */
    bcm_gport_t src_flow_port;    /* flow port id representing a SVP */
    uint32 class_id;    /* Class ID as a key in EFP. */
    uint32 port_group;    /* Port group ID. */
} bcm_compat6520_flow_encap_config_t;

/* Add a flow encap entry for L2 tunnel or L3 tunnel. */
extern int bcm_compat6520_flow_encap_add(
    int unit,
    bcm_compat6520_flow_encap_config_t *info,
    uint32 num_of_fields,
    bcm_flow_logical_field_t *field);

/* Delete a flow encap entry based on the given key.  */
extern int bcm_compat6520_flow_encap_delete(
    int unit,
    bcm_compat6520_flow_encap_config_t *info,
    uint32 num_of_fields,
    bcm_flow_logical_field_t *field);

/* Get a flow encap entry based on the given key.  */
extern int bcm_compat6520_flow_encap_get(
    int unit,
    bcm_compat6520_flow_encap_config_t *info,
    uint32 num_of_fields,
    bcm_flow_logical_field_t *field);

/* Set the flex counter object value to the encap entry. */
extern int bcm_compat6520_flow_encap_flexctr_object_set(
    int unit,
    bcm_compat6520_flow_encap_config_t *info,
    uint32 value);

/* Get the flex counter object value from the encap entry. */
extern int bcm_compat6520_flow_encap_flexctr_object_get(
    int unit,
    bcm_compat6520_flow_encap_config_t *info,
    uint32 *value);

/* Attach counter entries to the encap entry. */
extern int bcm_compat6520_flow_encap_stat_attach(
    int unit,
    bcm_compat6520_flow_encap_config_t *info,
    uint32 num_of_fields,
    bcm_flow_logical_field_t *field,
    uint32 stat_counter_id);

/* Detach the counter entries from the encap entry. */
extern int bcm_compat6520_flow_encap_stat_detach(
    int unit,
    bcm_compat6520_flow_encap_config_t *info,
    uint32 num_of_fields,
    bcm_flow_logical_field_t *field);

/* Get stat counter ID associated to the encap entry. */
extern int bcm_compat6520_flow_encap_stat_id_get(
    int unit,
    bcm_compat6520_flow_encap_config_t *info,
    uint32 num_of_fields,
    bcm_flow_logical_field_t *field,
    uint32 *stat_counter_id);


#endif /* defined(INCLUDE_L3) */

/* Field destination match. */
typedef struct bcm_compat6520_field_destination_match_s {
    int priority;    /* Match priority. */
    bcm_gport_t gport;    /* Outgoing mod port or trunk. */
    uint32 gport_mask;    /* Outgoing mod port or trunk mask. */
    bcm_multicast_t mc_group;    /* Multicast group. */
    uint32 mc_group_mask;    /* Multicast group mask. */
    bcm_port_encap_t port_encap;    /* Incoming port encapsulation. */
    uint8 port_encap_mask;    /* Incoming port encapsulation mask. */
    bcm_color_t color;    /* Color. */
    uint8 color_mask;    /* Color mask. */
    bcm_color_t elephant_color;    /* Elephant color. */
    uint8 elephant_color_mask;    /* Elephant color mask. */
    uint8 elephant;    /* Flowtracker elephant flow indicator. */
    uint8 elephant_mask;    /* Elephant mask. */
    uint8 elephant_notify;    /* Indicator that flow exceeds the elephant threshold byte count and becomes an elephant flow. */
    uint8 elephant_notify_mask;    /* elephant_notify mask. */
    int int_pri;    /* Internal priority. */
    uint32 int_pri_mask;    /* Internal priority mask. */
    int opaque_object_2;    /* Opaque object 2 assigned in ingress field. */
    uint32 opaque_object_2_mask;    /* Opaque object 2 mask. */
    uint32 ifp_opaque_ctrl_id;    /* IFP opaque control ID. */
    uint32 ifp_opaque_ctrl_id_mask;    /* IFP opaque control ID mask. */
} bcm_compat6520_field_destination_match_t;

/* Add a field destination entry. */
extern int bcm_compat6520_field_destination_entry_add(
    int unit,
    uint32 options,
    bcm_compat6520_field_destination_match_t *match,
    bcm_field_destination_action_t *action);

/* Get a field destination entry. */
extern int bcm_compat6520_field_destination_entry_get(
    int unit,
    bcm_compat6520_field_destination_match_t *match,
    bcm_field_destination_action_t *action);

/* Delete a field destination entry. */
extern int bcm_compat6520_field_destination_entry_delete(
    int unit,
    bcm_compat6520_field_destination_match_t *match);

/* Attach the statistic counter ID to a field destination entry. */
extern int bcm_compat6520_field_destination_stat_attach(
    int unit,
    bcm_compat6520_field_destination_match_t *match,
    uint32 stat_counter_id);

/* Get the statistic counter ID attached to a field destination entry. */
extern int bcm_compat6520_field_destination_stat_id_get(
    int unit,
    bcm_compat6520_field_destination_match_t *match,
    uint32 *stat_counter_id);

/* Detach the statistic counter ID attached to a field destination entry. */
extern int bcm_compat6520_field_destination_stat_detach(
    int unit,
    bcm_compat6520_field_destination_match_t *match);

/* Set the flex counter object value for a field destination entry. */
extern int bcm_compat6520_field_destination_flexctr_object_set(
    int unit,
    bcm_compat6520_field_destination_match_t *match,
    uint32 value);

/* Get the flex counter object value of a field destination entry. */
extern int bcm_compat6520_field_destination_flexctr_object_get(
    int unit,
    bcm_compat6520_field_destination_match_t *match,
    uint32 *value);

/* Flowtracker tracking parameter information. */
typedef struct bcm_compat6520_flowtracker_tracking_param_info_s {
    uint32 flags;                       /* Flags for tracking parameters. */
    bcm_flowtracker_tracking_param_type_t param; /* Type of tracking parameter. */
    bcm_flowtracker_tracking_param_user_data_t tracking_data; /* Element data for the tracking param
                                           to be used to add a flow. */
    bcm_flowtracker_tracking_param_mask_t mask; /* Mask to select granular information
                                           from tracking parameter. By default,
                                           mask is set to all enabled. */
    bcm_flowtracker_check_t check_id;   /* Flowtracker check to be used to
                                           tracking flow check data. */
    bcm_flowtracker_timestamp_source_t src_ts; /* Timestamp source info, valid in case
                                           of timestamp and delay related
                                           tracking params. */
    bcm_udf_id_t udf_id;                /* UDF Id associated with the tracking
                                           param. */
    bcm_flowtracker_direction_t direction; /* Direction of flow from where tracking
                                           parameter is picked. */
    uint16 custom_id;                   /* Custom Identifier for Flowtracker
                                           Tracking parameter type custom. */
} bcm_compat6520_flowtracker_tracking_param_info_t;

/* Flowtracker check information. */
typedef struct bcm_compat6520_flowtracker_check_info_s {
    uint32 flags;                       /* Configuration flags for Check
                                           Creation. */
    bcm_flowtracker_tracking_param_type_t param; /* The attribute of flow on which the
                                           check is performed. */
    uint32 min_value;                   /* Element value to do greater than or
                                           equal checks. Minimum value to do
                                           range checks. */
    uint32 max_value;                   /* Element value to do smaller than or
                                           mask checks. Maximum value to do
                                           range checks. */
    uint32 mask_value;                  /* Mask value to be applied on flow
                                           attribute. */
    uint8 shift_value;                  /* Right shift value to be applied on
                                           flow attribute. */
    bcm_flowtracker_check_operation_t operation; /* Operation to be performed for this
                                           check. */
    bcm_flowtracker_check_t primary_check_id; /* primary check id to associate second
                                           check for aggregated checks on same
                                           flow. */
    uint32 state_transition_flags;      /* State Transition flags */
    uint16 num_drop_reason_group_id;    /* Number of drop reason group id. */
    bcm_flowtracker_drop_reason_group_t drop_reason_group_id[BCM_FLOWTRACKER_DROP_REASON_GROUP_ID_MAX]; /* Flowtracker drop reason group ids.
                                           Applicable only if tracking param is
                                           IngDropReasonGroupIdVector or
                                           EgrDropReasonGroupIdVector. */
    uint16 custom_id;                   /* Custom Identifier for Flowtracker
                                           Tracking parameter type custom. */
} bcm_compat6520_flowtracker_check_info_t;

/* Flowtracker export template elements information. */
typedef struct bcm_comat6520_flowtracker_export_element_info_s {
    uint32 flags;                       /* See
                                           BCM_FLOWTRACKER_EXPORT_ELEMENT_FLAGS_XXX. */
    bcm_flowtracker_export_element_type_t element; /* Type of export element. */
    uint32 data_size;                   /* Size of information element in the
                                           export record in bytes. If the
                                           data_size is given as 0, then the
                                           default RFC size is used. */
    uint16 info_elem_id;                /* Information element to be used, when
                                           the template set is exported. */
    bcm_flowtracker_check_t check_id;   /* Flowtracker Check Id for exporting
                                           check data. */
    bcm_flowtracker_direction_t direction; /* Direction of exporting data element. */
    uint16 custom_id;                   /* Custom Identifier for Flowtracker
                                           Export Element type custom. */
} bcm_compat6520_flowtracker_export_element_info_t;

/* Flowtracker Export record data information. */
typedef struct bcm_compat6520_flowtracker_export_record_data_info_s {
    bcm_compat6520_flowtracker_export_element_info_t export_element_info; /* Flowtracker Export element
                                           information. */
    uint8 data[BCM_FLOWTRACKER_EXPORT_RECORD_DATA_MAX_LENGTH]; /* Raw data in network byte order. */
} bcm_compat6520_flowtracker_export_record_data_info_t;

/* Set tracking parameter for this flowtracker group. */
extern int bcm_compat6520_flowtracker_group_tracking_params_set(
    int unit,
    bcm_flowtracker_group_t id,
    int num_tracking_params,
    bcm_compat6520_flowtracker_tracking_param_info_t *list_of_tracking_params);

/* Get flowtracker tracking parameters for this group. */
extern int bcm_compat6520_flowtracker_group_tracking_params_get(
    int unit,
    bcm_flowtracker_group_t id,
    int max_size,
    bcm_compat6520_flowtracker_tracking_param_info_t *list_of_tracking_params,
    int *list_size);

/* Create a flowtracker flow group. */
extern int bcm_compat6520_flowtracker_check_create(
    int unit,
    uint32 options,
    bcm_compat6520_flowtracker_check_info_t check_info,
    bcm_flowtracker_check_t *check_id);

/* Get a flowtracker flow check. */
extern int bcm_compat6520_flowtracker_check_get(
    int unit,
    bcm_flowtracker_check_t check_id,
    bcm_compat6520_flowtracker_check_info_t *check_info);

/* Validate the template and return the list supported by the device. */
extern int bcm_compat6520_flowtracker_export_template_validate(
    int unit,
    bcm_flowtracker_group_t flow_group_id,
    int max_in_export_elements,
    bcm_compat6520_flowtracker_export_element_info_t *in_export_elements,
    int max_out_export_elements,
    bcm_compat6520_flowtracker_export_element_info_t *out_export_elements,
    int *actual_out_export_elements);

/* Create a flowtracker export template. */
extern int bcm_compat6520_flowtracker_export_template_create(
    int unit,
    uint32 options,
    bcm_flowtracker_export_template_t *id,
    uint16 set_id,
    int num_export_elements,
    bcm_compat6520_flowtracker_export_element_info_t *list_of_export_elements);

/* Get a flowtracker export template. */
extern int bcm_compat6520_flowtracker_export_template_get(
    int unit,
    bcm_flowtracker_export_template_t id,
    uint16 *set_id,
    int max_size,
    bcm_compat6520_flowtracker_export_element_info_t *list_of_export_elements,
    int *list_size);

/*
 * Add a user flow entry basis user input key elements. API expects that
 * all tracking parametrs of type = 'KEY' in the group are specified.
 */
extern int bcm_compat6520_flowtracker_user_entry_add(
    int unit,
    bcm_flowtracker_group_t flow_group_id,
    uint32 options,
    int num_user_entry_params,
    bcm_compat6520_flowtracker_tracking_param_info_t *user_entry_param_list,
    bcm_flowtracker_user_entry_handle_t *entry_handle);

/* Fetch user entry info given the entry handle. */
extern int bcm_compat6520_flowtracker_user_entry_get(
    int unit,
    bcm_flowtracker_user_entry_handle_t *entry_handle,
    int num_user_entry_params,
    bcm_compat6520_flowtracker_tracking_param_info_t *user_entry_param_list,
    int *actual_user_entry_params);

/* To get data from raw export record. */
extern int bcm_compat6520_flowtracker_export_record_data_info_get(
    int unit,
    bcm_flowtracker_export_record_t *record,
    int max_elements,
    bcm_compat6520_flowtracker_export_element_info_t *export_element_info,
    bcm_compat6520_flowtracker_export_record_data_info_t *data_info,
    int *count);

#define BCM_COMPAT6520_FLEXSTATE_OPERATION_OBJECT_SIZE 2          /* Operation object array
                                                          size number. */

/*
 * Flex state index operation structure.
 *
 * This data structure lists the operation of a flex state index.
 * Flex state index would be generated as below:
 *      value0 = (SEL(object0) >> shift0) & ((1 << mask_size0) - 1)).
 *      value1 = (SEL(object1) & ((1 << mask_size1) - 1)) << shift1.
 *      index = (value1 | value0).
 */
typedef struct bcm_compat6520_flexstate_index_operation_s {
    bcm_flexstate_object_t object[BCM_COMPAT6520_FLEXSTATE_OPERATION_OBJECT_SIZE]; /* Flex state object array. */
    uint32 quant_id[BCM_COMPAT6520_FLEXSTATE_OPERATION_OBJECT_SIZE]; /* Quantization ID. */
    uint8 mask_size[BCM_COMPAT6520_FLEXSTATE_OPERATION_OBJECT_SIZE]; /* Object mask size array. */
    uint8 shift[BCM_COMPAT6520_FLEXSTATE_OPERATION_OBJECT_SIZE]; /* Object shift array. */
} bcm_compat6520_flexstate_index_operation_t;

/*
 * Flex state value operation structure.
 *
 * This data structure lists the operation of a flex state update value.
 * Flex state update value would be generated as below:
 *      value0 = (SEL(object0) >> shift0) & ((1 << mask_size0) - 1)).
 *      value1 = (SEL(object1) & ((1 << mask_size1) - 1)) << shift1.
 *      value = (value1 | value0).
 *      New_counter = UPDATE_TYPE(old_counter, value).
 */
typedef struct bcm_compat6520_flexstate_value_operation_s {
    bcm_flexstate_value_select_t select; /* Select state value. */
    bcm_flexstate_object_t object[BCM_COMPAT6520_FLEXSTATE_OPERATION_OBJECT_SIZE]; /* Flex state object array. */
    uint32 quant_id[BCM_COMPAT6520_FLEXSTATE_OPERATION_OBJECT_SIZE]; /* Quantization ID. */
    uint8 mask_size[BCM_COMPAT6520_FLEXSTATE_OPERATION_OBJECT_SIZE]; /* Object mask size array. */
    uint8 shift[BCM_COMPAT6520_FLEXSTATE_OPERATION_OBJECT_SIZE]; /* Object shift array. */
    bcm_flexstate_value_operation_type_t type; /* Counter value operation type. */
} bcm_compat6520_flexstate_value_operation_t;

/*
 * Flex state trigger structure.
 *
 * This data structure lists the properties of the flex state trigger.
 */
typedef struct bcm_compat6520_flexstate_trigger_s {
    bcm_flexstate_trigger_type_t trigger_type; /* Trigger type. */
    uint8 period_num;                   /* Time trigger period number. */
    bcm_flexstate_trigger_interval_t interval; /* Time trigger interval scale. */
    bcm_flexstate_object_t object;      /* Flex state object. */
    uint16 object_value_start;          /* Conditional trigger start value. */
    uint16 object_value_stop;           /* Conditional trigger stop value. */
    uint16 object_value_mask;           /* Conditional trigger mask. */
} bcm_compat6520_flexstate_trigger_t;

/* Flex state operation structure. */
typedef struct bcm_compat6520_flexstate_operation_s {
    bcm_flexstate_update_compare_t update_compare; /* Comparison operation in the
                                           conditional update logic. */
    bcm_compat6520_flexstate_value_operation_t compare_operation; /* Comparison value in the conditional
                                           update logic. */
    bcm_compat6520_flexstate_value_operation_t operation_true; /* Update value when conditional update
                                           logic returns true. */
    bcm_compat6520_flexstate_value_operation_t operation_false; /* Update value when conditional update
                                           logic returns false. */
} bcm_compat6520_flexstate_operation_t;

/*
 * Flex state action structure.
 *
 * This data structure lists the properties of a flex state action.
 */
typedef struct bcm_compat6520_flexstate_action_s {
    uint32 flags;                       /* Action flags. */
    bcm_flexstate_source_t source;      /* Flex state source. */
    bcm_pbmp_t ports;                   /* Flex state ports. */
    int hint;                           /* Flex state hint. */
    bcm_flexstate_drop_count_mode_t drop_count_mode; /* Counter drop mode for functional
                                           packet drops. */
    int exception_drop_count_enable;    /* Enable to count on hardware exception
                                           drops. */
    int egress_mirror_count_enable;     /* Enable to count egress mirrored
                                           packets also. */
    bcm_flexstate_counter_mode_t mode;  /* Action mode. */
    uint32 index_num;                   /* Total counter index number. */
    bcm_compat6520_flexstate_index_operation_t index_operation; /* Flex state index operation structure. */
    bcm_compat6520_flexstate_operation_t operation_a; /* Flex state value A operation
                                           structure. */
    bcm_compat6520_flexstate_operation_t operation_b; /* Flex state value B operation
                                           structure. */
    bcm_compat6520_flexstate_trigger_t trigger;    /* Flex state trigger structure. */
} bcm_compat6520_flexstate_action_t;

/* Flex counter action creation function. */
extern int bcm_compat6520_flexstate_action_create(
    int unit,
    int options,
    bcm_compat6520_flexstate_action_t *action,
    uint32 *action_id);

/* Flex counter action get function. */
extern int bcm_compat6520_flexstate_action_get(
    int unit,
    uint32 action_id,
    bcm_compat6520_flexstate_action_t *action);

/*
 * Flex state quantization structure.
 *
 * This data structure lists the properties of a flex state quantization.
 * Each quantization instance generates a range check result.
 */
typedef struct bcm_compat6520_flexstate_quantization_s {
    bcm_flexstate_object_t object;      /* Flex state object. */
    bcm_pbmp_t ports;                   /* Flex state ports. */
    uint32 range_check_min[BCM_FLEXSTATE_QUANTIZATION_RANGE_SIZE]; /* Range check min value array. */
    uint32 range_check_max[BCM_FLEXSTATE_QUANTIZATION_RANGE_SIZE]; /* Range check max value array. */
    uint8 range_num;                    /* Total range check number */
} bcm_compat6520_flexstate_quantization_t;

/* Flex counter quantization creation function. */
extern int bcm_compat6520_flexstate_quantization_create(
    int unit,
    int options,
    bcm_compat6520_flexstate_quantization_t *quantization,
    uint32 *quant_id);

/* Flex counter quantization get function. */
extern int bcm_compat6520_flexstate_quantization_get(
    int unit,
    uint32 quant_id,
    bcm_compat6520_flexstate_quantization_t *quantization);

#if defined(INCLUDE_L3)
/* Flow tunneling initiator structure. */
typedef struct bcm_compat6520_flow_tunnel_initiator_s {
    uint32 flags;    /* Configuration flags. */
    bcm_tunnel_type_t type;    /* Tunnel type. */
    int ttl;    /* Tunnel header TTL. */
    bcm_mac_t dmac;    /* Destination MAC address. */
    bcm_ip_t dip;    /* Tunnel header DIP (IPv4). */
    bcm_ip_t sip;    /* Tunnel header SIP (IPv4). */
    bcm_ip6_t sip6;    /* Tunnel header SIP (IPv6). */
    bcm_ip6_t dip6;    /* Tunnel header DIP (IPv6). */
    uint32 flow_label;    /* Tunnel header flow label (IPv6). */
    bcm_tunnel_dscp_select_t dscp_sel;    /* Tunnel header DSCP select. */
    int dscp;    /* Tunnel header DSCP value. */
    int dscp_map;    /* DSCP-map ID. */
    bcm_gport_t tunnel_id;    /* Tunnel ID */
    uint16 udp_dst_port;    /* Destination UDP port */
    uint16 udp_src_port;    /* Source UDP port */
    bcm_mac_t smac;    /* Src MAC */
    bcm_vlan_t vlan;    /* Tunnel VLAN */
    uint16 tpid;    /* Tunnel TPID */
    uint8 pkt_pri;    /* Tunnel priority */
    uint8 pkt_cfi;    /* Tunnel CFI */
    uint16 ip4_id;    /* IPv4 ID. */
    bcm_if_t l3_intf_id;    /* l3 Interface ID. */
    bcm_gport_t flow_port;    /* Flow port ID */
    uint32 valid_elements;    /* bitmap of valid fields */
    uint32 flow_handle;    /* flow handle */
    uint32 flow_option;    /* flow option */
    bcm_tunnel_dscp_ecn_select_t dscp_ecn_sel;    /* Tunnel header DSCP and ECN select. */
    int dscp_ecn_map;    /* DSCP and ECN map ID. */
    uint8 ecn;    /* Tunnel header ECN value */
} bcm_compat6520_flow_tunnel_initiator_t;

/* Create a flow tunnel initiator object */
extern int bcm_compat6520_flow_tunnel_initiator_create(
    int unit,
    bcm_compat6520_flow_tunnel_initiator_t *info,
    uint32 num_of_fields,
    bcm_flow_logical_field_t *field);

/* Get the flow tunnel initiator object */
extern int bcm_compat6520_flow_tunnel_initiator_get(
    int unit,
    bcm_compat6520_flow_tunnel_initiator_t *info,
    uint32 num_of_fields,
    bcm_flow_logical_field_t *field);


#endif /* defined(INCLUDE_L3) */
#endif /* BCM_RPC_SUPPORT */
#endif /* _COMPAT_6520_H_ */
