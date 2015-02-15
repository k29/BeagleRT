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
	{ 0x46a20e87, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x40eaffb0, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xb9f2de69, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0xee11ac68, __VMLINUX_SYMBOL_STR(lis3lv02d_init_device) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xb064fab6, __VMLINUX_SYMBOL_STR(regulator_bulk_get) },
	{ 0x5a387955, __VMLINUX_SYMBOL_STR(lis3lv02d_init_dt) },
	{ 0x385cc8ef, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xa800e71c, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0x738601b8, __VMLINUX_SYMBOL_STR(lis3_dev) },
	{ 0x70332fe6, __VMLINUX_SYMBOL_STR(regulator_bulk_free) },
	{ 0xf1474366, __VMLINUX_SYMBOL_STR(lis3lv02d_remove_fs) },
	{ 0x9a87252e, __VMLINUX_SYMBOL_STR(lis3lv02d_joystick_disable) },
	{ 0x1219ee9b, __VMLINUX_SYMBOL_STR(lis3lv02d_poweroff) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x836a30a0, __VMLINUX_SYMBOL_STR(lis3lv02d_poweron) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xa221be5c, __VMLINUX_SYMBOL_STR(i2c_smbus_read_i2c_block_data) },
	{ 0xf8892a00, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x146c6fe9, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lis3lv02d";

MODULE_ALIAS("i2c:lis3lv02d");
MODULE_ALIAS("i2c:lis331dlh");
MODULE_ALIAS("of:N*T*Cst,lis3lv02d*");
