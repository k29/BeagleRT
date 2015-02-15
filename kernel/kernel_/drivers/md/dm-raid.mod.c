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
	{ 0x22fbe0f6, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0xe425dd4e, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa571cd2, __VMLINUX_SYMBOL_STR(md_run) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb1425b32, __VMLINUX_SYMBOL_STR(dm_table_add_target_callbacks) },
	{ 0xb70e8b15, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x5f4836d7, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xe3e0c365, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x13717f44, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x47a753ef, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xf5029e55, __VMLINUX_SYMBOL_STR(dm_set_target_max_io_len) },
	{ 0xee4d2579, __VMLINUX_SYMBOL_STR(raid5_set_cache_size) },
	{ 0xb3b184b, __VMLINUX_SYMBOL_STR(md_rdev_init) },
	{ 0xaeecd4b3, __VMLINUX_SYMBOL_STR(mddev_init) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xfd614d5d, __VMLINUX_SYMBOL_STR(md_raid5_congested) },
	{ 0xd04fe8b8, __VMLINUX_SYMBOL_STR(md_raid10_congested) },
	{ 0x71447697, __VMLINUX_SYMBOL_STR(md_raid1_congested) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x76cf47f6, __VMLINUX_SYMBOL_STR(__aeabi_llsl) },
	{ 0xad84bef8, __VMLINUX_SYMBOL_STR(dm_table_event) },
	{ 0x9c932e0, __VMLINUX_SYMBOL_STR(md_stop) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x570b0ae4, __VMLINUX_SYMBOL_STR(md_rdev_clear) },
	{ 0xa316a521, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0xebe641e8, __VMLINUX_SYMBOL_STR(md_stop_writes) },
	{ 0xb413dc5c, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0xd3aaf4e9, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0x65e59b74, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x6715c31d, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0x1eb67472, __VMLINUX_SYMBOL_STR(bitmap_load) },
	{ 0x84590605, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0xea5400d3, __VMLINUX_SYMBOL_STR(md_reap_sync_thread) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x221e9a04, __VMLINUX_SYMBOL_STR(blk_limits_io_opt) },
	{ 0x59aafbcb, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod,md-mod,raid456,raid10,raid1";

