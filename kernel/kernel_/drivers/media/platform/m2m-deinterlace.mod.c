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
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x14494607, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xb3e81f85, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x2d2fbe9e, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x9721f4e2, __VMLINUX_SYMBOL_STR(vb2_plane_cookie) },
	{ 0xbc80a696, __VMLINUX_SYMBOL_STR(v4l2_m2m_next_buf) },
	{ 0x7468e7e4, __VMLINUX_SYMBOL_STR(v4l2_m2m_streamon) },
	{ 0xb4e32ded, __VMLINUX_SYMBOL_STR(vb2_dma_contig_memops) },
	{ 0x8307f031, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0xcedfde39, __VMLINUX_SYMBOL_STR(v4l2_m2m_get_vq) },
	{ 0x13625b61, __VMLINUX_SYMBOL_STR(v4l2_m2m_ctx_init) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1caa22de, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0x17eb0eee, __VMLINUX_SYMBOL_STR(v4l2_m2m_init) },
	{ 0x3981d74d, __VMLINUX_SYMBOL_STR(vb2_dma_contig_init_ctx) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x7e0afdb6, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe89c9722, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x5daf0e44, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x8375bf84, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xb5e90d01, __VMLINUX_SYMBOL_STR(__dma_request_channel) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x701823e1, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x5ba90f59, __VMLINUX_SYMBOL_STR(v4l2_m2m_buf_remove) },
	{ 0xc967d852, __VMLINUX_SYMBOL_STR(v4l2_m2m_job_finish) },
	{ 0xc1b3292d, __VMLINUX_SYMBOL_STR(v4l2_m2m_poll) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2640ce06, __VMLINUX_SYMBOL_STR(v4l2_m2m_mmap) },
	{ 0x22eba00b, __VMLINUX_SYMBOL_STR(v4l2_m2m_buf_queue) },
	{ 0xd7e43e5e, __VMLINUX_SYMBOL_STR(v4l2_m2m_ctx_release) },
	{ 0x26f8d6f0, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xf618b195, __VMLINUX_SYMBOL_STR(v4l2_m2m_reqbufs) },
	{ 0xfde3072, __VMLINUX_SYMBOL_STR(v4l2_m2m_querybuf) },
	{ 0xe364aa1, __VMLINUX_SYMBOL_STR(v4l2_m2m_qbuf) },
	{ 0x41fba70f, __VMLINUX_SYMBOL_STR(v4l2_m2m_dqbuf) },
	{ 0x6148c3c3, __VMLINUX_SYMBOL_STR(v4l2_m2m_streamoff) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3ed75ea7, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0xe57f0426, __VMLINUX_SYMBOL_STR(vb2_dma_contig_cleanup_ctx) },
	{ 0xf2fdd3a9, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x39c8dab6, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xc6fca5ad, __VMLINUX_SYMBOL_STR(v4l2_m2m_release) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-core,v4l2-mem2mem,videobuf2-dma-contig";


MODULE_INFO(srcversion, "69CD666398012552E928F8D");
