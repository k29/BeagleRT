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
	{ 0xf33e5f3b, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0xcabab563, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xcb8309a8, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0xbc03bd80, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0xa8ac6e75, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x262fbaed, __VMLINUX_SYMBOL_STR(unregister_binfmt) },
	{ 0xdf17b9ac, __VMLINUX_SYMBOL_STR(__register_binfmt) },
	{ 0x5719315e, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xd9d1baf5, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x9a278f72, __VMLINUX_SYMBOL_STR(iput) },
	{ 0xc49fde1c, __VMLINUX_SYMBOL_STR(simple_pin_fs) },
	{        0, __VMLINUX_SYMBOL_STR(current_fs_time) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x6b1673b, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xbf8a8636, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0xc8339e24, __VMLINUX_SYMBOL_STR(string_unescape) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbdac1eb7, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{        0, __VMLINUX_SYMBOL_STR(sys_close) },
	{ 0x7d7b571a, __VMLINUX_SYMBOL_STR(search_binary_handler) },
	{ 0xe4f7de66, __VMLINUX_SYMBOL_STR(prepare_binprm) },
	{ 0xf44cc10a, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x51cc703a, __VMLINUX_SYMBOL_STR(open_exec) },
	{ 0x7d1768a5, __VMLINUX_SYMBOL_STR(bprm_change_interp) },
	{ 0x14b5942b, __VMLINUX_SYMBOL_STR(copy_strings_kernel) },
	{ 0xbd61115c, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xbee57fa8, __VMLINUX_SYMBOL_STR(would_dump) },
	{ 0xca221cb5, __VMLINUX_SYMBOL_STR(fd_install) },
	{ 0xa843805a, __VMLINUX_SYMBOL_STR(get_unused_fd_flags) },
	{ 0x47b516ea, __VMLINUX_SYMBOL_STR(remove_arg_zero) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe034ebe2, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x6519180b, __VMLINUX_SYMBOL_STR(simple_release_fs) },
	{ 0x45fb346e, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x66cc7cdd, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0xc5f8dadd, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0xd100acbd, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0xb5fd0a84, __VMLINUX_SYMBOL_STR(simple_fill_super) },
	{ 0x9e2e840f, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

