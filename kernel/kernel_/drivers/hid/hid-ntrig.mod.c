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
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x77b969ca, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0xfc5938a4, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xadaec9e7, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x7a973ad5, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x61f9abe7, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xba9182cf, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0x74c7c3f6, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x9c7e5296, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x617ee10d, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0xb2b7c4e1, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x5cd0442c, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf6baae0c, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v00001B96p00000001");
MODULE_ALIAS("hid:b0003g*v00001B96p00000003");
MODULE_ALIAS("hid:b0003g*v00001B96p00000004");
MODULE_ALIAS("hid:b0003g*v00001B96p00000005");
MODULE_ALIAS("hid:b0003g*v00001B96p00000006");
MODULE_ALIAS("hid:b0003g*v00001B96p00000007");
MODULE_ALIAS("hid:b0003g*v00001B96p00000008");
MODULE_ALIAS("hid:b0003g*v00001B96p00000009");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000A");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000B");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000C");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000D");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000E");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000F");
MODULE_ALIAS("hid:b0003g*v00001B96p00000010");
MODULE_ALIAS("hid:b0003g*v00001B96p00000011");
MODULE_ALIAS("hid:b0003g*v00001B96p00000012");
MODULE_ALIAS("hid:b0003g*v00001B96p00000013");
MODULE_ALIAS("hid:b0003g*v00001B96p00000014");
