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
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x92fa79ac, __VMLINUX_SYMBOL_STR(xt_hook_unlink) },
	{ 0xe57320e9, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x7c4b0ee0, __VMLINUX_SYMBOL_STR(xt_hook_link) },
	{ 0xe26012bc, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xb2917c40, __VMLINUX_SYMBOL_STR(ip6t_do_table) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcbc44f50, __VMLINUX_SYMBOL_STR(ip6t_register_table) },
	{ 0x2c0d5b6a, __VMLINUX_SYMBOL_STR(ip6t_alloc_initial_table) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x394e1c68, __VMLINUX_SYMBOL_STR(ip6t_unregister_table) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,ip6_tables";

