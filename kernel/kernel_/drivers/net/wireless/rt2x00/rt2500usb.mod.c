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
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xbfd34195, __VMLINUX_SYMBOL_STR(rt2x00usb_resume) },
	{ 0x3bde2719, __VMLINUX_SYMBOL_STR(rt2x00usb_suspend) },
	{ 0xcde6a0c, __VMLINUX_SYMBOL_STR(rt2x00usb_disconnect) },
	{ 0xb69606a3, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0x45d571ed, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0x967622dc, __VMLINUX_SYMBOL_STR(rt2x00mac_get_antenna) },
	{ 0x65b164f9, __VMLINUX_SYMBOL_STR(rt2x00mac_set_antenna) },
	{ 0xcdf1b441, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0xab9573ba, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0xd5e7f311, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0x6a338b74, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0x68c55760, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0xb6ebf08d, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0x962a7947, __VMLINUX_SYMBOL_STR(rt2x00mac_set_key) },
	{ 0xb94749f, __VMLINUX_SYMBOL_STR(rt2x00mac_set_tim) },
	{ 0x9713c5e1, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0x59b5ffb5, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0xe0e49be5, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0x9a3c5556, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0xe4b2f9e6, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0xda714a00, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0xb8d3a404, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0xfa35926f, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0x56f781c5, __VMLINUX_SYMBOL_STR(rt2x00usb_flush_queue) },
	{ 0xa2bbbe7a, __VMLINUX_SYMBOL_STR(rt2x00usb_kick_queue) },
	{ 0xe9da9114, __VMLINUX_SYMBOL_STR(rt2x00usb_watchdog) },
	{ 0x1d8b7e6c, __VMLINUX_SYMBOL_STR(rt2x00usb_clear_entry) },
	{ 0xd28e67ee, __VMLINUX_SYMBOL_STR(rt2x00usb_uninitialize) },
	{ 0x7fb6c90b, __VMLINUX_SYMBOL_STR(rt2x00usb_initialize) },
	{ 0xf28a4ab0, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x534a9b0c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7a973ad5, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x4d7a69cd, __VMLINUX_SYMBOL_STR(rt2x00usb_disable_radio) },
	{ 0x22c5ed3b, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x9c7e5296, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf72183d2, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_req_buff_lock) },
	{ 0x6a12736, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xfb2b5f57, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xa08ebea8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xeafd5723, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6742025d, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request_buff) },
	{ 0x66a67d59, __VMLINUX_SYMBOL_STR(rt2x00usb_probe) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00usb,rt2x00lib";

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5C01515AC42CE4076B7D5CF");
