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
	{ 0xa2606438, __VMLINUX_SYMBOL_STR(crypto_unregister_alg) },
	{ 0x3b3abfa2, __VMLINUX_SYMBOL_STR(crypto_register_alg) },
	{ 0x56b63670, __VMLINUX_SYMBOL_STR(lzo1x_1_compress) },
	{ 0xf30fda27, __VMLINUX_SYMBOL_STR(lzo1x_decompress_safe) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

