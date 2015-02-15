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
	{ 0x31e9a0cc, __VMLINUX_SYMBOL_STR(blk_queue_merge_bvec) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x308eaf52, __VMLINUX_SYMBOL_STR(submit_bio_wait) },
	{ 0x2a0d378, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xcafada47, __VMLINUX_SYMBOL_STR(mddev_congested) },
	{ 0x613fbf4a, __VMLINUX_SYMBOL_STR(rdev_set_badblocks) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd2260e3, __VMLINUX_SYMBOL_STR(md_is_badblock) },
	{ 0x65e59b74, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xd35d593b, __VMLINUX_SYMBOL_STR(bio_clone_mddev) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x24a5ca7d, __VMLINUX_SYMBOL_STR(bio_alloc_mddev) },
	{ 0x825ed729, __VMLINUX_SYMBOL_STR(md_check_recovery) },
	{ 0xf66ff2ba, __VMLINUX_SYMBOL_STR(md_write_end) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xf924893, __VMLINUX_SYMBOL_STR(bitmap_endwrite) },
	{ 0xa58fea9d, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x7cde5912, __VMLINUX_SYMBOL_STR(bitmap_unplug) },
	{ 0xfa33bdfd, __VMLINUX_SYMBOL_STR(bio_trim) },
	{ 0x4b4d0744, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x31de9183, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x13717f44, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xd0965228, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1462f032, __VMLINUX_SYMBOL_STR(bio_reset) },
	{ 0x8b85f6e1, __VMLINUX_SYMBOL_STR(bitmap_start_sync) },
	{ 0xd27b25dd, __VMLINUX_SYMBOL_STR(blk_check_plugged) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x41d064c3, __VMLINUX_SYMBOL_STR(md_register_thread) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x5b2a444f, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0xcbe24c28, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0x5efbc282, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0xa8a489d6, __VMLINUX_SYMBOL_STR(bitmap_close_sync) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x8bc7a207, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x681b2589, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x9f740629, __VMLINUX_SYMBOL_STR(md_wait_for_blocked_rdev) },
	{ 0x675cd42b, __VMLINUX_SYMBOL_STR(md_integrity_add_rdev) },
	{ 0xb70e8b15, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xaa8bd573, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x9e81a13e, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x459e9fd4, __VMLINUX_SYMBOL_STR(md_done_sync) },
	{ 0x4cf63bbb, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0x2d425317, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0xce900af, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0xbd01dd54, __VMLINUX_SYMBOL_STR(bitmap_cond_end_sync) },
	{ 0x3026722, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x45d3cc76, __VMLINUX_SYMBOL_STR(md_write_start) },
	{ 0xfed80d73, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0xbccffc02, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xc9dc7ccd, __VMLINUX_SYMBOL_STR(rdev_clear_badblocks) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x24c3f4d5, __VMLINUX_SYMBOL_STR(md_allow_write) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xa99db19b, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x2b4e956e, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x84590605, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xe684fb88, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2232a8a5, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x6715c31d, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0x6f5e8082, __VMLINUX_SYMBOL_STR(md_unregister_thread) },
	{ 0x9a86aa4e, __VMLINUX_SYMBOL_STR(bio_alloc_pages) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe37f156c, __VMLINUX_SYMBOL_STR(bitmap_startwrite) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xe3e0c365, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x5f4836d7, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x9e973e8c, __VMLINUX_SYMBOL_STR(bio_copy_data) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x925520d2, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x9bf9c4a1, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0xf49c506, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0x9f63ace9, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0x31e5b1e1, __VMLINUX_SYMBOL_STR(bitmap_end_sync) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";

