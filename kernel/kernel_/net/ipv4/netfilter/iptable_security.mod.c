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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x92fa79ac, __VMLINUX_SYMBOL_STR(xt_hook_unlink) },
	{ 0xe57320e9, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x7c4b0ee0, __VMLINUX_SYMBOL_STR(xt_hook_link) },
	{ 0xe26012bc, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xdb6089d4, __VMLINUX_SYMBOL_STR(ipt_do_table) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x31df8749, __VMLINUX_SYMBOL_STR(ipt_register_table) },
	{ 0x75706e0, __VMLINUX_SYMBOL_STR(ipt_alloc_initial_table) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x6fa143a9, __VMLINUX_SYMBOL_STR(ipt_unregister_table) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,ip_tables";
