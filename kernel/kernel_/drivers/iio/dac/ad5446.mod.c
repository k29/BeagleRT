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
	{ 0xddc8ed01, __VMLINUX_SYMBOL_STR(iio_enum_available_read) },
	{ 0x65e91719, __VMLINUX_SYMBOL_STR(iio_enum_write) },
	{ 0xee68f496, __VMLINUX_SYMBOL_STR(iio_enum_read) },
	{ 0x46a20e87, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x3fc867de, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x40eaffb0, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x96c48c48, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0x6be96bf6, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x63636293, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0xcc0ac64e, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0xe2ef4525, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x619f9b6b, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0xc0155b45, __VMLINUX_SYMBOL_STR(regulator_get_voltage) },
	{ 0xd2f853c8, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0xf00af5f6, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x15f8c54f, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa8232c78, __VMLINUX_SYMBOL_STR(strtobool) },
	{ 0x1496c02a, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x744de4f6, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";

MODULE_ALIAS("i2c:ad5301");
MODULE_ALIAS("i2c:ad5311");
MODULE_ALIAS("i2c:ad5321");
MODULE_ALIAS("i2c:ad5602");
MODULE_ALIAS("i2c:ad5612");
MODULE_ALIAS("i2c:ad5622");
MODULE_ALIAS("spi:ad5300");
MODULE_ALIAS("spi:ad5310");
MODULE_ALIAS("spi:ad5320");
MODULE_ALIAS("spi:ad5444");
MODULE_ALIAS("spi:ad5446");
MODULE_ALIAS("spi:ad5450");
MODULE_ALIAS("spi:ad5451");
MODULE_ALIAS("spi:ad5452");
MODULE_ALIAS("spi:ad5453");
MODULE_ALIAS("spi:ad5512a");
MODULE_ALIAS("spi:ad5541a");
MODULE_ALIAS("spi:ad5542a");
MODULE_ALIAS("spi:ad5543");
MODULE_ALIAS("spi:ad5553");
MODULE_ALIAS("spi:ad5601");
MODULE_ALIAS("spi:ad5611");
MODULE_ALIAS("spi:ad5621");
MODULE_ALIAS("spi:ad5641");
MODULE_ALIAS("spi:ad5620-2500");
MODULE_ALIAS("spi:ad5620-1250");
MODULE_ALIAS("spi:ad5640-2500");
MODULE_ALIAS("spi:ad5640-1250");
MODULE_ALIAS("spi:ad5660-2500");
MODULE_ALIAS("spi:ad5660-1250");
MODULE_ALIAS("spi:ad5662");
