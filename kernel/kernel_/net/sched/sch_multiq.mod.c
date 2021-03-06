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
	{ 0x35775ee3, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0xfac05a3a, __VMLINUX_SYMBOL_STR(register_qdisc) },
	{ 0x299d5dd5, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0x96ff773c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xfb0f1544, __VMLINUX_SYMBOL_STR(tc_classify) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd84bd671, __VMLINUX_SYMBOL_STR(tcf_destroy_chain) },
	{ 0xaa7d900a, __VMLINUX_SYMBOL_STR(pfifo_qdisc_ops) },
	{ 0x9e03c49d, __VMLINUX_SYMBOL_STR(qdisc_create_dflt) },
	{ 0x67995885, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0xeafd5723, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x462bba8f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x9c857eef, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdfcf0d1f, __VMLINUX_SYMBOL_STR(qdisc_tree_decrease_qlen) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xc98518f7, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0xf5b39591, __VMLINUX_SYMBOL_STR(gnet_stats_copy_queue) },
	{ 0x33496f83, __VMLINUX_SYMBOL_STR(gnet_stats_copy_basic) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

