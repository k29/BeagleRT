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
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x1c4c2c68, __VMLINUX_SYMBOL_STR(sysfs_create_bin_file) },
	{ 0x3dc1e25e, __VMLINUX_SYMBOL_STR(devm_rtc_device_register) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x9c7e5296, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x615eb337, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xe2499984, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0xb2aa5b05, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x6d83952a, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xbe843ee7, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x5838f6c9, __VMLINUX_SYMBOL_STR(rtc_valid_tm) },
	{ 0xb6936ffe, __VMLINUX_SYMBOL_STR(_bcd2bin) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x80ca5026, __VMLINUX_SYMBOL_STR(_bin2bcd) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xac8f37b2, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x272666ea, __VMLINUX_SYMBOL_STR(sysfs_remove_bin_file) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";
