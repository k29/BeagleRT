#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xafeaea66, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x27f4b6f3, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x4d06a056, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcdab33b, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xe9a8d0bc, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x7152da17, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x963b9d66, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5f8ee440, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x69b66a01, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xb36060f1, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x1285a49a, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x6595f14c, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xb4f4b3eb, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xb7170839, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9689e524, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x2323e069, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x516bf90a, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x61ccbf81, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x58020f8b, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{        0, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x96ff773c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf04193ae, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x8c36d23c, __VMLINUX_SYMBOL_STR(__put_cred) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xe097242c, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xac8f37b2, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x407dd4b5, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xda10ec3, __VMLINUX_SYMBOL_STR(security_sock_graft) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6496B52F05C2FE2772D6901");
