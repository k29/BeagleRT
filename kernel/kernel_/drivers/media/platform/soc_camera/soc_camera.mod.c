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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x9f4648d5, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3876e80c, __VMLINUX_SYMBOL_STR(videobuf_mmap_mapper) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x9028c284, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0x661f9986, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x5f3e3558, __VMLINUX_SYMBOL_STR(soc_mbus_bytes_per_line) },
	{ 0x1caa22de, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x4ea0387, __VMLINUX_SYMBOL_STR(v4l2_clk_disable) },
	{ 0xf2fdd3a9, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xa9ee4269, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xc3f69228, __VMLINUX_SYMBOL_STR(vb2_create_bufs) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xeaceb6e5, __VMLINUX_SYMBOL_STR(videobuf_streamon) },
	{ 0x7e0afdb6, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2d707284, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xabe29e9c, __VMLINUX_SYMBOL_STR(i2c_put_adapter) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x2d2fbe9e, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x8375bf84, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x59cda580, __VMLINUX_SYMBOL_STR(devm_regulator_bulk_get) },
	{ 0xa800e71c, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0xa932cecc, __VMLINUX_SYMBOL_STR(vb2_read) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe5663652, __VMLINUX_SYMBOL_STR(vb2_prepare_buf) },
	{ 0xe89c9722, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x9c7e5296, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb7170839, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x5daf0e44, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x9014e749, __VMLINUX_SYMBOL_STR(videobuf_qbuf) },
	{ 0x39c8dab6, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x464072d2, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x96e264a4, __VMLINUX_SYMBOL_STR(v4l2_async_notifier_register) },
	{ 0x97e21b64, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x8b44122e, __VMLINUX_SYMBOL_STR(videobuf_querybuf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdaf0767e, __VMLINUX_SYMBOL_STR(vb2_qbuf) },
	{ 0x7a6cc893, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xea22345d, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0xbd7fd0ac, __VMLINUX_SYMBOL_STR(vb2_querybuf) },
	{ 0x2f8398e, __VMLINUX_SYMBOL_STR(v4l2_clk_unregister) },
	{ 0x3caedb2a, __VMLINUX_SYMBOL_STR(v4l2_device_unregister_subdev) },
	{ 0x6fc15cde, __VMLINUX_SYMBOL_STR(soc_mbus_get_fmtdesc) },
	{ 0xbebd9d94, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x7a973ad5, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x472acb4d, __VMLINUX_SYMBOL_STR(vb2_streamon) },
	{ 0xb9f2de69, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0xb7a2204e, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xfb4f3c97, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x26f8d6f0, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2c64689a, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x9f06a83f, __VMLINUX_SYMBOL_STR(vb2_reqbufs) },
	{ 0x692b1d96, __VMLINUX_SYMBOL_STR(v4l2_clk_enable) },
	{ 0x689d860a, __VMLINUX_SYMBOL_STR(platform_device_add_data) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd557e1e, __VMLINUX_SYMBOL_STR(videobuf_dqbuf) },
	{ 0xe8f3f914, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xb10a07ee, __VMLINUX_SYMBOL_STR(vb2_dqbuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7a55bdac, __VMLINUX_SYMBOL_STR(videobuf_reqbufs) },
	{ 0xf9f0a9d3, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x466811f7, __VMLINUX_SYMBOL_STR(v4l2_clk_register) },
	{ 0x78c7f3cf, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev_board) },
	{ 0xe2ef4525, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x9d39345f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_add_handler) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2863728e, __VMLINUX_SYMBOL_STR(soc_mbus_image_size) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xb3e81f85, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x69a81db5, __VMLINUX_SYMBOL_STR(i2c_get_adapter) },
	{ 0x6d83952a, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xcca8828c, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0x97c89a41, __VMLINUX_SYMBOL_STR(vb2_streamoff) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x1009281c, __VMLINUX_SYMBOL_STR(v4l2_async_notifier_unregister) },
	{ 0x14494607, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xa1403523, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xb295e6de, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0x78f113e1, __VMLINUX_SYMBOL_STR(videobuf_streamoff) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-core,videobuf2-core,soc_mediabus";

