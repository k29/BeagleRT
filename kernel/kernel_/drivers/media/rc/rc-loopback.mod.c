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
	{ 0xd852cee1, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0xde2ad0dd, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0xbb327359, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0x3e98290, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x28c5e686, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0xf4b06c3f, __VMLINUX_SYMBOL_STR(ir_raw_event_store_with_filter) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";
