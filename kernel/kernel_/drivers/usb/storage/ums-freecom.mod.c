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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa3e678b9, __VMLINUX_SYMBOL_STR(usb_stor_bulk_transfer_buf) },
	{ 0xfb75e5d5, __VMLINUX_SYMBOL_STR(usb_stor_post_reset) },
	{ 0x5f43f3c2, __VMLINUX_SYMBOL_STR(usb_stor_control_msg) },
	{ 0xfcf88c68, __VMLINUX_SYMBOL_STR(usb_stor_disconnect) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf28a4ab0, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb1747066, __VMLINUX_SYMBOL_STR(usb_stor_probe2) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x4142845b, __VMLINUX_SYMBOL_STR(usb_stor_pre_reset) },
	{ 0x30557ae0, __VMLINUX_SYMBOL_STR(usb_stor_reset_resume) },
	{ 0x2b9d4051, __VMLINUX_SYMBOL_STR(usb_stor_suspend) },
	{ 0x84f99931, __VMLINUX_SYMBOL_STR(usb_stor_probe1) },
	{ 0xc2504ffb, __VMLINUX_SYMBOL_STR(usb_stor_resume) },
	{ 0x534a9b0c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xcc28a293, __VMLINUX_SYMBOL_STR(usb_stor_bulk_srb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v07ABpFC01d*dc*dsc*dp*ic*isc*ip*in*");
