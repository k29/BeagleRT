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
	{ 0x27f4b6f3, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4d06a056, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xfb7d2fe0, __VMLINUX_SYMBOL_STR(seq_open_private) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27f15ec9, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0x3fc3649e, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0xa4acd184, __VMLINUX_SYMBOL_STR(seq_release_private) },
	{ 0xcdab33b, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xa7dae1d, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0xe9a8d0bc, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xd0d009b6, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xe43274bc, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x74ee0e31, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xf8df6422, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x212737b8, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x963b9d66, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x8d3a80b8, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x75bda77a, __VMLINUX_SYMBOL_STR(seq_hlist_next) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2a99c9ca, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0xf1e5de86, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xeafd5723, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xa5beb08d, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x69b66a01, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x9b566e75, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x68a2c83b, __VMLINUX_SYMBOL_STR(sock_get_timestamp) },
	{ 0xb36060f1, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xc145918, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x38226da6, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x6595f14c, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xbeff81e7, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0xb4f4b3eb, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9689e524, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x3dfc897c, __VMLINUX_SYMBOL_STR(seq_hlist_start_head) },
	{ 0x2323e069, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa08ebea8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x516bf90a, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x61ccbf81, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x2014cbef, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xef2f70b7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x5d0678ce, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x8a0eed9d, __VMLINUX_SYMBOL_STR(register_snap_client) },
	{ 0x5b400400, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x733f4ceb, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x58020f8b, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xd92a6cca, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x8e14ce3a, __VMLINUX_SYMBOL_STR(sock_get_timestampns) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xded6b67d, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{        0, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0x96ff773c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf04193ae, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x78d6206d, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x87f694e5, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0xa08d07f0, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0xda541b2e, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x80c381a9, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x2b422ae0, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0xce0d618a, __VMLINUX_SYMBOL_STR(unregister_snap_client) },
	{ 0x9fb3dd30, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xe097242c, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x73109cde, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0xcc28eb52, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x6a12736, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xbebee444, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x6a36fbf4, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0x48e51ec3, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9cf1b46, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x8c35ed2e, __VMLINUX_SYMBOL_STR(sock_i_uid) },
	{ 0x812869fd, __VMLINUX_SYMBOL_STR(dev_mc_add_global) },
	{ 0x5c01f4e5, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=psnap";

