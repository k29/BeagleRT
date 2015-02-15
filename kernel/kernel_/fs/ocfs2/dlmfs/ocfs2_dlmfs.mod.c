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
	{ 0xde266da8, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x3915d00f, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x269d63fd, __VMLINUX_SYMBOL_STR(ocfs2_cluster_disconnect) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0xd673d81c, __VMLINUX_SYMBOL_STR(simple_lookup) },
	{ 0x5b27672b, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0xbdac1eb7, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xcc1d7767, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x424241c9, __VMLINUX_SYMBOL_STR(ocfs2_dlm_lvb) },
	{ 0xf85c43e4, __VMLINUX_SYMBOL_STR(igrab) },
	{ 0xba762612, __VMLINUX_SYMBOL_STR(mount_nodev) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf33e5f3b, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0xcb8309a8, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x775dee03, __VMLINUX_SYMBOL_STR(bdi_init) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x36d68e33, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xff957dc2, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0x316904e1, __VMLINUX_SYMBOL_STR(ocfs2_dlm_unlock) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x60f4bcef, __VMLINUX_SYMBOL_STR(ocfs2_dlm_lvb_valid) },
	{ 0x40718c92, __VMLINUX_SYMBOL_STR(ocfs2_dlm_lock) },
	{ 0x861e1b82, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x8505f742, __VMLINUX_SYMBOL_STR(simple_getattr) },
	{ 0xb9610059, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xe40cffce, __VMLINUX_SYMBOL_STR(ocfs2_stack_glue_set_max_proto_version) },
	{ 0x4cd32607, __VMLINUX_SYMBOL_STR(simple_unlink) },
	{ 0x8cce6b0f, __VMLINUX_SYMBOL_STR(simple_dir_operations) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x679835, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x1cb231d0, __VMLINUX_SYMBOL_STR(mlog_not_bits) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x8aad5774, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x5719315e, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x9a278f72, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x3bcef5f3, __VMLINUX_SYMBOL_STR(ocfs2_dlm_lock_status) },
	{ 0xde40a2ef, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xbc03bd80, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0x687f6251, __VMLINUX_SYMBOL_STR(mlog_and_bits) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x7662b1e, __VMLINUX_SYMBOL_STR(bdi_destroy) },
	{ 0xa8ac6e75, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xa06fbc10, __VMLINUX_SYMBOL_STR(ocfs2_cluster_connect_agnostic) },
	{ 0x6b1673b, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xe034ebe2, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xd9d1baf5, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x3cc5fd42, __VMLINUX_SYMBOL_STR(simple_rmdir) },
	{ 0x7e53f64b, __VMLINUX_SYMBOL_STR(inode_init_owner) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ocfs2_stackglue,ocfs2_nodemanager";

