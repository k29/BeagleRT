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
	{ 0x467f1047, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0xf0552216, __VMLINUX_SYMBOL_STR(crypto_unregister_algs) },
	{ 0x71ff9ecc, __VMLINUX_SYMBOL_STR(crypto_register_algs) },
	{ 0xa3c2b593, __VMLINUX_SYMBOL_STR(blkcipher_walk_done) },
	{ 0x4c8ee111, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

