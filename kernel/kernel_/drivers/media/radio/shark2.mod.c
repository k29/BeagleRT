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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x25102ecd, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x3a94ddf7, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xbd5aa092, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x28cb096a, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0xf2fdd3a9, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xa9ee4269, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x8bfa425c, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x7e0afdb6, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8375bf84, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x72a3e302, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf28a4ab0, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x5daf0e44, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x39c8dab6, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x8a8250f0, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2283ca0f, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0xca541b99, __VMLINUX_SYMBOL_STR(v4l2_device_set_name) },
	{ 0x26f8d6f0, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x2c64689a, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0xe1c5359f, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x3e8b561e, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x5ad24d26, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf9f0a9d3, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x534a9b0c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8a4fa83b, __VMLINUX_SYMBOL_STR(__aeabi_llsr) },
	{ 0xdcb75d7d, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x14494607, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x67c95448, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v077Dp627Ad0010dc*dsc*dp*ic03isc*ip*in*");