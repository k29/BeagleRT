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
	{ 0xf9bc364, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x8ecf7652, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0xfc207ae0, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd6ace7da, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xf5f8e064, __VMLINUX_SYMBOL_STR(xfrm4_mode_tunnel_input_deregister) },
	{ 0x686b8e76, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x176a15dc, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x2d82b992, __VMLINUX_SYMBOL_STR(xfrm4_mode_tunnel_input_register) },
	{ 0x10792789, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfb4c6d62, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0x34003b73, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x1a8fb5af, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x96ff773c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xf6ffa7d6, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x90f528db, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x18e7e516, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x85191ab5, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0x32ce8461, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1ef8575a, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x462bba8f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x8afca77c, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0xec15a41c, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x1bffb439, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,xfrm4_mode_tunnel";

