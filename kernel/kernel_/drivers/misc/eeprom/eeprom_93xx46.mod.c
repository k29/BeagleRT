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
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xbfc112d0, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x7a973ad5, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x1c4c2c68, __VMLINUX_SYMBOL_STR(sysfs_create_bin_file) },
	{ 0xe8f3f914, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x5daf0e44, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9c7e5296, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x6be96bf6, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x272666ea, __VMLINUX_SYMBOL_STR(sysfs_remove_bin_file) },
	{ 0x38dc6ecd, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";
