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
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xdf9a6606, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0x97727d54, __VMLINUX_SYMBOL_STR(nat_q931_hook) },
	{ 0x5bdc9150, __VMLINUX_SYMBOL_STR(nat_callforwarding_hook) },
	{ 0xe23facdc, __VMLINUX_SYMBOL_STR(nat_h245_hook) },
	{ 0x5bb0071e, __VMLINUX_SYMBOL_STR(nat_t120_hook) },
	{ 0xfe5b239a, __VMLINUX_SYMBOL_STR(nat_rtp_rtcp_hook) },
	{ 0xe43e4d74, __VMLINUX_SYMBOL_STR(set_ras_addr_hook) },
	{ 0xb429f919, __VMLINUX_SYMBOL_STR(set_sig_addr_hook) },
	{ 0x4a30c7b, __VMLINUX_SYMBOL_STR(set_h225_addr_hook) },
	{ 0x9f17e185, __VMLINUX_SYMBOL_STR(set_h245_addr_hook) },
	{ 0xad4734a, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0x75c6208d, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x29ab37de, __VMLINUX_SYMBOL_STR(get_h225_addr) },
	{ 0x385c21a5, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x4cafecde, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0xe6bcf51f, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xb2714f1d, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0xe3e93c3, __VMLINUX_SYMBOL_STR(nf_nat_follow_master) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe209f1fe, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_h323,nf_nat";

