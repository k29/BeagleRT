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
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7e2691c0, __VMLINUX_SYMBOL_STR(smscore_register_hotplug) },
	{ 0x2370beed, __VMLINUX_SYMBOL_STR(smscore_get_board_id) },
	{ 0xeafaab0d, __VMLINUX_SYMBOL_STR(sms_board_setup) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xb9df79af, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x4090541c, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x82bed551, __VMLINUX_SYMBOL_STR(sms_board_event) },
	{ 0xd2a755de, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0xbbdb5c42, __VMLINUX_SYMBOL_STR(smscore_unregister_client) },
	{ 0xb2b9305, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xda2478d0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x63222b29, __VMLINUX_SYMBOL_STR(smsclient_sendrequest) },
	{ 0x3f0e492a, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x5daf0e44, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb62d7dfb, __VMLINUX_SYMBOL_STR(sms_board_lna_control) },
	{ 0x764279ca, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd53c4522, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xc9092ab6, __VMLINUX_SYMBOL_STR(smscore_putbuffer) },
	{ 0x5ae32be6, __VMLINUX_SYMBOL_STR(smscore_unregister_hotplug) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x844539ae, __VMLINUX_SYMBOL_STR(sms_get_board) },
	{ 0xb4c08cfe, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0xd3fa7182, __VMLINUX_SYMBOL_STR(sms_board_power) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x14822f41, __VMLINUX_SYMBOL_STR(sms_board_led_feedback) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x22d2586b, __VMLINUX_SYMBOL_STR(smscore_register_client) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xfe486e02, __VMLINUX_SYMBOL_STR(smscore_get_device_mode) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xf32589e1, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=smsmdtv";

