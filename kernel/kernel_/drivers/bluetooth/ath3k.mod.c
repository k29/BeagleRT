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
	{ 0xf28a4ab0, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x534a9b0c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x27363302, __VMLINUX_SYMBOL_STR(usb_match_id) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3dbc07f4, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xde35a016, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x94270bf5, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb61a0c3b, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x61f9abe7, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("usb:v0CF3p3000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pE019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE03Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p311Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p3004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p311Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p817Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3375d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp3004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp3005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp3006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp300Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3362d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pE004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pE005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0219d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3393d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE04Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE04Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04C5p1330d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p3121d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pE003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE05Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE02Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE03Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE036d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9EB784B72279078C38A6CDC");
