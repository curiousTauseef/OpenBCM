
/*
 * 
 This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 
 Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

shr_error_e
adapter_egq_if_port_map_first_phy_entryoffset_0_cb(
int unit,
void * entry_handle,
dbal_fields_e current_mapped_field_id,
uint32 * offset)
{
    dbal_entry_handle_t *  eh = (dbal_entry_handle_t *) entry_handle;
    uint32 key_value__egq_if;
    SHR_FUNC_INIT_VARS(unit);
    DBAL_FORMULA_CB_GET_KEY_VALUE(unit, eh, DBAL_FIELD_EGQ_IF, key_value__egq_if);
    *offset = key_value__egq_if;
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}
