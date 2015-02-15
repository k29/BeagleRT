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
	{ 0x69b6f8d9, __VMLINUX_SYMBOL_STR(omap_set_dma_transfer_params) },
	{  0x2d182, __VMLINUX_SYMBOL_STR(platform_driver_probe) },
	{ 0xb393f7d3, __VMLINUX_SYMBOL_STR(videobuf_mmap_free) },
	{ 0xc0a6a8c5, __VMLINUX_SYMBOL_STR(omap_set_dma_dest_burst_mode) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf4a7fc6d, __VMLINUX_SYMBOL_STR(omapdss_compat_init) },
	{ 0x22e1ae6f, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x1699dce5, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x65e59b74, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x436e9853, __VMLINUX_SYMBOL_STR(omap_dss_get_overlay_manager) },
	{ 0xffd2cf99, __VMLINUX_SYMBOL_STR(omap_dss_get_num_overlay_managers) },
	{ 0x1caa22de, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0xd1664c96, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xf2fdd3a9, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xba7da3ee, __VMLINUX_SYMBOL_STR(omap_dss_get_overlay) },
	{ 0xa9ecefb4, __VMLINUX_SYMBOL_STR(videobuf_queue_cancel) },
	{ 0xee2bc2d0, __VMLINUX_SYMBOL_STR(omapdss_is_initialized) },
	{ 0x407a3275, __VMLINUX_SYMBOL_STR(omap_start_dma) },
	{ 0xeaceb6e5, __VMLINUX_SYMBOL_STR(videobuf_streamon) },
	{ 0x7e0afdb6, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x205ec8de, __VMLINUX_SYMBOL_STR(omap_dispc_register_isr) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x736f3871, __VMLINUX_SYMBOL_STR(videobuf_queue_dma_contig_init) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x197dc3b3, __VMLINUX_SYMBOL_STR(omap_set_dma_src_burst_mode) },
	{ 0x87966b9b, __VMLINUX_SYMBOL_STR(omapdss_get_version) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0xf6f3cef6, __VMLINUX_SYMBOL_STR(omap_vrfb_setup) },
	{ 0x455293f6, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xc52da066, __VMLINUX_SYMBOL_STR(omap_set_dma_dest_params) },
	{ 0x8375bf84, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x3277f4a, __VMLINUX_SYMBOL_STR(omap_dss_put_device) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe89c9722, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x4a39e5a1, __VMLINUX_SYMBOL_STR(omap_set_dma_src_params) },
	{ 0x9c7e5296, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb9a8f03b, __VMLINUX_SYMBOL_STR(omap_stop_dma) },
	{ 0x5daf0e44, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc0cf95f9, __VMLINUX_SYMBOL_STR(omap_vrfb_request_ctx) },
	{ 0x9014e749, __VMLINUX_SYMBOL_STR(videobuf_qbuf) },
	{ 0x39c8dab6, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x3e6bcc48, __VMLINUX_SYMBOL_STR(omap_dss_get_next_device) },
	{ 0xfacd2e14, __VMLINUX_SYMBOL_STR(pgprot_user) },
	{ 0x8b44122e, __VMLINUX_SYMBOL_STR(videobuf_querybuf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x80d81308, __VMLINUX_SYMBOL_STR(omap_vrfb_release_ctx) },
	{ 0xa61e4362, __VMLINUX_SYMBOL_STR(omap_request_dma) },
	{ 0xe37d10ae, __VMLINUX_SYMBOL_STR(omap_dispc_unregister_isr) },
	{ 0xa24dc6de, __VMLINUX_SYMBOL_STR(find_vma) },
	{ 0x7a973ad5, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x26f8d6f0, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x6e103b84, __VMLINUX_SYMBOL_STR(get_user_pages) },
	{ 0xabe27502, __VMLINUX_SYMBOL_STR(v4l2_ctrl_query_fill) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd557e1e, __VMLINUX_SYMBOL_STR(videobuf_dqbuf) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x4c33081d, __VMLINUX_SYMBOL_STR(omapdss_compat_uninit) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe71fcf58, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0xcb2ec95, __VMLINUX_SYMBOL_STR(omap_dss_get_device) },
	{ 0x920eb90c, __VMLINUX_SYMBOL_STR(interruptible_sleep_on_timeout) },
	{ 0x8cd8c339, __VMLINUX_SYMBOL_STR(omap_free_dma) },
	{ 0x7a55bdac, __VMLINUX_SYMBOL_STR(videobuf_reqbufs) },
	{ 0xe2ef4525, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x636b3461, __VMLINUX_SYMBOL_STR(omap_dss_get_num_overlays) },
	{ 0xb3e81f85, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x14494607, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xda3ad2a8, __VMLINUX_SYMBOL_STR(videobuf_poll_stream) },
	{ 0xa48f5b09, __VMLINUX_SYMBOL_STR(omap_dma_set_global_params) },
	{ 0x78f113e1, __VMLINUX_SYMBOL_STR(videobuf_streamoff) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-core,omapdss,videobuf-dma-contig";

