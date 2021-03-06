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
	{ 0xb3e81f85, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x2d2fbe9e, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x5cd0442c, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x57674fd7, __VMLINUX_SYMBOL_STR(__sw_hweight16) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x615eb337, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x7a973ad5, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x66611d97, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x982f2f12, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x11d06f76, __VMLINUX_SYMBOL_STR(matrix_keypad_build_keymap) },
	{ 0xb2aa5b05, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x9c7e5296, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x730bf93b, __VMLINUX_SYMBOL_STR(matrix_keypad_parse_of_params) },
	{ 0xfa47bb42, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0x6d83952a, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xc0823e4c, __VMLINUX_SYMBOL_STR(twl_i2c_write) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe2ef4525, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x7c98845d, __VMLINUX_SYMBOL_STR(twl_i2c_read) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,twl4030-keypad*");
