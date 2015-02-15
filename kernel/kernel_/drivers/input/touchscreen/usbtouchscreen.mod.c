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
	{ 0xf28a4ab0, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x534a9b0c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5cd0442c, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x6b52ad2b, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x7401d956, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x5b445bdc, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x66611d97, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x8e6104ac, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xf7f67021, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x36834220, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x94270bf5, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x61f9abe7, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xf6baae0c, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9c7e5296, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x21cd7172, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0xbd6bc576, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd867536e, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9bc9dc23, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfb2b5f57, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0EEFp0001d*dc*dsc*dp*ic03isc*ip*in*");
MODULE_ALIAS("usb:v0EEFp0002d*dc*dsc*dp*ic03isc*ip*in*");
MODULE_ALIAS("usb:v3823p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3823p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0123p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EEFp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EEFp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1234p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1234p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v134Cp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v134Cp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v134Cp0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v134Cp0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0596p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0403pF9E9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16E3pF9E9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1234p5678d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0637p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AFAp03E8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v595Ap0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6615p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1391p1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DFCp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08F2p007Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08F2p00CEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08F2p00F4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F92p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1AC7p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14C8p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0664p0309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0664p0306d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10F0p2002d*dc*dsc*dp*ic0Aisc00ip00in*");
MODULE_ALIAS("usb:v1870p0001d*dc*dsc*dp*ic0Aisc00ip00in*");
MODULE_ALIAS("usb:v04E7p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7374p0001d*dc*dsc*dp*ic*isc*ip*in*");
