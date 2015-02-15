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
	{ 0xe0070624, __VMLINUX_SYMBOL_STR(w1_unregister_family) },
	{ 0xe62ae140, __VMLINUX_SYMBOL_STR(w1_register_family) },
	{ 0xc42d7adc, __VMLINUX_SYMBOL_STR(w1_reset_bus) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x227f24e8, __VMLINUX_SYMBOL_STR(w1_write_8) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xea3e25c7, __VMLINUX_SYMBOL_STR(w1_read_8) },
	{ 0xdaf5233c, __VMLINUX_SYMBOL_STR(w1_reset_resume_command) },
	{ 0x3171197e, __VMLINUX_SYMBOL_STR(w1_write_block) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9c221417, __VMLINUX_SYMBOL_STR(w1_reset_select_slave) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";

