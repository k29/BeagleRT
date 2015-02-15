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
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x3a9b6fb9, __VMLINUX_SYMBOL_STR(blk_unregister_region) },
	{ 0xe8475db0, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1a294c16, __VMLINUX_SYMBOL_STR(blk_register_region) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xaa8bd573, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x2fc73131, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc145918, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xb70e8b15, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xf202c5cb, __VMLINUX_SYMBOL_STR(radix_tree_insert) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9754ec10, __VMLINUX_SYMBOL_STR(radix_tree_preload) },
	{ 0x13717f44, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x870bf928, __VMLINUX_SYMBOL_STR(radix_tree_lookup) },
	{ 0x8581b0f4, __VMLINUX_SYMBOL_STR(get_disk) },
	{ 0xf255570b, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x1c409a52, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x3d6cb9e1, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x4dfb16d4, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x42d3ad53, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0xbdbdb113, __VMLINUX_SYMBOL_STR(blk_alloc_queue) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2095b61d, __VMLINUX_SYMBOL_STR(kill_bdev) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf4926eee, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0xe66163c4, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2c098c08, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x5d5b5a16, __VMLINUX_SYMBOL_STR(radix_tree_delete) },
	{ 0xebdbe48c, __VMLINUX_SYMBOL_STR(radix_tree_gang_lookup) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

