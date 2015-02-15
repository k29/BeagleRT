#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xafeaea66, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x73597ddc, __VMLINUX_SYMBOL_STR(target_fabric_configfs_deregister) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xde266da8, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xda3d9073, __VMLINUX_SYMBOL_STR(target_fabric_configfs_free) },
	{ 0x4af62826, __VMLINUX_SYMBOL_STR(target_fabric_configfs_register) },
	{ 0x2483e998, __VMLINUX_SYMBOL_STR(target_fabric_configfs_init) },
	{ 0x2503f0ea, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0xa210a55a, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0x1079fe48, __VMLINUX_SYMBOL_STR(__root_device_register) },
	{ 0x8aad5774, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xbf84fa04, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x53126cac, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0x5f411e0e, __VMLINUX_SYMBOL_STR(scsi_device_lookup) },
	{ 0x4e91ff73, __VMLINUX_SYMBOL_STR(core_tpg_deregister) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xee19e2dc, __VMLINUX_SYMBOL_STR(__transport_register_session) },
	{ 0x36b6fe3a, __VMLINUX_SYMBOL_STR(transport_free_session) },
	{ 0x53df792c, __VMLINUX_SYMBOL_STR(core_tpg_check_initiator_node_acl) },
	{ 0xd1912fc3, __VMLINUX_SYMBOL_STR(transport_init_session) },
	{ 0x67cd81f3, __VMLINUX_SYMBOL_STR(transport_deregister_session) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x76781767, __VMLINUX_SYMBOL_STR(blk_queue_free_tags) },
	{ 0xa503c738, __VMLINUX_SYMBOL_STR(sas_get_fabric_proto_ident) },
	{ 0x5d88637d, __VMLINUX_SYMBOL_STR(iscsi_get_fabric_proto_ident) },
	{ 0x5d83e813, __VMLINUX_SYMBOL_STR(fc_get_fabric_proto_ident) },
	{ 0xa903b732, __VMLINUX_SYMBOL_STR(sas_get_pr_transport_id) },
	{ 0x186aa36c, __VMLINUX_SYMBOL_STR(iscsi_get_pr_transport_id) },
	{ 0xb0bea51, __VMLINUX_SYMBOL_STR(fc_get_pr_transport_id) },
	{ 0x5ae2c970, __VMLINUX_SYMBOL_STR(sas_get_pr_transport_id_len) },
	{ 0x8f7bdf7c, __VMLINUX_SYMBOL_STR(iscsi_get_pr_transport_id_len) },
	{ 0xe94a8b89, __VMLINUX_SYMBOL_STR(fc_get_pr_transport_id_len) },
	{ 0x7dc5743f, __VMLINUX_SYMBOL_STR(sas_parse_pr_out_transport_id) },
	{ 0x3aa15ce2, __VMLINUX_SYMBOL_STR(iscsi_parse_pr_out_transport_id) },
	{ 0xa4649b9d, __VMLINUX_SYMBOL_STR(fc_parse_pr_out_transport_id) },
	{ 0xb9cb20c0, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5d776086, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x1d6b01de, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xe97e547, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x4fd3f2f9, __VMLINUX_SYMBOL_STR(core_tpg_register) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xd7396141, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x906a1721, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xc97feb3a, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x842955b, __VMLINUX_SYMBOL_STR(target_submit_cmd_map_sgls) },
	{ 0x5e498957, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x606347a, __VMLINUX_SYMBOL_STR(transport_generic_handle_tmr) },
	{ 0x1573c550, __VMLINUX_SYMBOL_STR(transport_lookup_tmr_lun) },
	{ 0x575fdd68, __VMLINUX_SYMBOL_STR(core_tmr_alloc_req) },
	{ 0x5de85cd9, __VMLINUX_SYMBOL_STR(transport_init_se_cmd) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xb9610059, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x36d68e33, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xd8342009, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x7768624e, __VMLINUX_SYMBOL_STR(scsi_track_queue_full) },
	{ 0xe4d97219, __VMLINUX_SYMBOL_STR(scsi_adjust_queue_depth) },
	{ 0xa10507e, __VMLINUX_SYMBOL_STR(blk_queue_init_tags) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3bb70d7, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0xf48ed813, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0xf71a7720, __VMLINUX_SYMBOL_STR(root_device_unregister) },
	{ 0x6c6c62f6, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0x3fc867de, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";

