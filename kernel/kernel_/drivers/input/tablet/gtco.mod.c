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
	{ 0xfb2b5f57, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x5cd0442c, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6b52ad2b, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x66611d97, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xf6baae0c, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x61f9abe7, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9924c496, __VMLINUX_SYMBOL_STR(__usb_get_extra_descriptor) },
	{ 0x36834220, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x9c7e5296, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8e6104ac, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xb25a5523, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xf7f67021, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7a973ad5, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7401d956, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xd867536e, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x5b445bdc, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9bc9dc23, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v078Cp0400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v078Cp0401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v078Cp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v078Cp1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v078Cp1002d*dc*dsc*dp*ic*isc*ip*in*");