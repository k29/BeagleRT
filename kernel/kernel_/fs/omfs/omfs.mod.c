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
	{ 0x2d6507b5, __VMLINUX_SYMBOL_STR(_find_next_zero_bit_le) },
	{ 0x35fced47, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x9e8f575b, __VMLINUX_SYMBOL_STR(__bread) },
	{ 0x75eb3989, __VMLINUX_SYMBOL_STR(save_mount_options) },
	{ 0x5b06c88c, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0xe627321d, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x3915d00f, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf5b4a948, __VMLINUX_SYMBOL_STR(crc_itu_t) },
	{ 0x815b5dd4, __VMLINUX_SYMBOL_STR(match_octal) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0x6ccb91cc, __VMLINUX_SYMBOL_STR(block_write_begin) },
	{ 0xd865a72b, __VMLINUX_SYMBOL_STR(generic_file_aio_read) },
	{ 0x76cf47f6, __VMLINUX_SYMBOL_STR(__aeabi_llsl) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0xcc1d7767, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xf8d4355e, __VMLINUX_SYMBOL_STR(block_read_full_page) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8451f696, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xc0ffff54, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x7ec010b, __VMLINUX_SYMBOL_STR(generic_file_aio_write) },
	{ 0x4fbabd6c, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0x28124e6f, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x4884b73, __VMLINUX_SYMBOL_STR(__insert_inode_hash) },
	{ 0x65fb348a, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x5daf0e44, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4232c563, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x5edaf557, __VMLINUX_SYMBOL_STR(mpage_writepages) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xff957dc2, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0xd28461ae, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0xf8ea97c3, __VMLINUX_SYMBOL_STR(truncate_pagecache) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x604e01d6, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xdfa054a9, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0x98ed70ac, __VMLINUX_SYMBOL_STR(block_write_full_page) },
	{ 0xdaf2fd26, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x3a199ee6, __VMLINUX_SYMBOL_STR(generic_write_end) },
	{        0, __VMLINUX_SYMBOL_STR(do_sync_read) },
	{ 0xd563c1fc, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x21b46005, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0xba96a10f, __VMLINUX_SYMBOL_STR(inode_newsize_ok) },
	{ 0x5e95b1cd, __VMLINUX_SYMBOL_STR(current_umask) },
	{ 0x679835, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x783294c6, __VMLINUX_SYMBOL_STR(generic_show_options) },
	{ 0x5719315e, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x9a278f72, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x466db43d, __VMLINUX_SYMBOL_STR(generic_file_fsync) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x27f5e524, __VMLINUX_SYMBOL_STR(do_sync_write) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x29291b5d, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0xde40a2ef, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x89df41e4, __VMLINUX_SYMBOL_STR(mark_buffer_dirty) },
	{ 0xa8ac6e75, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x6b1673b, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xb8244a98, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xe034ebe2, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xd9d1baf5, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xf1d2f2eb, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
	{ 0x4e794a69, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0x46d40c7c, __VMLINUX_SYMBOL_STR(iget_locked) },
	{ 0x7e53f64b, __VMLINUX_SYMBOL_STR(inode_init_owner) },
	{ 0x38c520a0, __VMLINUX_SYMBOL_STR(truncate_inode_pages) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=crc-itu-t";

