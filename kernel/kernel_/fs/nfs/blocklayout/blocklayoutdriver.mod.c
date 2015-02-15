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
	{ 0x398ff3f7, __VMLINUX_SYMBOL_STR(pnfs_unregister_layoutdriver) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xdbda4df0, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_write) },
	{ 0x89a2fd8f, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x2a0d378, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xaaa14361, __VMLINUX_SYMBOL_STR(nfs_dreq_bytes_left) },
	{ 0x65e59b74, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xbeedaaff, __VMLINUX_SYMBOL_STR(rpc_unlink) },
	{ 0x44e82870, __VMLINUX_SYMBOL_STR(pnfs_ld_write_done) },
	{ 0x30cada8f, __VMLINUX_SYMBOL_STR(radix_tree_next_hole) },
	{ 0xce3c7c01, __VMLINUX_SYMBOL_STR(test_set_page_writeback) },
	{ 0xe28224c5, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x45fb346e, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x3ca31f35, __VMLINUX_SYMBOL_STR(nfs_net_id) },
	{ 0x85c94bfd, __VMLINUX_SYMBOL_STR(nfs4_proc_getdevicelist) },
	{ 0xa8667c1c, __VMLINUX_SYMBOL_STR(nfs4_proc_getdeviceinfo) },
	{ 0x8afc2ac8, __VMLINUX_SYMBOL_STR(rpc_mkpipe_data) },
	{ 0xe9fd6a08, __VMLINUX_SYMBOL_STR(rpc_mkpipe_dentry) },
	{ 0x13717f44, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xe48affed, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0xe363dbd0, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_test) },
	{ 0xf5c997a4, __VMLINUX_SYMBOL_STR(end_page_writeback) },
	{ 0xaf19880c, __VMLINUX_SYMBOL_STR(rpc_get_sb_net) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xc145918, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x95ddf90a, __VMLINUX_SYMBOL_STR(xdr_init_decode_pages) },
	{ 0x8680fb3c, __VMLINUX_SYMBOL_STR(rpc_queue_upcall) },
	{ 0xe57320e9, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x5b2a444f, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x522c3c00, __VMLINUX_SYMBOL_STR(find_or_create_page) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe92029ac, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_write_mds) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x9cfa992d, __VMLINUX_SYMBOL_STR(rpc_d_lookup_sb) },
	{ 0x3af65167, __VMLINUX_SYMBOL_STR(blkdev_get_by_dev) },
	{ 0xfb1c90cf, __VMLINUX_SYMBOL_STR(wait_on_page_bit) },
	{ 0x613bb144, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xb70e8b15, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x9e81a13e, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xf2064ce4, __VMLINUX_SYMBOL_STR(bh_submit_read) },
	{ 0x170f3ed6, __VMLINUX_SYMBOL_STR(nfs41_maxgetdevinfo_overhead) },
	{ 0xbebd9d94, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xca96de50, __VMLINUX_SYMBOL_STR(rpc_pipe_generic_upcall) },
	{ 0x1a5f3d35, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0x387e1639, __VMLINUX_SYMBOL_STR(rpc_pipefs_notifier_register) },
	{ 0x2c098c08, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xe8737acb, __VMLINUX_SYMBOL_STR(rpc_destroy_pipe_data) },
	{ 0x5ea5d007, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0x1011e292, __VMLINUX_SYMBOL_STR(free_buffer_head) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xe26012bc, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x1606bd18, __VMLINUX_SYMBOL_STR(rpc_put_sb_net) },
	{ 0x95acb9bb, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_readpages) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x65994f1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque_fixed) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x961947ed, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_writepages) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x580ef229, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_read) },
	{ 0x5f4836d7, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xb51a3724, __VMLINUX_SYMBOL_STR(rpc_pipefs_notifier_unregister) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x5ee04730, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0xa2930c44, __VMLINUX_SYMBOL_STR(find_get_page) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x8a4fa83b, __VMLINUX_SYMBOL_STR(__aeabi_llsr) },
	{ 0xf96e31dd, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_read_mds) },
	{ 0xa6c42806, __VMLINUX_SYMBOL_STR(pnfs_set_lo_fail) },
	{ 0xf1d5de48, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0x2fc73131, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0xca5da1d0, __VMLINUX_SYMBOL_STR(pnfs_ld_read_done) },
	{ 0x42c39ec4, __VMLINUX_SYMBOL_STR(alloc_page_buffers) },
	{ 0xa1403523, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x5cefd76c, __VMLINUX_SYMBOL_STR(pnfs_register_layoutdriver) },
	{ 0x77d9106d, __VMLINUX_SYMBOL_STR(bh_uptodate_or_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

