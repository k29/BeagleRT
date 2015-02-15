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
	{ 0x7cddfc88, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0xb4f42200, __VMLINUX_SYMBOL_STR(nft_register_expr) },
	{ 0x64506c44, __VMLINUX_SYMBOL_STR(nft_validate_data_load) },
	{ 0xfda3c99, __VMLINUX_SYMBOL_STR(nft_validate_output_register) },
	{ 0xe6bcf51f, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x93acc846, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x462bba8f, __VMLINUX_SYMBOL_STR(nla_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables";
