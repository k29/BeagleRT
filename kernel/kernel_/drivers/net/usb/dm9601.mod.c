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
	{ 0x5cd95280, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xa9b6d689, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xde40a960, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x3b133993, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x2a1d1e62, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x5e53920, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0xe6a7fcec, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x412902a7, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0xcb8efd10, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0xc6280ea4, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x4dc88bb5, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0xe9ed9ab3, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x4e737195, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x978393bd, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x18e61c29, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0xf28a4ab0, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x534a9b0c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x95529b35, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x55c72ecb, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x15582268, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb94d3ade, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0xfaf98462, __VMLINUX_SYMBOL_STR(bitrev32) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xcbba33ce, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x723f946, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0xe2d26079, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x3b63bbd0, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x5e5dacb4, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x999ecde7, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0x95860999, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0xf9437be6, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xeafd5723, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xef2f70b7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x9c7e5296, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe3ad8c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xd7c8167a, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v07AAp9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p6688d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p0268d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p8515d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A47p9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE6p8101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE6p9700d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9621d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p0269d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p1269d*dc*dsc*dp*ic*isc*ip*in*");
