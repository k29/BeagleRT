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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xafeaea66, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb5d24471, __VMLINUX_SYMBOL_STR(usbip_event_happened) },
	{ 0xd02753dc, __VMLINUX_SYMBOL_STR(usbip_header_correct_endian) },
	{ 0x69bffc15, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x360f3a91, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa3545302, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0xbcf2ad24, __VMLINUX_SYMBOL_STR(usb_create_hcd) },
	{ 0x87770a1a, __VMLINUX_SYMBOL_STR(usb_hcd_poll_rh_status) },
	{ 0xde0edb5, __VMLINUX_SYMBOL_STR(usbip_alloc_iso_desc_pdu) },
	{ 0xa3fac721, __VMLINUX_SYMBOL_STR(usb_hcd_giveback_urb) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb2b7c4e1, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xbdb2f3fe, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x2d2fbe9e, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x45d29fe0, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0x73332113, __VMLINUX_SYMBOL_STR(usbip_event_add) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe1ea0586, __VMLINUX_SYMBOL_STR(usbip_dump_header) },
	{ 0xe384a102, __VMLINUX_SYMBOL_STR(usb_speed_string) },
	{ 0x216a324d, __VMLINUX_SYMBOL_STR(usb_hcd_link_urb_to_ep) },
	{ 0x9c7e5296, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xb5895a4d, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xadaec9e7, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x75818b41, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0xd4dce91e, __VMLINUX_SYMBOL_STR(usbip_stop_eh) },
	{ 0xc03e3f61, __VMLINUX_SYMBOL_STR(dev_attr_usbip_debug) },
	{ 0x7a6cc893, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xbd61115c, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x4c9095b6, __VMLINUX_SYMBOL_STR(usbip_recv_iso) },
	{ 0xf75b8f7a, __VMLINUX_SYMBOL_STR(sockfd_to_socket) },
	{ 0xa3e88d69, __VMLINUX_SYMBOL_STR(usbip_pad_iso) },
	{ 0x8fa89b9c, __VMLINUX_SYMBOL_STR(usb_hcd_check_unlink_urb) },
	{ 0x7a973ad5, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xa4d6adff, __VMLINUX_SYMBOL_STR(usbip_dump_urb) },
	{ 0x13ff7f85, __VMLINUX_SYMBOL_STR(platform_device_register) },
	{ 0xb25a5523, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xdb9a1834, __VMLINUX_SYMBOL_STR(usbip_recv) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xf9eeee70, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x7ebf2e57, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x19a304ba, __VMLINUX_SYMBOL_STR(usb_disabled) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc94e0a9, __VMLINUX_SYMBOL_STR(usbip_recv_xbuff) },
	{ 0xc00d06c8, __VMLINUX_SYMBOL_STR(__put_task_struct) },
	{ 0x78b72f44, __VMLINUX_SYMBOL_STR(usbip_debug_flag) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb3e81f85, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xffa4a9ef, __VMLINUX_SYMBOL_STR(usb_hcd_unlink_urb_from_ep) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x92b6f6b8, __VMLINUX_SYMBOL_STR(usb_hcd_resume_root_hub) },
	{ 0x9ab3fd58, __VMLINUX_SYMBOL_STR(usbip_start_eh) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x61ccce1d, __VMLINUX_SYMBOL_STR(usbip_pack_pdu) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbip-core";


MODULE_INFO(srcversion, "15F4A4F32057A8B80E8E606");
