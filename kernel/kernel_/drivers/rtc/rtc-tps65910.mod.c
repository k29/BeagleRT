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
	{ 0x91f6d481, __VMLINUX_SYMBOL_STR(rtc_update_irq) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x3dc1e25e, __VMLINUX_SYMBOL_STR(devm_rtc_device_register) },
	{ 0x82cd1f5c, __VMLINUX_SYMBOL_STR(device_set_wakeup_capable) },
	{ 0x615eb337, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xe2ef4525, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xb2aa5b05, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x6d83952a, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xad5eb9b, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xb6936ffe, __VMLINUX_SYMBOL_STR(_bcd2bin) },
	{ 0x8ba0eeca, __VMLINUX_SYMBOL_STR(regmap_bulk_read) },
	{ 0xe9a20051, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9c7e5296, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xda45f865, __VMLINUX_SYMBOL_STR(regmap_bulk_write) },
	{ 0x80ca5026, __VMLINUX_SYMBOL_STR(_bin2bcd) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8f3c01cb, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";
