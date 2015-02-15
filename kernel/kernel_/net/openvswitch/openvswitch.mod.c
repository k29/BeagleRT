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
	{ 0x2dce8386, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xde266da8, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x58c4d315, __VMLINUX_SYMBOL_STR(genlmsg_new_unicast) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x10792789, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x6a5d5f4, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xf2703f02, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x875996c9, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xf6ffa7d6, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x74ee0e31, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x898428c8, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x676a2f0f, __VMLINUX_SYMBOL_STR(arch_fast_hash2) },
	{ 0x64a6dd3d, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_get) },
	{ 0xa3e2f018, __VMLINUX_SYMBOL_STR(skb_zerocopy) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x5b40cc38, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2133fba8, __VMLINUX_SYMBOL_STR(__skb_checksum) },
	{ 0x2e80186, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0xd31ee804, __VMLINUX_SYMBOL_STR(skb_tx_error) },
	{ 0x27000b29, __VMLINUX_SYMBOL_STR(crc32c) },
	{ 0x93acc846, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xeafd5723, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xf6fdce3e, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace16) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x8147edc3, __VMLINUX_SYMBOL_STR(vxlan_sock_add) },
	{ 0x98689741, __VMLINUX_SYMBOL_STR(skb_zerocopy_headlen) },
	{ 0xd97ae21c, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_link) },
	{ 0x7b24185c, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xa5beb08d, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x9b566e75, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xa6ac60cc, __VMLINUX_SYMBOL_STR(vxlan_xmit_skb) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd3721f85, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x176a15dc, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x99591a7a, __VMLINUX_SYMBOL_STR(ipv6_ext_hdr) },
	{ 0xc9b38b8e, __VMLINUX_SYMBOL_STR(__skb_warn_lro_forwarding) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0x31ca75d, __VMLINUX_SYMBOL_STR(gre_cisco_unregister) },
	{ 0xb11bc31e, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x462bba8f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2d121a89, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x36d68e33, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa08ebea8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xa86399b1, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x17764057, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0xa6976e51, __VMLINUX_SYMBOL_STR(gre_build_header) },
	{ 0xeb6d4bac, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xa37e78b6, __VMLINUX_SYMBOL_STR(flex_array_get) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x9b6eb137, __VMLINUX_SYMBOL_STR(ksize) },
	{ 0x8afca77c, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0xb9610059, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xd92a6cca, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xfff672c3, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0xf3db0d5a, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x7c62d042, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xe5084d36, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0x20ebc47a, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0x96ff773c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xc167c46c, __VMLINUX_SYMBOL_STR(gre_cisco_register) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x78d6206d, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x2fb0ffb9, __VMLINUX_SYMBOL_STR(vxlan_src_port) },
	{ 0x6d4b8330, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x7e036cb4, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xa9345709, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xec562942, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x1176e07f, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x8aad5774, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xc598653, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x90f528db, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xce46e140, __VMLINUX_SYMBOL_STR(ktime_get_ts) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xcdf96b09, __VMLINUX_SYMBOL_STR(netlink_set_err) },
	{ 0x7a4b576, __VMLINUX_SYMBOL_STR(flex_array_free) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x79582ab9, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x439d338d, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0x5f01294a, __VMLINUX_SYMBOL_STR(vxlan_sock_release) },
	{ 0x9d90f95f, __VMLINUX_SYMBOL_STR(__crc32c_le_combine) },
	{ 0x13315729, __VMLINUX_SYMBOL_STR(flex_array_alloc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x15e4592c, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x6a12736, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xbebee444, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xd5380bc0, __VMLINUX_SYMBOL_STR(genl_notify) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x48e51ec3, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x55d8d91f, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xa3043d0c, __VMLINUX_SYMBOL_STR(inet_get_local_port_range) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x55772380, __VMLINUX_SYMBOL_STR(__nla_put) },
	{ 0x9fd7cda1, __VMLINUX_SYMBOL_STR(flex_array_prealloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vxlan,gre";
