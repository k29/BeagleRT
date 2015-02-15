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
	{ 0xf068f985, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0x9052e199, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x92149647, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x7d2041f, __VMLINUX_SYMBOL_STR(shash_free_instance) },
	{ 0xb587a05f, __VMLINUX_SYMBOL_STR(shash_register_instance) },
	{ 0x250f7dfe, __VMLINUX_SYMBOL_STR(crypto_init_shash_spawn) },
	{ 0xe80924bb, __VMLINUX_SYMBOL_STR(crypto_alloc_instance2) },
	{ 0x70d1c7f3, __VMLINUX_SYMBOL_STR(shash_attr_alg) },
	{ 0xd16712f3, __VMLINUX_SYMBOL_STR(crypto_check_attr_type) },
	{ 0xf97fb734, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x94b5218f, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x1e980ade, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0x5a32d78e, __VMLINUX_SYMBOL_STR(crypto_shash_finup) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x93992631, __VMLINUX_SYMBOL_STR(crypto_shash_digest) },
	{ 0xfb2bc7f2, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

