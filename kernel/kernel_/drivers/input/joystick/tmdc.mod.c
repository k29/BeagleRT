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
	{ 0xe18bf15a, __VMLINUX_SYMBOL_STR(gameport_unregister_driver) },
	{ 0x53a53338, __VMLINUX_SYMBOL_STR(__gameport_register_driver) },
	{ 0x5cd0442c, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xc5a04f4b, __VMLINUX_SYMBOL_STR(gameport_start_polling) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8f2ada4c, __VMLINUX_SYMBOL_STR(gameport_stop_polling) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6b52ad2b, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x66611d97, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xf6baae0c, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf7f67021, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x318d4a07, __VMLINUX_SYMBOL_STR(gameport_open) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x62276d50, __VMLINUX_SYMBOL_STR(gameport_close) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5b445bdc, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xac8f37b2, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gameport";

