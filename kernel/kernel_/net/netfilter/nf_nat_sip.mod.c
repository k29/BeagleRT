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
	{ 0xad4734a, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa3eabe3e, __VMLINUX_SYMBOL_STR(nf_nat_sip_hooks) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xdf9a6606, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0x4a23902d, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0x62d821bd, __VMLINUX_SYMBOL_STR(ct_sip_parse_numerical_param) },
	{ 0x37f97b0d, __VMLINUX_SYMBOL_STR(ct_sip_parse_address_param) },
	{ 0x10da1a80, __VMLINUX_SYMBOL_STR(ct_sip_parse_request) },
	{ 0x4e830a3e, __VMLINUX_SYMBOL_STR(strnicmp) },
	{ 0xe5db8163, __VMLINUX_SYMBOL_STR(ct_sip_parse_header_uri) },
	{ 0x7720e8ff, __VMLINUX_SYMBOL_STR(nf_ct_seqadj_set) },
	{ 0xd993eb0f, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0x75c6208d, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x385c21a5, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xfe57b31a, __VMLINUX_SYMBOL_STR(ct_sip_get_header) },
	{ 0xde525c7d, __VMLINUX_SYMBOL_STR(ct_sip_get_sdp_header) },
	{ 0x4cafecde, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0xb2714f1d, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe209f1fe, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_sip,nf_nat";

