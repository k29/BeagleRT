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
	{ 0x9c22f855, __VMLINUX_SYMBOL_STR(d_path) },
	{ 0x89a2fd8f, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1c409a52, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xf4926eee, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x2a0d378, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x3a9b6fb9, __VMLINUX_SYMBOL_STR(blk_unregister_region) },
	{ 0x65e59b74, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x6acb8042, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1be51ef1, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0x64351914, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0x4881d505, __VMLINUX_SYMBOL_STR(idr_for_each) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x13717f44, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xb2b7c4e1, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xbdb2f3fe, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x5f8ee440, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0xe03caadd, __VMLINUX_SYMBOL_STR(splice_direct_to_actor) },
	{ 0xfb3af27, __VMLINUX_SYMBOL_STR(invalidate_bdev) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xc145918, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0x1285a49a, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x3acd0ee8, __VMLINUX_SYMBOL_STR(set_device_ro) },
	{ 0xbdbdb113, __VMLINUX_SYMBOL_STR(blk_alloc_queue) },
	{ 0x5d891a64, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x5daf0e44, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb5895a4d, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xadaec9e7, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xe8475db0, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xcbe24c28, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x1a294c16, __VMLINUX_SYMBOL_STR(blk_register_region) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xcabab563, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x7888acb7, __VMLINUX_SYMBOL_STR(__splice_from_pipe) },
	{ 0xf74dae0f, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0xbd61115c, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x8581b0f4, __VMLINUX_SYMBOL_STR(get_disk) },
	{ 0xb70e8b15, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xaa8bd573, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x9e81a13e, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xdf401846, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xbebd9d94, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x2c098c08, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xf1806da9, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x3123d857, __VMLINUX_SYMBOL_STR(bd_set_size) },
	{ 0xfed80d73, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0x42d3ad53, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xe66163c4, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x748b08a7, __VMLINUX_SYMBOL_STR(bdgrab) },
	{ 0x7ebf2e57, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x45e81c75, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5c2f5c6d, __VMLINUX_SYMBOL_STR(__sb_end_write) },
	{ 0xf255570b, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x3a046b3c, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0x14fd763, __VMLINUX_SYMBOL_STR(fget) },
	{ 0x8f4fbe8f, __VMLINUX_SYMBOL_STR(__sb_start_write) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x3b18739f, __VMLINUX_SYMBOL_STR(ioctl_by_bdev) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xc165596e, __VMLINUX_SYMBOL_STR(set_blocksize) },
	{ 0x9805ed2, __VMLINUX_SYMBOL_STR(zero_fill_bio) },
	{ 0xdc0713a5, __VMLINUX_SYMBOL_STR(vfs_getattr) },
	{ 0x407dd4b5, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x4253a386, __VMLINUX_SYMBOL_STR(bdput) },
	{ 0x2fc73131, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0xa1403523, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

