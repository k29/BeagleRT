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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x77b969ca, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0xc5b0660d, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xfc5938a4, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0xe136f61, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xfbcd96fa, __VMLINUX_SYMBOL_STR(roccat_common2_sysfs_read) },
	{ 0x8ce71583, __VMLINUX_SYMBOL_STR(roccat_common2_sysfs_write) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8d768597, __VMLINUX_SYMBOL_STR(roccat_connect) },
	{ 0x4870b60c, __VMLINUX_SYMBOL_STR(roccat_common2_device_init_struct) },
	{ 0x9c7e5296, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xba9182cf, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0x74c7c3f6, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0x617ee10d, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2f622ea1, __VMLINUX_SYMBOL_STR(roccat_disconnect) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8c4181ec, __VMLINUX_SYMBOL_STR(roccat_report_event) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid-roccat-common,hid-roccat";

MODULE_ALIAS("hid:b0003g*v00001E7Dp00003138");
MODULE_ALIAS("hid:b0003g*v00001E7Dp000031CE");
MODULE_ALIAS("hid:b0003g*v00001E7Dp00003232");
