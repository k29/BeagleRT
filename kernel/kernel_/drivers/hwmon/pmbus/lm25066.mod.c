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
	{ 0x327e7baa, __VMLINUX_SYMBOL_STR(pmbus_do_remove) },
	{ 0x46a20e87, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x40eaffb0, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x154dcf5c, __VMLINUX_SYMBOL_STR(pmbus_read_byte_data) },
	{ 0x1663ca4, __VMLINUX_SYMBOL_STR(pmbus_read_word_data) },
	{ 0x6c2b828, __VMLINUX_SYMBOL_STR(pmbus_write_byte) },
	{ 0x342d6cbb, __VMLINUX_SYMBOL_STR(pmbus_clear_cache) },
	{ 0xc2ddcb8e, __VMLINUX_SYMBOL_STR(pmbus_write_word_data) },
	{ 0x3cda3ca8, __VMLINUX_SYMBOL_STR(pmbus_get_driver_info) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x252281b9, __VMLINUX_SYMBOL_STR(pmbus_do_probe) },
	{ 0xf8892a00, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x6d83952a, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pmbus_core";

MODULE_ALIAS("i2c:lm25056");
MODULE_ALIAS("i2c:lm25063");
MODULE_ALIAS("i2c:lm25066");
MODULE_ALIAS("i2c:lm5064");
MODULE_ALIAS("i2c:lm5066");
