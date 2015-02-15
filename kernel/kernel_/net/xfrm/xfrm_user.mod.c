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
	{ 0xf7e561ab, __VMLINUX_SYMBOL_STR(xfrm_unregister_km) },
	{ 0xe57320e9, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xa6fe6b57, __VMLINUX_SYMBOL_STR(xfrm_register_km) },
	{ 0xe26012bc, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x6b793c2c, __VMLINUX_SYMBOL_STR(xfrm_state_delete) },
	{ 0xc599a772, __VMLINUX_SYMBOL_STR(security_xfrm_state_delete) },
	{ 0xf25916f0, __VMLINUX_SYMBOL_STR(xfrm_state_lookup_byaddr) },
	{ 0xaadae723, __VMLINUX_SYMBOL_STR(xfrm_find_acq) },
	{ 0x593d3acb, __VMLINUX_SYMBOL_STR(xfrm_alloc_spi) },
	{ 0xfc59df6, __VMLINUX_SYMBOL_STR(xfrm_find_acq_byseq) },
	{ 0xf10526ac, __VMLINUX_SYMBOL_STR(verify_spi_info) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xbb5d343d, __VMLINUX_SYMBOL_STR(xfrm_get_acqseq) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfd774661, __VMLINUX_SYMBOL_STR(xfrm_garbage_collect) },
	{ 0x96ff773c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x576cdc4b, __VMLINUX_SYMBOL_STR(xfrm_sad_getinfo) },
	{ 0xef5401ab, __VMLINUX_SYMBOL_STR(xfrm_spd_getinfo) },
	{ 0x5d0678ce, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xf3db0d5a, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xd08853ff, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{        0, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x7c30b8c7, __VMLINUX_SYMBOL_STR(xfrm_calg_get_byname) },
	{ 0x778770, __VMLINUX_SYMBOL_STR(xfrm_ealg_get_byname) },
	{ 0x157b283c, __VMLINUX_SYMBOL_STR(xfrm_init_replay) },
	{ 0xaf9c02b1, __VMLINUX_SYMBOL_STR(xfrm_audit_state_add) },
	{ 0x4039d9cb, __VMLINUX_SYMBOL_STR(xfrm_state_update) },
	{ 0x2a044dc5, __VMLINUX_SYMBOL_STR(xfrm_state_add) },
	{ 0x27866435, __VMLINUX_SYMBOL_STR(security_xfrm_state_alloc) },
	{ 0xa0451aeb, __VMLINUX_SYMBOL_STR(__xfrm_init_state) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe122af95, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0xb9e5852, __VMLINUX_SYMBOL_STR(xfrm_aead_get_byname) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xbb4c4b3d, __VMLINUX_SYMBOL_STR(xfrm_state_walk) },
	{ 0x51dce73b, __VMLINUX_SYMBOL_STR(xfrm_state_walk_init) },
	{ 0x5ee6553, __VMLINUX_SYMBOL_STR(xfrm_state_walk_done) },
	{ 0x8257f7d1, __VMLINUX_SYMBOL_STR(xfrm_audit_policy_add) },
	{ 0x6ebe044, __VMLINUX_SYMBOL_STR(xfrm_policy_insert) },
	{ 0xc8e94ad9, __VMLINUX_SYMBOL_STR(xfrm_policy_walk) },
	{ 0xe5ed5467, __VMLINUX_SYMBOL_STR(xfrm_policy_walk_init) },
	{ 0xe1d94f97, __VMLINUX_SYMBOL_STR(xfrm_policy_walk_done) },
	{ 0x15e4592c, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x50ab6f81, __VMLINUX_SYMBOL_STR(km_query) },
	{ 0x4ddba7a8, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0xb4387117, __VMLINUX_SYMBOL_STR(xfrm_policy_alloc) },
	{ 0xcb97c4ad, __VMLINUX_SYMBOL_STR(xfrm_audit_state_delete) },
	{ 0x3f6692bb, __VMLINUX_SYMBOL_STR(__xfrm_state_delete) },
	{ 0x3cd6ad9c, __VMLINUX_SYMBOL_STR(km_state_expired) },
	{ 0xc2a9f98c, __VMLINUX_SYMBOL_STR(xfrm_policy_destroy) },
	{ 0xd0f09cb9, __VMLINUX_SYMBOL_STR(km_policy_expired) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xfb1c95f5, __VMLINUX_SYMBOL_STR(xfrm_audit_policy_delete) },
	{ 0x42b35ce6, __VMLINUX_SYMBOL_STR(xfrm_policy_delete) },
	{ 0xb15cb614, __VMLINUX_SYMBOL_STR(security_xfrm_policy_alloc) },
	{ 0xa9c63b69, __VMLINUX_SYMBOL_STR(security_xfrm_policy_free) },
	{ 0x2d50dcb6, __VMLINUX_SYMBOL_STR(xfrm_policy_bysel_ctx) },
	{ 0xf4f69996, __VMLINUX_SYMBOL_STR(xfrm_policy_byid) },
	{ 0xf576e535, __VMLINUX_SYMBOL_STR(xfrm_state_flush) },
	{ 0x81b83b12, __VMLINUX_SYMBOL_STR(km_policy_notify) },
	{ 0xfb2906b6, __VMLINUX_SYMBOL_STR(xfrm_policy_flush) },
	{ 0x623be955, __VMLINUX_SYMBOL_STR(security_task_getsecid) },
	{ 0xbb2eaeae, __VMLINUX_SYMBOL_STR(km_state_notify) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xeb6d4bac, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xbe6c9356, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xd92a6cca, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x585ad4f8, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xeafd5723, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xb6ab2226, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xc65f50d3, __VMLINUX_SYMBOL_STR(xfrm_migrate) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x462bba8f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf72f1d98, __VMLINUX_SYMBOL_STR(netlink_rcv_skb) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x192a92e0, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xaf7d2cd9, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_algo";

