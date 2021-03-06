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
	{ 0x6be24502, __VMLINUX_SYMBOL_STR(spk_synth_immediate) },
	{ 0xe7cd4558, __VMLINUX_SYMBOL_STR(spk_serial_release) },
	{ 0xf76d49e4, __VMLINUX_SYMBOL_STR(spk_serial_synth_probe) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xda2478d0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xbf68529f, __VMLINUX_SYMBOL_STR(synth_remove) },
	{ 0xa8e680a3, __VMLINUX_SYMBOL_STR(synth_add) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb2978dbc, __VMLINUX_SYMBOL_STR(speakup_info) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x9a888082, __VMLINUX_SYMBOL_STR(synth_buffer_getc) },
	{ 0xb48956f8, __VMLINUX_SYMBOL_STR(synth_buffer_peek) },
	{ 0x41a160e5, __VMLINUX_SYMBOL_STR(synth_buffer_empty) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd1b551a2, __VMLINUX_SYMBOL_STR(spk_get_var) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xe81c76d, __VMLINUX_SYMBOL_STR(spk_serial_out) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=speakup";


MODULE_INFO(srcversion, "77B5D01D0CDCEA334DF55CE");
