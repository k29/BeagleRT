#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xafeaea66, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x65e59b74, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xb0d904b7, __VMLINUX_SYMBOL_STR(raid6_empty_zero_page) },
	{ 0xf955cb7b, __VMLINUX_SYMBOL_STR(async_tx_quiesce) },
	{ 0x21957e1, __VMLINUX_SYMBOL_STR(raid6_datap_recov) },
	{ 0xf8a2742, __VMLINUX_SYMBOL_STR(raid6_2data_recov) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=async_tx";

