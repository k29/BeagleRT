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
	{ 0xb36060f1, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xe9a8d0bc, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xcdab33b, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x5b400400, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x2323e069, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x7152da17, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0x72b4f99c, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0x4caf9af7, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0x6595f14c, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xaf2d90af, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0xf82ba0e3, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x1730d522, __VMLINUX_SYMBOL_STR(af_alg_release) },
	{ 0x3aced2e1, __VMLINUX_SYMBOL_STR(af_alg_unregister_type) },
	{ 0xa814892a, __VMLINUX_SYMBOL_STR(af_alg_register_type) },
	{ 0x99cb4efd, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0x94b5218f, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xd18e7fb3, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0x8f660b77, __VMLINUX_SYMBOL_STR(af_alg_complete) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x853734e9, __VMLINUX_SYMBOL_STR(sock_kmalloc) },
	{ 0xda460bfa, __VMLINUX_SYMBOL_STR(sock_kfree_s) },
	{ 0x61ccbf81, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x15f1c177, __VMLINUX_SYMBOL_STR(af_alg_accept) },
	{ 0x215aa16f, __VMLINUX_SYMBOL_STR(af_alg_free_sg) },
	{ 0x1f7676ed, __VMLINUX_SYMBOL_STR(af_alg_make_sg) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x977bb85f, __VMLINUX_SYMBOL_STR(crypto_ahash_final) },
	{ 0x9ceb163c, __VMLINUX_SYMBOL_STR(memcpy_toiovec) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27f4b6f3, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xd954ef95, __VMLINUX_SYMBOL_STR(af_alg_wait_for_completion) },
	{ 0x5bfee907, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x5eff6257, __VMLINUX_SYMBOL_STR(crypto_ahash_finup) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x9689e524, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=af_alg";

