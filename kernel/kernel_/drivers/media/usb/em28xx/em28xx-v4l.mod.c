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
	{ 0x9186975a, __VMLINUX_SYMBOL_STR(em28xx_read_reg) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x25102ecd, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xcf0453c9, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0x614dd5a, __VMLINUX_SYMBOL_STR(v4l2_video_std_frame_period) },
	{ 0x57ef5938, __VMLINUX_SYMBOL_STR(em28xx_write_regs) },
	{ 0x6d2936b8, __VMLINUX_SYMBOL_STR(v4l2_ctrl_notify) },
	{ 0xb1fbb2db, __VMLINUX_SYMBOL_STR(em28xx_setup_xc3028) },
	{ 0x1caa22de, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0xf2fdd3a9, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xa9ee4269, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x7fc8652c, __VMLINUX_SYMBOL_STR(em28xx_tuner_callback) },
	{ 0xf2a353ac, __VMLINUX_SYMBOL_STR(v4l2_i2c_tuner_addrs) },
	{ 0x8bfa425c, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xb298ee7f, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x268f1e6f, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0x73e80d10, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0x75c1f842, __VMLINUX_SYMBOL_STR(em28xx_init_usb_xfer) },
	{ 0x7e0afdb6, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3bceb368, __VMLINUX_SYMBOL_STR(em28xx_register_extension) },
	{ 0x8375bf84, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x133a7c7a, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0x8cacc0b1, __VMLINUX_SYMBOL_STR(em28xx_read_ac97) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x72a3e302, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x4f3c7c3f, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0xf1acec24, __VMLINUX_SYMBOL_STR(em28xx_write_ac97) },
	{ 0xe89c9722, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xf94a0585, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x9f2996de, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0xb7170839, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x39c8dab6, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x1344169a, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xd8364b83, __VMLINUX_SYMBOL_STR(v4l2_fh_init) },
	{ 0x8a8250f0, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xd49b127c, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x701823e1, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0xcd4448e4, __VMLINUX_SYMBOL_STR(em28xx_unregister_extension) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xbfc0c7bc, __VMLINUX_SYMBOL_STR(em28xx_write_reg_bits) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2f94907b, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0xd40010de, __VMLINUX_SYMBOL_STR(em28xx_uninit_usb_xfer) },
	{ 0x64cfeeef, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0x78aa848a, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x123959a1, __VMLINUX_SYMBOL_STR(v4l2_type_names) },
	{ 0x41ebf7a5, __VMLINUX_SYMBOL_STR(v4l2_ctrl_find) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0x228a1905, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x26f8d6f0, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x36141e62, __VMLINUX_SYMBOL_STR(em28xx_audio_setup) },
	{ 0x9cc967d0, __VMLINUX_SYMBOL_STR(v4l2_clk_unregister_fixed) },
	{ 0x2c64689a, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x34fe3267, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_addr) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xc7b962a, __VMLINUX_SYMBOL_STR(em28xx_set_mode) },
	{ 0x6d0c81e0, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xf9f0a9d3, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x59a80395, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0xea233ec2, __VMLINUX_SYMBOL_STR(v4l2_fh_add) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x79b1eb8d, __VMLINUX_SYMBOL_STR(em28xx_write_reg) },
	{ 0xb75cbe78, __VMLINUX_SYMBOL_STR(em28xx_audio_analog_set) },
	{ 0x83db3c26, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x14494607, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xf90a3b08, __VMLINUX_SYMBOL_STR(em28xx_boards) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xab4893df, __VMLINUX_SYMBOL_STR(em28xx_init_camera) },
	{ 0x8307f031, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-core,em28xx,videobuf2-vmalloc";


MODULE_INFO(srcversion, "6AFBC3A1CD5FBED89799FD9");
