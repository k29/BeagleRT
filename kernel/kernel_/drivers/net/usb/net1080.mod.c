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
	{ 0xf28a4ab0, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x534a9b0c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x3441896c, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x723f946, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0xe2d26079, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xeafd5723, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xef2f70b7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xb94d3ade, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x55c72ecb, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x48e51ec3, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xa08ebea8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe3ad8c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xd7c8167a, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0525p1080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D0p0622d*dc*dsc*dp*ic*isc*ip*in*");