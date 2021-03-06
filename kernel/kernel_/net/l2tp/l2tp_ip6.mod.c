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
	{ 0xfcc6d628, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0xc65b8a24, __VMLINUX_SYMBOL_STR(inet_hash) },
	{ 0x6b832b42, __VMLINUX_SYMBOL_STR(ipv6_getsockopt) },
	{ 0x2e125c33, __VMLINUX_SYMBOL_STR(ipv6_setsockopt) },
	{ 0xa229ae79, __VMLINUX_SYMBOL_STR(udp_ioctl) },
	{ 0x69b66a01, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xb36060f1, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x4dc19683, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0x3df7b362, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0xedf30e19, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0xf1dc5b20, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0x8d8fda8b, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x2323e069, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x9564b7e6, __VMLINUX_SYMBOL_STR(inet6_ioctl) },
	{ 0xded6b67d, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x516bf90a, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x6595f14c, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x61ad7ad2, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0xcc7759ab, __VMLINUX_SYMBOL_STR(inet6_bind) },
	{ 0xaa295441, __VMLINUX_SYMBOL_STR(inet6_release) },
	{ 0x6c71621d, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0x49ad7c1c, __VMLINUX_SYMBOL_STR(inet6_unregister_protosw) },
	{ 0xf04193ae, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xd7a04617, __VMLINUX_SYMBOL_STR(inet6_register_protosw) },
	{ 0x582c72a9, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0x58020f8b, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x14fc99ae, __VMLINUX_SYMBOL_STR(ipv6_chk_addr) },
	{ 0x17764057, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0xabc67d4a, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xec15a41c, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x2c93e321, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x4bc123bf, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0xff68e953, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0x9b566e75, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xa5d3c994, __VMLINUX_SYMBOL_STR(ip6_datagram_connect) },
	{ 0x5d0678ce, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x96ff773c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x963b9d66, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x9397921c, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3623cbfa, __VMLINUX_SYMBOL_STR(udp_disconnect) },
	{ 0x6d9fc174, __VMLINUX_SYMBOL_STR(inet6_destroy_sock) },
	{ 0x1ecd4758, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0x61ccbf81, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xae523a38, __VMLINUX_SYMBOL_STR(ip_generic_getfrag) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf6ffa7d6, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x27f4b6f3, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xa16fbb78, __VMLINUX_SYMBOL_STR(ip6_push_pending_frames) },
	{ 0x4fcc4459, __VMLINUX_SYMBOL_STR(ip6_flush_pending_frames) },
	{ 0xb5f1846b, __VMLINUX_SYMBOL_STR(ip6_append_data) },
	{ 0x9689e524, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x11f340aa, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0x80b2ff16, __VMLINUX_SYMBOL_STR(ip6_dst_lookup_flow) },
	{ 0x2deda4a1, __VMLINUX_SYMBOL_STR(security_sk_classify_flow) },
	{ 0xd8525ea7, __VMLINUX_SYMBOL_STR(fl6_update_dst) },
	{ 0x58413099, __VMLINUX_SYMBOL_STR(ipv6_fixup_options) },
	{ 0x34dd7a61, __VMLINUX_SYMBOL_STR(fl6_merge_options) },
	{ 0xea4c1790, __VMLINUX_SYMBOL_STR(ip6_datagram_send_ctl) },
	{ 0x95816a10, __VMLINUX_SYMBOL_STR(fl6_sock_lookup) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5c01f4e5, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0x6ed31997, __VMLINUX_SYMBOL_STR(ip6_datagram_recv_ctl) },
	{ 0x448c8268, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0x7e84da43, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0xda541b2e, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0x8d3a80b8, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xdf662d44, __VMLINUX_SYMBOL_STR(ipv6_recv_error) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "25AA7CF3E2EFCF68770AA2D");
