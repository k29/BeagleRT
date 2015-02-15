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
	{ 0xfb75e5d5, __VMLINUX_SYMBOL_STR(usb_stor_post_reset) },
	{ 0x1bc3edc2, __VMLINUX_SYMBOL_STR(usb_stor_sense_invalidCDB) },
	{ 0xfcf88c68, __VMLINUX_SYMBOL_STR(usb_stor_disconnect) },
	{ 0x12a3788e, __VMLINUX_SYMBOL_STR(scsi_eh_restore_cmnd) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf28a4ab0, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xb1747066, __VMLINUX_SYMBOL_STR(usb_stor_probe2) },
	{ 0x6888c8bc, __VMLINUX_SYMBOL_STR(usb_stor_transparent_scsi_command) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4142845b, __VMLINUX_SYMBOL_STR(usb_stor_pre_reset) },
	{ 0x30557ae0, __VMLINUX_SYMBOL_STR(usb_stor_reset_resume) },
	{ 0x2b9d4051, __VMLINUX_SYMBOL_STR(usb_stor_suspend) },
	{ 0x84f99931, __VMLINUX_SYMBOL_STR(usb_stor_probe1) },
	{ 0xb1027709, __VMLINUX_SYMBOL_STR(scsi_eh_prep_cmnd) },
	{ 0xc2504ffb, __VMLINUX_SYMBOL_STR(usb_stor_resume) },
	{ 0x534a9b0c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v04B4p6830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p6831d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14CDp6116d0160dc*dsc*dp*ic*isc*ip*in*");
