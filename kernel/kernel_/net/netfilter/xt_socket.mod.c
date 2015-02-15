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
	{ 0xe881a72, __VMLINUX_SYMBOL_STR(xt_unregister_matches) },
	{ 0x1ec7ea7e, __VMLINUX_SYMBOL_STR(xt_register_matches) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0x23d95041, __VMLINUX_SYMBOL_STR(udp4_lib_lookup) },
	{ 0x28e1d223, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0x3b953ba8, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xabb9423b, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7ef8343a, __VMLINUX_SYMBOL_STR(sock_gen_put) },
	{ 0xc130a8f, __VMLINUX_SYMBOL_STR(udp6_lib_lookup) },
	{ 0xd4b86897, __VMLINUX_SYMBOL_STR(inet6_lookup) },
	{ 0xfff672c3, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0xe6bcf51f, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x93acc846, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_defrag_ipv6,nf_defrag_ipv4";

