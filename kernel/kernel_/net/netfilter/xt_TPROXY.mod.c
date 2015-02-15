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
	{ 0x5690e563, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0x5f36e6b8, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0x28e1d223, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0x23d95041, __VMLINUX_SYMBOL_STR(udp4_lib_lookup) },
	{ 0x3b953ba8, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
	{ 0xab728773, __VMLINUX_SYMBOL_STR(tcp_death_row) },
	{ 0xabb9423b, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0x8b6022fc, __VMLINUX_SYMBOL_STR(inet_twsk_deschedule) },
	{ 0xdcd309ee, __VMLINUX_SYMBOL_STR(inet6_lookup_listener) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc130a8f, __VMLINUX_SYMBOL_STR(udp6_lib_lookup) },
	{ 0xf67e9226, __VMLINUX_SYMBOL_STR(__inet6_lookup_established) },
	{ 0xe6bcf51f, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x93acc846, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0x4170823e, __VMLINUX_SYMBOL_STR(inet_twsk_put) },
	{ 0x61ccbf81, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x64631048, __VMLINUX_SYMBOL_STR(sock_edemux) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_defrag_ipv6,nf_defrag_ipv4";

