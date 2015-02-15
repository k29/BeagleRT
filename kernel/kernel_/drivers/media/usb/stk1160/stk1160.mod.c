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
	{ 0x9cb5e3c7, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x25102ecd, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3a94ddf7, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xcf0453c9, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0x28cb096a, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x90dfb577, __VMLINUX_SYMBOL_STR(snd_card_create) },
	{ 0xf2fdd3a9, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xa9ee4269, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xb298ee7f, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x268f1e6f, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0x9bc9dc23, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x73e80d10, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0x7e0afdb6, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc47179b8, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x8375bf84, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x133a7c7a, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x72a3e302, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x4f3c7c3f, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x9c7e5296, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xf94a0585, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x9f2996de, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0xf28a4ab0, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xb7170839, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x5daf0e44, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x39c8dab6, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x1344169a, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x8a8250f0, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xd49b127c, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x701823e1, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x61f9abe7, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7401d956, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x78aa848a, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0xe860e45d, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x7a973ad5, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xfb2b5f57, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x228a1905, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x26f8d6f0, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xdd74cf0e, __VMLINUX_SYMBOL_STR(snd_ac97_bus) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x3e8b561e, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x67ac55c7, __VMLINUX_SYMBOL_STR(snd_ac97_mixer) },
	{ 0x6d0c81e0, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf9f0a9d3, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x534a9b0c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x59a80395, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x3339c16f, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xe2ef4525, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x587f3b13, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8e6104ac, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x83db3c26, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0xdcb75d7d, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xd867536e, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x14494607, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x36834220, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x8307f031, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-core,snd,videobuf2-vmalloc,snd-ac97-codec";

MODULE_ALIAS("usb:v05E1p0408d*dc*dsc*dp*ic*isc*ip*in*");
