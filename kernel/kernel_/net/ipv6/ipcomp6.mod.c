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
	{ 0xc35cd35a, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0xadd39bd2, __VMLINUX_SYMBOL_STR(xfrm6_find_1stfragopt) },
	{ 0xb4daab02, __VMLINUX_SYMBOL_STR(ipcomp_output) },
	{ 0xf2bb8e33, __VMLINUX_SYMBOL_STR(ipcomp_input) },
	{ 0x8e828d72, __VMLINUX_SYMBOL_STR(ipcomp_destroy) },
	{ 0x6c71621d, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0x2be6ae2b, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x582c72a9, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x10f56f2f, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0xba337c3f, __VMLINUX_SYMBOL_STR(xfrm_state_insert) },
	{ 0x8d1187d5, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0x715d0d4, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_alloc_spi) },
	{ 0x4ddba7a8, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0xa4f91215, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_spi_lookup) },
	{ 0x4daa38ba, __VMLINUX_SYMBOL_STR(ipcomp_init_state) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbe6c9356, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xebf559c3, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0xc4f002b1, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0x585ad4f8, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_ipcomp,xfrm6_tunnel";

