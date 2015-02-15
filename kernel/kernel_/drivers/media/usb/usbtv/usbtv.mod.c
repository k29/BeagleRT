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
	{ 0x83db3c26, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0x268f1e6f, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0x2f94907b, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0x64cfeeef, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0x78aa848a, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x9f2996de, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x6d0c81e0, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x9cb5e3c7, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0x228a1905, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x3e8b561e, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xf94a0585, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x14494607, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xb298ee7f, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x133a7c7a, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0xf28a4ab0, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x534a9b0c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x36834220, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x1344169a, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x26f8d6f0, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xfb2b5f57, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd49b127c, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x61f9abe7, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x3a94ddf7, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x4f3c7c3f, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7a973ad5, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x7e0afdb6, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x8375bf84, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xe2ef4525, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8307f031, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0x5daf0e44, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xb25a5523, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xcca8828c, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0xf2fdd3a9, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xdcb75d7d, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf9eeee70, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x72a3e302, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x39c8dab6, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x701823e1, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd867536e, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9bc9dc23, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-core,videobuf2-vmalloc";

MODULE_ALIAS("usb:v1B71p3002d*dc*dsc*dp*ic*isc*ip*in*");
