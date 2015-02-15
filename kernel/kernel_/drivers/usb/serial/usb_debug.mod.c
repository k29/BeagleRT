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
	{ 0x91d7698a, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0xae36d7ae, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0xc31a3c34, __VMLINUX_SYMBOL_STR(usb_serial_generic_write) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x60cfb19a, __VMLINUX_SYMBOL_STR(usb_serial_generic_process_read_urb) },
	{ 0x1884d9ad, __VMLINUX_SYMBOL_STR(usb_serial_handle_break) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v0525p127Ad*dc*dsc*dp*ic*isc*ip*in*");
