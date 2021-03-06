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
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x1189909d, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0xe9ed9ab3, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x55d8d91f, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xa0703b56, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0x5759322d, __VMLINUX_SYMBOL_STR(simple_attr_write) },
	{ 0xba9a10d1, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0xe627321d, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x5416219f, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xf2703f02, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0xdf54a8f7, __VMLINUX_SYMBOL_STR(netlink_unregister_notifier) },
	{ 0xb3e81f85, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xfa599bb2, __VMLINUX_SYMBOL_STR(netlink_register_notifier) },
	{ 0x2e80186, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0x2dce8386, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xc7be3ee4, __VMLINUX_SYMBOL_STR(dev_alloc_name) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x78d6206d, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xe136f61, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x2d2fbe9e, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x2c780ce3, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x9e8bd75b, __VMLINUX_SYMBOL_STR(ieee80211_probereq_get) },
	{ 0xf2e26545, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x6481f7f1, __VMLINUX_SYMBOL_STR(ieee80211_get_tx_rates) },
	{ 0xb70e8b15, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xf8df6422, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x1ede7993, __VMLINUX_SYMBOL_STR(skb_add_rx_frag) },
	{ 0x65e59b74, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x2c098c08, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x13717f44, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x8afca77c, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0xf6ffa7d6, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x9f942ed, __VMLINUX_SYMBOL_STR(ieee80211_tx_status_irqsafe) },
	{ 0x2461801e, __VMLINUX_SYMBOL_STR(skb_unlink) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x7b24185c, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x271e4a4b, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x7840b42c, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x93f79b6c, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0xd99437f7, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x64bec226, __VMLINUX_SYMBOL_STR(ieee80211_ready_on_channel) },
	{ 0x598b7086, __VMLINUX_SYMBOL_STR(ieee80211_scan_completed) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xb11bc31e, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xa9345709, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x38843a3e, __VMLINUX_SYMBOL_STR(ieee80211_remain_on_channel_expired) },
	{ 0xcad08331, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x94e1823c, __VMLINUX_SYMBOL_STR(hrtimer_start) },
	{ 0xae523691, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0x4080aac3, __VMLINUX_SYMBOL_STR(ieee80211_rx_irqsafe) },
	{ 0x48e51ec3, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x5d0678ce, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x733f4ceb, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xeb6d4bac, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x462bba8f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x439d338d, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0xe097242c, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xd92a6cca, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xa5beb08d, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xa08ebea8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xd7c8167a, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
	{ 0x2447533c, __VMLINUX_SYMBOL_STR(ktime_get_real) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6a12736, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xa7da9eb7, __VMLINUX_SYMBOL_STR(ieee80211_radar_detected) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe7a11053, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x80a65392, __VMLINUX_SYMBOL_STR(tasklet_hrtimer_init) },
	{ 0x70a166c9, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x5c1b1ee6, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xa347f791, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x2202d2f8, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0xaebd4b7b, __VMLINUX_SYMBOL_STR(wiphy_apply_custom_regulatory) },
	{ 0x5daf0e44, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xa2532fb5, __VMLINUX_SYMBOL_STR(device_bind_driver) },
	{ 0xbab8caac, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6cfe8f5, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw) },
	{ 0x5e498957, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xc5b0660d, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x9b4d14f2, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0xe97e547, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x62dfa0ca, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0x413959a2, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xe81628ea, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";

