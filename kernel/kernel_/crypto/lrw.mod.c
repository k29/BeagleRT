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
	{ 0xd07a5615, __VMLINUX_SYMBOL_STR(crypto_attr_alg2) },
	{ 0xd16712f3, __VMLINUX_SYMBOL_STR(crypto_check_attr_type) },
	{ 0x92149647, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x3755f990, __VMLINUX_SYMBOL_STR(gf128mul_init_64k_bbe) },
	{ 0xf068f985, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0x467f1047, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0xa0e5a5dc, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0x384ef9ce, __VMLINUX_SYMBOL_STR(gf128mul_64k_bbe) },
	{ 0xd60736ec, __VMLINUX_SYMBOL_STR(gf128mul_free_64k) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9052e199, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x81e583bb, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0x1899700a, __VMLINUX_SYMBOL_STR(crypto_alloc_instance) },
	{ 0x94b5218f, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4c8ee111, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xa3c2b593, __VMLINUX_SYMBOL_STR(blkcipher_walk_done) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gf128mul";

