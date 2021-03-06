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
	{ 0x61ed383c, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0xffbca56b, __VMLINUX_SYMBOL_STR(__fscache_acquire_cookie) },
	{ 0xde266da8, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc5f8dadd, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x978a677, __VMLINUX_SYMBOL_STR(set_anon_super) },
	{        0, __VMLINUX_SYMBOL_STR(generic_getxattr) },
	{ 0x25d5303e, __VMLINUX_SYMBOL_STR(p9_client_mknod_dotl) },
	{ 0x22e1ae6f, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x75eb3989, __VMLINUX_SYMBOL_STR(save_mount_options) },
	{ 0xe627321d, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x9596f5b, __VMLINUX_SYMBOL_STR(__fscache_wait_on_page_write) },
	{ 0x3915d00f, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0xa1321617, __VMLINUX_SYMBOL_STR(__set_page_dirty_nobuffers) },
	{ 0x5ef8e4d, __VMLINUX_SYMBOL_STR(filemap_fault) },
	{ 0x7b16e532, __VMLINUX_SYMBOL_STR(generic_write_checks) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x67d4c7c2, __VMLINUX_SYMBOL_STR(p9_client_readdir) },
	{ 0x35b2c84b, __VMLINUX_SYMBOL_STR(filemap_write_and_wait_range) },
	{ 0x3cc4a61b, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0x35b4248f, __VMLINUX_SYMBOL_STR(kill_anon_super) },
	{ 0x8f9c6d2, __VMLINUX_SYMBOL_STR(posix_acl_to_xattr) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xaca6fcb2, __VMLINUX_SYMBOL_STR(p9_client_getlock_dotl) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0xfcee0cfc, __VMLINUX_SYMBOL_STR(p9_client_begin_disconnect) },
	{ 0x9b4d3be4, __VMLINUX_SYMBOL_STR(generic_file_open) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0xce3c7c01, __VMLINUX_SYMBOL_STR(test_set_page_writeback) },
	{ 0xe28224c5, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0xe673ea90, __VMLINUX_SYMBOL_STR(filemap_write_and_wait) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xe56e4973, __VMLINUX_SYMBOL_STR(deactivate_locked_super) },
	{ 0xbdac1eb7, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xd865a72b, __VMLINUX_SYMBOL_STR(generic_file_aio_read) },
	{ 0x45fb346e, __VMLINUX_SYMBOL_STR(dput) },
	{ 0xc210a7b2, __VMLINUX_SYMBOL_STR(__fscache_write_page) },
	{ 0x2769617c, __VMLINUX_SYMBOL_STR(generic_file_remap_pages) },
	{ 0x4a741f64, __VMLINUX_SYMBOL_STR(p9_client_stat) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x6c3433f9, __VMLINUX_SYMBOL_STR(d_materialise_unique) },
	{ 0xcc1d7767, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x6922c4c0, __VMLINUX_SYMBOL_STR(p9_client_link) },
	{ 0x3f2a0f29, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x24187db8, __VMLINUX_SYMBOL_STR(names_cachep) },
	{ 0x1edd5c48, __VMLINUX_SYMBOL_STR(p9_client_statfs) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x570cc586, __VMLINUX_SYMBOL_STR(__fscache_register_netfs) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xc0ffff54, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x4f331379, __VMLINUX_SYMBOL_STR(p9stat_read) },
	{ 0x271d6482, __VMLINUX_SYMBOL_STR(p9_client_clunk) },
	{ 0x411fdd84, __VMLINUX_SYMBOL_STR(generic_setxattr) },
	{ 0x86371ae1, __VMLINUX_SYMBOL_STR(redirty_page_for_writepage) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7ec010b, __VMLINUX_SYMBOL_STR(generic_file_aio_write) },
	{ 0xb2b7c4e1, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xb69fd90f, __VMLINUX_SYMBOL_STR(p9_is_proto_dotl) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x3184fd4b, __VMLINUX_SYMBOL_STR(__fscache_uncache_page) },
	{ 0x282ca906, __VMLINUX_SYMBOL_STR(set_page_dirty) },
	{ 0x7cb77e56, __VMLINUX_SYMBOL_STR(p9_client_readlink) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4fbabd6c, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x455293f6, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x34f04bb6, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0xf5c997a4, __VMLINUX_SYMBOL_STR(end_page_writeback) },
	{ 0x28124e6f, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x73143714, __VMLINUX_SYMBOL_STR(p9_client_symlink) },
	{ 0x272670d2, __VMLINUX_SYMBOL_STR(p9dirent_read) },
	{ 0x5dd791e1, __VMLINUX_SYMBOL_STR(p9_client_fsync) },
	{ 0xb65aec58, __VMLINUX_SYMBOL_STR(inode_owner_or_capable) },
	{ 0xc145918, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0x734a18ff, __VMLINUX_SYMBOL_STR(p9_client_read) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xdaf23bd8, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0xaf676143, __VMLINUX_SYMBOL_STR(__fscache_read_or_alloc_page) },
	{ 0xcf3c9c95, __VMLINUX_SYMBOL_STR(p9_client_walk) },
	{        0, __VMLINUX_SYMBOL_STR(inode_add_bytes) },
	{ 0xd1454395, __VMLINUX_SYMBOL_STR(p9_client_write) },
	{ 0xebb6fb52, __VMLINUX_SYMBOL_STR(finish_no_open) },
	{ 0x62afc468, __VMLINUX_SYMBOL_STR(sync_inode) },
	{ 0x5daf0e44, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x4232c563, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0xadaec9e7, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xc74cb93a, __VMLINUX_SYMBOL_STR(p9_client_lock_dotl) },
	{ 0x3d97b816, __VMLINUX_SYMBOL_STR(p9_client_create_dotl) },
	{ 0x5e40059a, __VMLINUX_SYMBOL_STR(sget) },
	{ 0xcbe24c28, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0xc3988957, __VMLINUX_SYMBOL_STR(p9_client_xattrcreate) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x2c8c5822, __VMLINUX_SYMBOL_STR(__fscache_maybe_release_page) },
	{ 0x613ad31f, __VMLINUX_SYMBOL_STR(d_move) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x4442c53c, __VMLINUX_SYMBOL_STR(p9_client_mkdir_dotl) },
	{ 0x36d68e33, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x572dcab2, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd639e0ae, __VMLINUX_SYMBOL_STR(file_update_time) },
	{ 0x68de73e2, __VMLINUX_SYMBOL_STR(get_cached_acl) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0xff957dc2, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0x60df1e3b, __VMLINUX_SYMBOL_STR(posix_acl_equiv_mode) },
	{ 0xa5177c3c, __VMLINUX_SYMBOL_STR(p9_client_unlinkat) },
	{ 0x4556bcdf, __VMLINUX_SYMBOL_STR(p9_client_destroy) },
	{ 0xe06fa17a, __VMLINUX_SYMBOL_STR(set_cached_acl) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x613bb144, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x83211609, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xa958ed4, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xe498c991, __VMLINUX_SYMBOL_STR(p9_client_xattrwalk) },
	{ 0xe57f556, __VMLINUX_SYMBOL_STR(generic_removexattr) },
	{ 0x595dfd13, __VMLINUX_SYMBOL_STR(__fscache_unregister_netfs) },
	{ 0x8e23c36a, __VMLINUX_SYMBOL_STR(p9_client_setattr) },
	{ 0x861e1b82, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x1ab38373, __VMLINUX_SYMBOL_STR(posix_lock_file_wait) },
	{ 0xb9610059, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xdfa054a9, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0x9705cff5, __VMLINUX_SYMBOL_STR(wait_for_stable_page) },
	{ 0xfed80d73, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0xfeb130da, __VMLINUX_SYMBOL_STR(fs_kobj) },
	{ 0xdaf2fd26, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x7add44b5, __VMLINUX_SYMBOL_STR(posix_acl_valid) },
	{ 0xef1cacdc, __VMLINUX_SYMBOL_STR(p9_client_create) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x37b4da2f, __VMLINUX_SYMBOL_STR(posix_acl_from_xattr) },
	{        0, __VMLINUX_SYMBOL_STR(do_sync_read) },
	{ 0xd563c1fc, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0xac190b00, __VMLINUX_SYMBOL_STR(bdi_setup_and_register) },
	{ 0x44d2c2c0, __VMLINUX_SYMBOL_STR(p9stat_free) },
	{ 0x5e95b1cd, __VMLINUX_SYMBOL_STR(current_umask) },
	{ 0x63c383ed, __VMLINUX_SYMBOL_STR(p9_client_attach) },
	{ 0xbbb5832, __VMLINUX_SYMBOL_STR(clear_page_dirty_for_io) },
	{ 0x679835, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x783294c6, __VMLINUX_SYMBOL_STR(generic_show_options) },
	{ 0x9c4b93a7, __VMLINUX_SYMBOL_STR(p9_client_disconnect) },
	{ 0x2c896708, __VMLINUX_SYMBOL_STR(read_cache_pages) },
	{ 0x8aad5774, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x5719315e, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xd54df31d, __VMLINUX_SYMBOL_STR(__fscache_relinquish_cookie) },
	{ 0x38a69ecc, __VMLINUX_SYMBOL_STR(p9_is_proto_dotu) },
	{ 0x9b696854, __VMLINUX_SYMBOL_STR(__pagevec_release) },
	{ 0x31c81adb, __VMLINUX_SYMBOL_STR(p9_client_fcreate) },
	{ 0x69614060, __VMLINUX_SYMBOL_STR(generic_file_readonly_mmap) },
	{ 0x9a278f72, __VMLINUX_SYMBOL_STR(iput) },
	{        0, __VMLINUX_SYMBOL_STR(finish_open) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0xac8c2af6, __VMLINUX_SYMBOL_STR(invalidate_inode_pages2_range) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb53fcdb0, __VMLINUX_SYMBOL_STR(p9_client_renameat) },
	{ 0x27f5e524, __VMLINUX_SYMBOL_STR(do_sync_write) },
	{ 0x79cbfff, __VMLINUX_SYMBOL_STR(pagevec_lookup) },
	{ 0xf8d9e90c, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x5ea797e0, __VMLINUX_SYMBOL_STR(p9_client_remove) },
	{ 0x10bf968b, __VMLINUX_SYMBOL_STR(always_delete_dentry) },
	{ 0x699fa054, __VMLINUX_SYMBOL_STR(invalidate_mapping_pages) },
	{ 0xdb950fb2, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x5f4836d7, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x50ded37c, __VMLINUX_SYMBOL_STR(__posix_acl_chmod) },
	{ 0xde40a2ef, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xbc03bd80, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0x7662b1e, __VMLINUX_SYMBOL_STR(bdi_destroy) },
	{ 0xa8ac6e75, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x5d2a285b, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6b1673b, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xb87ec0e7, __VMLINUX_SYMBOL_STR(grab_cache_page_write_begin) },
	{ 0xa5cc41c1, __VMLINUX_SYMBOL_STR(__fscache_read_or_alloc_pages) },
	{ 0xe034ebe2, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xd9d1baf5, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x7d4e2276, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x2fc73131, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x15621403, __VMLINUX_SYMBOL_STR(p9_client_rename) },
	{ 0x4e794a69, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0x61e204ab, __VMLINUX_SYMBOL_STR(p9_client_open) },
	{ 0x9df7e7d6, __VMLINUX_SYMBOL_STR(p9_client_wstat) },
	{ 0x9b29b4c1, __VMLINUX_SYMBOL_STR(p9_client_getattr_dotl) },
	{ 0x220a3f9b, __VMLINUX_SYMBOL_STR(generic_fillattr) },
	{ 0xb6054c53, __VMLINUX_SYMBOL_STR(filemap_fdatawrite) },
	{ 0x7e53f64b, __VMLINUX_SYMBOL_STR(inode_init_owner) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x5063df40, __VMLINUX_SYMBOL_STR(__posix_acl_create) },
	{ 0x38c520a0, __VMLINUX_SYMBOL_STR(truncate_inode_pages) },
	{ 0x7d59cc33, __VMLINUX_SYMBOL_STR(posix_test_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fscache,9pnet";

