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
	{ 0x1d77b0f8, __VMLINUX_SYMBOL_STR(unix_socket_table) },
	{ 0x7c6a49ce, __VMLINUX_SYMBOL_STR(unix_table_lock) },
	{ 0x8342af4d, __VMLINUX_SYMBOL_STR(sock_diag_put_meminfo) },
	{ 0xd4af1cbc, __VMLINUX_SYMBOL_STR(sock_diag_unregister) },
	{ 0xb7777466, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0xeafd5723, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x9913a6c9, __VMLINUX_SYMBOL_STR(sock_diag_register) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x462bba8f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x308d0a8e, __VMLINUX_SYMBOL_STR(unix_peer_get) },
	{ 0x61ccbf81, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xeb6d4bac, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xd92a6cca, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x3156fb33, __VMLINUX_SYMBOL_STR(unix_inq_len) },
	{ 0x96ff773c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x506691f1, __VMLINUX_SYMBOL_STR(sock_diag_check_cookie) },
	{ 0xe0386548, __VMLINUX_SYMBOL_STR(unix_outq_len) },
	{ 0xd14bc4d9, __VMLINUX_SYMBOL_STR(sock_diag_save_cookie) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x15e4592c, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0xb6ab2226, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xd08853ff, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

