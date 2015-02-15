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
	{ 0xbbf64bdb, __VMLINUX_SYMBOL_STR(nf_ct_tcp_seqadj_set) },
	{ 0xe57320e9, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xdfcdd60e, __VMLINUX_SYMBOL_STR(nfq_ct_hook) },
	{ 0xb8ed8809, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_unregister) },
	{ 0xe26012bc, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x45ba7fbc, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_register) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xb9b3afc4, __VMLINUX_SYMBOL_STR(nf_ct_unlink_expect_report) },
	{ 0x10ef6cfe, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0x2e51cc84, __VMLINUX_SYMBOL_STR(__nf_ct_expect_find) },
	{ 0x72161080, __VMLINUX_SYMBOL_STR(nf_ct_delete) },
	{ 0x4b85f4a0, __VMLINUX_SYMBOL_STR(nf_conntrack_flush_report) },
	{ 0xc18ac88d, __VMLINUX_SYMBOL_STR(nf_ct_expect_hsize) },
	{ 0x73f5bcb7, __VMLINUX_SYMBOL_STR(nf_conntrack_free) },
	{ 0x9a30633f, __VMLINUX_SYMBOL_STR(nf_conntrack_hash_check_insert) },
	{ 0x2447533c, __VMLINUX_SYMBOL_STR(ktime_get_real) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x463a2863, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0x4c0f6198, __VMLINUX_SYMBOL_STR(__nf_ct_try_assign_helper) },
	{ 0xeaccc4ca, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0x898c18c4, __VMLINUX_SYMBOL_STR(nf_conntrack_alloc) },
	{ 0xacbe29b, __VMLINUX_SYMBOL_STR(nfnetlink_parse_nat_setup_hook) },
	{ 0x5ce3b588, __VMLINUX_SYMBOL_STR(nfnl_lock) },
	{ 0xdb065657, __VMLINUX_SYMBOL_STR(nfnl_unlock) },
	{ 0x5c578f98, __VMLINUX_SYMBOL_STR(nf_ct_expect_register_notifier) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x258ba667, __VMLINUX_SYMBOL_STR(nf_conntrack_register_notifier) },
	{ 0xdf519f57, __VMLINUX_SYMBOL_STR(nfnetlink_set_err) },
	{ 0xe014f217, __VMLINUX_SYMBOL_STR(nfnetlink_send) },
	{ 0x82c09191, __VMLINUX_SYMBOL_STR(nfnetlink_has_listeners) },
	{ 0x9dc7a4fc, __VMLINUX_SYMBOL_STR(nf_conntrack_unregister_notifier) },
	{ 0xb4489a88, __VMLINUX_SYMBOL_STR(nf_ct_expect_unregister_notifier) },
	{ 0x385c21a5, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x7d75d1a4, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_name) },
	{ 0xca232837, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0x2b479f57, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_symbol) },
	{ 0x488a52ee, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x4b4e2490, __VMLINUX_SYMBOL_STR(__nf_conntrack_helper_find) },
	{ 0xf884ee6b, __VMLINUX_SYMBOL_STR(nf_ct_remove_expectations) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x294d6dae, __VMLINUX_SYMBOL_STR(nf_connlabels_replace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x96ff773c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xeb6d4bac, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xd92a6cca, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xff6caba1, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x347013de, __VMLINUX_SYMBOL_STR(nla_validate) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xb23f3373, __VMLINUX_SYMBOL_STR(nf_conntrack_lock) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x1176e07f, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x7c62d042, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xeafd5723, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xb6ab2226, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x67d8d35, __VMLINUX_SYMBOL_STR(security_release_secctx) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xefdd70ce, __VMLINUX_SYMBOL_STR(security_secid_to_secctx) },
	{ 0xa6d7b19e, __VMLINUX_SYMBOL_STR(nf_conntrack_l3proto_generic) },
	{ 0x8378ac36, __VMLINUX_SYMBOL_STR(nf_ct_l3protos) },
	{ 0x3efa7b23, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
	{ 0x462bba8f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xd08853ff, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nfnetlink";

