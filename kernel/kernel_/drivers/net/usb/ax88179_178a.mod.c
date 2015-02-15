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
	{ 0xde40a960, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x3b133993, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xd3721f85, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x2a1d1e62, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x5e53920, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0xe6a7fcec, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0xc6280ea4, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0xe9ed9ab3, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x4e737195, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x978393bd, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x18e61c29, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0xf28a4ab0, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x534a9b0c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xb94d3ade, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0xfaf98462, __VMLINUX_SYMBOL_STR(bitrev32) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x38f96896, __VMLINUX_SYMBOL_STR(usbnet_update_max_qlen) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x55c72ecb, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x95529b35, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9cf999e4, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x3441896c, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xa9b6d689, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x5cd95280, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xcbba33ce, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xeea65f4e, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_nopm) },
	{ 0x723f946, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9fc4ffce, __VMLINUX_SYMBOL_STR(usbnet_read_cmd_nopm) },
	{ 0xe2d26079, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xad4b6fa7, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x3b63bbd0, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x95860999, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x7a7cd05, __VMLINUX_SYMBOL_STR(mii_ethtool_sset) },
	{ 0x198e6937, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x74ee0e31, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xef2f70b7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xeafd5723, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xa08ebea8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe3ad8c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x7e036cb4, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*ic*isc*ip*in*");
