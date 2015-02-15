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
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xda2478d0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x8af72d5c, __VMLINUX_SYMBOL_STR(cx231xx_unregister_extension) },
	{ 0x15e46189, __VMLINUX_SYMBOL_STR(cx231xx_register_extension) },
	{ 0x17ea7c7, __VMLINUX_SYMBOL_STR(cx231xx_tuner_callback) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7d4cdba2, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0xf32589e1, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0xb9df79af, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0xd2a755de, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0xb4c08cfe, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x5daf0e44, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{        0, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xc7e9d353, __VMLINUX_SYMBOL_STR(cx231xx_demod_reset) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4090541c, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x483229fd, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0xb2b9305, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xd53c4522, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x3f0e492a, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0xc3553b5, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0x2b844f4a, __VMLINUX_SYMBOL_STR(cx231xx_init_bulk) },
	{ 0x14640800, __VMLINUX_SYMBOL_STR(cx231xx_init_isoc) },
	{ 0xc7b58f35, __VMLINUX_SYMBOL_STR(cx231xx_set_alt_setting) },
	{ 0xb9af5324, __VMLINUX_SYMBOL_STR(cx231xx_enable_i2c_port_3) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3581522f, __VMLINUX_SYMBOL_STR(cx231xx_uninit_bulk) },
	{ 0x6a492ded, __VMLINUX_SYMBOL_STR(cx231xx_uninit_isoc) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7a85156d, __VMLINUX_SYMBOL_STR(cx231xx_set_mode) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x764279ca, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cx231xx";

