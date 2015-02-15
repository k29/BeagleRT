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
	{ 0xb36060f1, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xe9a8d0bc, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xcdab33b, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x5b400400, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x2323e069, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xa38f4a54, __VMLINUX_SYMBOL_STR(pppox_ioctl) },
	{ 0xded6b67d, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x516bf90a, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x6595f14c, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xf82ba0e3, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0xd6b3fa4f, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0xf1e5de86, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x2b422ae0, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xe0ff7a18, __VMLINUX_SYMBOL_STR(unregister_pppox_proto) },
	{ 0x2014cbef, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x176a15dc, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xf04193ae, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x73109cde, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0x83560364, __VMLINUX_SYMBOL_STR(register_pppox_proto) },
	{ 0x58020f8b, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x10792789, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x963b9d66, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x373ab280, __VMLINUX_SYMBOL_STR(ppp_input) },
	{ 0x38226da6, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x7e036cb4, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbd450bfc, __VMLINUX_SYMBOL_STR(ppp_register_net_channel) },
	{ 0x898428c8, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbebee444, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x9fb3dd30, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0x48e51ec3, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x857287bb, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0xda541b2e, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0x8d3a80b8, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x4d06a056, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xb4f4b3eb, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x8deb9e63, __VMLINUX_SYMBOL_STR(dev_get_by_name_rcu) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x9689e524, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x27f4b6f3, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x61750067, __VMLINUX_SYMBOL_STR(pppox_unbind_sock) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x61ccbf81, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x96ff773c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xabc67d4a, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x7fd85fa8, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x9b566e75, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x4233e75a, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0x6a12736, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x74ee0e31, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x80c381a9, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd0d009b6, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xa15522c4, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x212737b8, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pppox,ppp_generic";

