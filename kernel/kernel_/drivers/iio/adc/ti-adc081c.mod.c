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
	{ 0xc0155b45, __VMLINUX_SYMBOL_STR(regulator_get_voltage) },
	{ 0xbfe3ece9, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xcc0ac64e, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0xd2f853c8, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0xf00af5f6, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x619f9b6b, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x1496c02a, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x744de4f6, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";

MODULE_ALIAS("of:N*T*Cti,adc081c*");
MODULE_ALIAS("i2c:adc081c");