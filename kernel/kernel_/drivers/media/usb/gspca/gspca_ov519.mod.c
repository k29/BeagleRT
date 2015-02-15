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
	{ 0x439f33eb, __VMLINUX_SYMBOL_STR(usb_altnum_to_altsetting) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x432dda42, __VMLINUX_SYMBOL_STR(gspca_dev_probe) },
	{ 0x148e1b8d, __VMLINUX_SYMBOL_STR(gspca_resume) },
	{ 0x287947e1, __VMLINUX_SYMBOL_STR(v4l2_ctrl_g_ctrl) },
	{ 0x8bfa425c, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x51d72a93, __VMLINUX_SYMBOL_STR(gspca_disconnect) },
	{ 0x5cd0442c, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x4cccf076, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x893c2bfb, __VMLINUX_SYMBOL_STR(v4l2_ctrl_s_ctrl) },
	{ 0xf28a4ab0, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x61f9abe7, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x370498ee, __VMLINUX_SYMBOL_STR(v4l2_ctrl_auto_cluster) },
	{ 0x6077f3f1, __VMLINUX_SYMBOL_STR(v4l2_ctrl_grab) },
	{ 0x9670af2c, __VMLINUX_SYMBOL_STR(gspca_debug) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x35117ed0, __VMLINUX_SYMBOL_STR(gspca_frame_add) },
	{ 0xf9f0a9d3, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x534a9b0c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x3b596e2a, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main";

MODULE_ALIAS("usb:v041Ep4003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep405Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4064d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4068d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep028Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0154d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0155d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9p0511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9p0518d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9p0519d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9p0530d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9p2800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9p4519d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9p8519d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9pA511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9pA518d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0813p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B62p0059d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E96pC001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1046p9967d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8020pEF04d*dc*dsc*dp*ic*isc*ip*in*");
