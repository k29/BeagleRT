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
	{ 0x9c221417, __VMLINUX_SYMBOL_STR(w1_reset_select_slave) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5b72009f, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20df2681, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x464072d2, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x97e21b64, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7a6cc893, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x3171197e, __VMLINUX_SYMBOL_STR(w1_write_block) },
	{ 0x227f24e8, __VMLINUX_SYMBOL_STR(w1_write_8) },
	{ 0x2feb4e28, __VMLINUX_SYMBOL_STR(w1_read_block) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8e5c580a, __VMLINUX_SYMBOL_STR(ida_init) },
	{ 0xeb9e7cdd, __VMLINUX_SYMBOL_STR(ida_destroy) },
	{ 0xe62ae140, __VMLINUX_SYMBOL_STR(w1_register_family) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xb295e6de, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0xe0070624, __VMLINUX_SYMBOL_STR(w1_unregister_family) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";

