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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb0b5f2e3, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xe57320e9, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xa1dcfaf2, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0xe26012bc, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xc7170b52, __VMLINUX_SYMBOL_STR(nf_xfrm_me_harder) },
	{ 0x37fe0bfa, __VMLINUX_SYMBOL_STR(ip_route_me_harder) },
	{ 0xf6ffa7d6, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x88139e5b, __VMLINUX_SYMBOL_STR(__nf_ct_kill_acct) },
	{ 0xe209f1fe, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0x72d07374, __VMLINUX_SYMBOL_STR(nf_nat_packet) },
	{ 0xdb6089d4, __VMLINUX_SYMBOL_STR(ipt_do_table) },
	{ 0x299fa71c, __VMLINUX_SYMBOL_STR(nf_nat_icmp_reply_translation) },
	{ 0x463a2863, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x31df8749, __VMLINUX_SYMBOL_STR(ipt_register_table) },
	{ 0x75706e0, __VMLINUX_SYMBOL_STR(ipt_alloc_initial_table) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x6fa143a9, __VMLINUX_SYMBOL_STR(ipt_unregister_table) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat,nf_conntrack,ip_tables,nf_nat_ipv4";

