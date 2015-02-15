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
	{ 0x8bc7a207, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0xd35d593b, __VMLINUX_SYMBOL_STR(bio_clone_mddev) },
	{ 0xaa8bd573, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x9e81a13e, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa99db19b, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x5efbc282, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x38790e3b, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";

