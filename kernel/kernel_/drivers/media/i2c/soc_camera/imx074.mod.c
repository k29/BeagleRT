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
	{ 0xcaaaa119, __VMLINUX_SYMBOL_STR(v4l2_async_unregister_subdev) },
	{ 0xe6837fa6, __VMLINUX_SYMBOL_STR(v4l2_clk_put) },
	{ 0x5d328015, __VMLINUX_SYMBOL_STR(v4l2_async_register_subdev) },
	{ 0x427f56e4, __VMLINUX_SYMBOL_STR(soc_camera_power_init) },
	{ 0x7a973ad5, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4f5b974a, __VMLINUX_SYMBOL_STR(v4l2_clk_get) },
	{ 0xdd9ab3c4, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0x6d83952a, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x9c7e5296, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9b9c38bd, __VMLINUX_SYMBOL_STR(soc_camera_power_off) },
	{ 0xd70173fe, __VMLINUX_SYMBOL_STR(soc_camera_power_on) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xe2ef4525, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x172d15a1, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=soc_camera";

MODULE_ALIAS("i2c:imx074");