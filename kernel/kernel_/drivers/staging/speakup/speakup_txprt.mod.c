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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xafeaea66, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xb7065bb9, __VMLINUX_SYMBOL_STR(spk_var_store) },
	{ 0xf3ac95d9, __VMLINUX_SYMBOL_STR(spk_var_show) },
	{ 0x36219b83, __VMLINUX_SYMBOL_STR(spk_synth_is_alive_restart) },
	{ 0x864a493b, __VMLINUX_SYMBOL_STR(spk_synth_flush) },
	{ 0x8b16387a, __VMLINUX_SYMBOL_STR(spk_do_catch_up) },
	{ 0x6be24502, __VMLINUX_SYMBOL_STR(spk_synth_immediate) },
	{ 0xe7cd4558, __VMLINUX_SYMBOL_STR(spk_serial_release) },
	{ 0xf76d49e4, __VMLINUX_SYMBOL_STR(spk_serial_synth_probe) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xda2478d0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xbf68529f, __VMLINUX_SYMBOL_STR(synth_remove) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xa8e680a3, __VMLINUX_SYMBOL_STR(synth_add) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=speakup";


MODULE_INFO(srcversion, "179BE87F62CA49B05B128E9");
