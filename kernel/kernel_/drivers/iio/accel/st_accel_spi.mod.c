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
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x52ea9adc, __VMLINUX_SYMBOL_STR(st_accel_common_probe) },
	{ 0x1b434f77, __VMLINUX_SYMBOL_STR(st_sensors_spi_configure) },
	{ 0x619f9b6b, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb0dc7b42, __VMLINUX_SYMBOL_STR(st_accel_common_remove) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=st_accel,st_sensors_spi,industrialio";

MODULE_ALIAS("spi:lsm303dlh_accel");
MODULE_ALIAS("spi:lsm303dlhc_accel");
MODULE_ALIAS("spi:lis3dh");
MODULE_ALIAS("spi:lsm330d_accel");
MODULE_ALIAS("spi:lsm330dl_accel");
MODULE_ALIAS("spi:lsm330dlc_accel");
MODULE_ALIAS("spi:lis331dlh");
MODULE_ALIAS("spi:lsm303dl_accel");
MODULE_ALIAS("spi:lsm303dlm_accel");
MODULE_ALIAS("spi:lsm330_accel");
