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
	{ 0x2f7e87f0, __VMLINUX_SYMBOL_STR(team_mode_unregister) },
	{ 0x8e0a407d, __VMLINUX_SYMBOL_STR(team_mode_register) },
	{ 0xb9f81dce, __VMLINUX_SYMBOL_STR(team_option_inst_set_change) },
	{ 0xacf43c23, __VMLINUX_SYMBOL_STR(team_options_register) },
	{ 0x30f54e8b, __VMLINUX_SYMBOL_STR(team_options_unregister) },
	{ 0xe3ad8c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xbebee444, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x4efda18e, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=team";

