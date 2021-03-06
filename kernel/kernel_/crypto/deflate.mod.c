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
	{ 0x77ecac9f, __VMLINUX_SYMBOL_STR(zlib_inflateEnd) },
	{ 0xaf64ad0d, __VMLINUX_SYMBOL_STR(zlib_deflate) },
	{ 0x48034724, __VMLINUX_SYMBOL_STR(zlib_deflateReset) },
	{ 0x881039d0, __VMLINUX_SYMBOL_STR(zlib_inflate) },
	{ 0x3ed63055, __VMLINUX_SYMBOL_STR(zlib_inflateReset) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xf741c793, __VMLINUX_SYMBOL_STR(zlib_deflateEnd) },
	{ 0xce5ac24f, __VMLINUX_SYMBOL_STR(zlib_inflate_workspacesize) },
	{ 0x4211c3c1, __VMLINUX_SYMBOL_STR(zlib_inflateInit2) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x315c65fd, __VMLINUX_SYMBOL_STR(zlib_deflateInit2) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xe9f7149c, __VMLINUX_SYMBOL_STR(zlib_deflate_workspacesize) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

