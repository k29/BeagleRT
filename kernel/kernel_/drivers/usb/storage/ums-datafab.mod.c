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
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9d6ee9b3, __VMLINUX_SYMBOL_STR(usb_stor_set_xfer_buf) },
	{ 0xa3e678b9, __VMLINUX_SYMBOL_STR(usb_stor_bulk_transfer_buf) },
	{ 0x548a40e9, __VMLINUX_SYMBOL_STR(usb_stor_access_xfer_buf) },
	{ 0xfb75e5d5, __VMLINUX_SYMBOL_STR(usb_stor_post_reset) },
	{ 0xfcf88c68, __VMLINUX_SYMBOL_STR(usb_stor_disconnect) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf28a4ab0, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xb1747066, __VMLINUX_SYMBOL_STR(usb_stor_probe2) },
	{ 0xe507f0b8, __VMLINUX_SYMBOL_STR(fill_inquiry_response) },
	{ 0x4142845b, __VMLINUX_SYMBOL_STR(usb_stor_pre_reset) },
	{ 0x30557ae0, __VMLINUX_SYMBOL_STR(usb_stor_reset_resume) },
	{ 0x2b9d4051, __VMLINUX_SYMBOL_STR(usb_stor_suspend) },
	{ 0x84f99931, __VMLINUX_SYMBOL_STR(usb_stor_probe1) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc2504ffb, __VMLINUX_SYMBOL_STR(usb_stor_resume) },
	{ 0x534a9b0c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xc811932a, __VMLINUX_SYMBOL_STR(usb_stor_Bulk_reset) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v07C4pA000d001[0-5]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C4pA000d000*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C4pA001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C4pA002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C4pA003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C4pA004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C4pA005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C4pA006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C4pA109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C4pA10Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C0BpA109d*dc*dsc*dp*ic*isc*ip*in*");
