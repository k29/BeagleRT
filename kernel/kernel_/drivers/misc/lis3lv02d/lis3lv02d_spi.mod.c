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
	{ 0x3fc867de, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x96c48c48, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0x5a387955, __VMLINUX_SYMBOL_STR(lis3lv02d_init_dt) },
	{ 0xee11ac68, __VMLINUX_SYMBOL_STR(lis3lv02d_init_device) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x385cc8ef, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x8d7ea373, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x4a6aa633, __VMLINUX_SYMBOL_STR(spi_write_then_read) },
	{ 0x6be96bf6, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf1474366, __VMLINUX_SYMBOL_STR(lis3lv02d_remove_fs) },
	{ 0x9a87252e, __VMLINUX_SYMBOL_STR(lis3lv02d_joystick_disable) },
	{ 0x738601b8, __VMLINUX_SYMBOL_STR(lis3_dev) },
	{ 0x1219ee9b, __VMLINUX_SYMBOL_STR(lis3lv02d_poweroff) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x836a30a0, __VMLINUX_SYMBOL_STR(lis3lv02d_poweron) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lis3lv02d";

MODULE_ALIAS("of:N*T*Cst,lis302dl-spi*");
