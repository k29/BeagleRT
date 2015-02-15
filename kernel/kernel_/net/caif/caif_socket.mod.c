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
	{ 0x69b66a01, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xb36060f1, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xe9a8d0bc, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x5b400400, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x2323e069, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x7152da17, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0x4caf9af7, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0x516bf90a, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x6595f14c, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xf82ba0e3, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{        0, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0x562d3885, __VMLINUX_SYMBOL_STR(sock_rfree) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7821cb86, __VMLINUX_SYMBOL_STR(__sk_mem_schedule) },
	{ 0xa3e433d8, __VMLINUX_SYMBOL_STR(sk_filter) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x4a237e57, __VMLINUX_SYMBOL_STR(cfpkt_tonative) },
	{ 0x1446b60a, __VMLINUX_SYMBOL_STR(caif_client_register_refcnt) },
	{ 0xef2f70b7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x5247662c, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x9ceb163c, __VMLINUX_SYMBOL_STR(memcpy_toiovec) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe097242c, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xe81628ea, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x5daf0e44, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x4d06a056, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xb4f4b3eb, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x5c01f4e5, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0xda541b2e, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0x8d3a80b8, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xd48ea9b4, __VMLINUX_SYMBOL_STR(send_sig) },
	{ 0x9fb3dd30, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0x48e51ec3, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x87f694e5, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x96ff773c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x9e3e305d, __VMLINUX_SYMBOL_STR(cfpkt_set_prio) },
	{ 0x2a09f713, __VMLINUX_SYMBOL_STR(cfpkt_fromnative) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x17764057, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x1b891174, __VMLINUX_SYMBOL_STR(caif_connect_client) },
	{ 0xd4447a30, __VMLINUX_SYMBOL_STR(caif_disconnect_client) },
	{ 0x27f4b6f3, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x9689e524, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x61ccbf81, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xb7b6874e, __VMLINUX_SYMBOL_STR(caif_free_client) },
	{ 0xe818ee6, __VMLINUX_SYMBOL_STR(sk_stream_kill_queues) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=caif";

