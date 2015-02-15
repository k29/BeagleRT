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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x27c7e51f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_cluster) },
	{ 0xeb76b71a, __VMLINUX_SYMBOL_STR(gspca_suspend) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x432dda42, __VMLINUX_SYMBOL_STR(gspca_dev_probe) },
	{ 0x148e1b8d, __VMLINUX_SYMBOL_STR(gspca_resume) },
	{ 0x287947e1, __VMLINUX_SYMBOL_STR(v4l2_ctrl_g_ctrl) },
	{ 0x8bfa425c, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x51d72a93, __VMLINUX_SYMBOL_STR(gspca_disconnect) },
	{ 0x5cd0442c, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xf28a4ab0, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x61f9abe7, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x9670af2c, __VMLINUX_SYMBOL_STR(gspca_debug) },
	{ 0x35117ed0, __VMLINUX_SYMBOL_STR(gspca_frame_add) },
	{ 0xf9f0a9d3, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x534a9b0c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main";

MODULE_ALIAS("usb:v041Ep401Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep403Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p7004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0461p0815d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0928d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0929d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp092Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp092Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp092Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp092Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp092Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp092Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04FCp0561d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v060BpA001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10FDp7E50d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vABCDpCDEEd*dc*dsc*dp*ic*isc*ip*in*");
