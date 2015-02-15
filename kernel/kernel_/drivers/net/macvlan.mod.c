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
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5a8303c9, __VMLINUX_SYMBOL_STR(dev_forward_skb) },
	{ 0x6dd826f8, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xa9f145d8, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0x4c7f25c7, __VMLINUX_SYMBOL_STR(dev_mc_add_excl) },
	{ 0x875996c9, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0x3bcaffe9, __VMLINUX_SYMBOL_STR(dev_uc_add_excl) },
	{ 0x74ee0e31, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x44d5f842, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0x8571a3bb, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0xd7a08da, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xa5beb08d, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x7d040f38, __VMLINUX_SYMBOL_STR(ip_check_defrag) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xd3721f85, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x94db11e0, __VMLINUX_SYMBOL_STR(__ethtool_get_settings) },
	{ 0xb11bc31e, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xc31939df, __VMLINUX_SYMBOL_STR(dev_mc_del) },
	{ 0x462bba8f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2d121a89, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x38868e37, __VMLINUX_SYMBOL_STR(ndo_dflt_fdb_dump) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xd927b959, __VMLINUX_SYMBOL_STR(netif_stacked_transfer_operstate) },
	{ 0xd6ace7da, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x5e241c17, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0xecc016af, __VMLINUX_SYMBOL_STR(eth_header_cache_update) },
	{ 0x7c62d042, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xe5084d36, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0x5bcd2d3e, __VMLINUX_SYMBOL_STR(eth_header_parse) },
	{ 0x96ff773c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbe333b0d, __VMLINUX_SYMBOL_STR(netdev_upper_dev_link) },
	{ 0xa9345709, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x4a8d84d2, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1176e07f, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xc598653, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xe9ed9ab3, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x79582ab9, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x36f8192d, __VMLINUX_SYMBOL_STR(eth_header_cache) },
	{ 0x686b8e76, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x94fab9ae, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0xc1eca0f5, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x6a12736, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xd869cfe8, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x573d3174, __VMLINUX_SYMBOL_STR(dev_queue_xmit_accel) },
	{ 0xbebee444, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xac0192e1, __VMLINUX_SYMBOL_STR(eth_rebuild_header) },
	{ 0x4ad9f481, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0xc58a8cd, __VMLINUX_SYMBOL_STR(netdev_increment_features) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

