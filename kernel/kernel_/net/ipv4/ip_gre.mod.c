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
	{ 0x35732d83, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xe9ed9ab3, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x55d8d91f, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xf9bc364, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x8ecf7652, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0xfc207ae0, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0x176a15dc, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x31ca75d, __VMLINUX_SYMBOL_STR(gre_cisco_unregister) },
	{ 0xd6ace7da, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x686b8e76, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xc167c46c, __VMLINUX_SYMBOL_STR(gre_cisco_register) },
	{ 0x10792789, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9343446b, __VMLINUX_SYMBOL_STR(ip_mc_dec_group) },
	{ 0x7dfaf0b6, __VMLINUX_SYMBOL_STR(inetdev_by_index) },
	{ 0x32ce8461, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x1ef8575a, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0x34003b73, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0xa9345709, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x462bba8f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xa08ebea8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1a8fb5af, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0x67c0f761, __VMLINUX_SYMBOL_STR(ip_mc_inc_group) },
	{ 0xf6ffa7d6, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x90f528db, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x96ff773c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7e036cb4, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xef2f70b7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xec562942, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0xc3b35c76, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0xa6976e51, __VMLINUX_SYMBOL_STR(gre_build_header) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x18e7e516, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x85191ab5, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0x9abb6d6e, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1bffb439, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0xfb4c6d62, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,gre";

