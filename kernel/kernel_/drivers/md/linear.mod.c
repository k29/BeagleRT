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
	{ 0x4b4d0744, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x9f63ace9, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0xcafada47, __VMLINUX_SYMBOL_STR(mddev_congested) },
	{ 0x89a2fd8f, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbccffc02, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x8bc7a207, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0xaa8bd573, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xd3ce97d, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0x875a4da1, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0x142deb2a, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0xf49c506, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0x31e9a0cc, __VMLINUX_SYMBOL_STR(blk_queue_merge_bvec) },
	{ 0x38790e3b, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0x1d6245dc, __VMLINUX_SYMBOL_STR(blk_sync_queue) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x31de9183, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0xa99db19b, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5efbc282, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";

