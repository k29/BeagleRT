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
	{ 0x21d3b550, __VMLINUX_SYMBOL_STR(sbc_get_device_type) },
	{ 0x60e6ae8f, __VMLINUX_SYMBOL_STR(transport_subsystem_release) },
	{ 0x854ddbc0, __VMLINUX_SYMBOL_STR(transport_subsystem_register) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x20c4de1f, __VMLINUX_SYMBOL_STR(bioset_integrity_create) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x211e4e3c, __VMLINUX_SYMBOL_STR(blkdev_get_by_path) },
	{ 0xbec53e55, __VMLINUX_SYMBOL_STR(bioset_create) },
	{ 0x87e00c24, __VMLINUX_SYMBOL_STR(bioset_free) },
	{ 0x1e501f15, __VMLINUX_SYMBOL_STR(bioset_integrity_free) },
	{ 0x5ea5d007, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x462a2e75, __VMLINUX_SYMBOL_STR(match_strlcpy) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xbccffc02, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xdb0cbe76, __VMLINUX_SYMBOL_STR(bio_integrity_add_page) },
	{ 0xe47224d4, __VMLINUX_SYMBOL_STR(bio_integrity_alloc) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x5b2a444f, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0xce900af, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x925520d2, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x89a2fd8f, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x1a5f3d35, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0x2a0d378, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9e81a13e, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x42dae036, __VMLINUX_SYMBOL_STR(target_complete_cmd) },
	{ 0xfb1c91b7, __VMLINUX_SYMBOL_STR(sbc_get_write_same_sectors) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbcf9226b, __VMLINUX_SYMBOL_STR(blkdev_issue_discard) },
	{ 0x9f3a2c76, __VMLINUX_SYMBOL_STR(sbc_execute_unmap) },
	{ 0x238a4d41, __VMLINUX_SYMBOL_STR(sbc_parse_cdb) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";

