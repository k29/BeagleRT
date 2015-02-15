#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xafeaea66, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x5bec8131, __VMLINUX_SYMBOL_STR(iio_buffer_register) },
	{ 0xbc3bcc32, __VMLINUX_SYMBOL_STR(iio_kfifo_allocate) },
	{ 0xfb41b55b, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_postenable) },
	{ 0xa5a56e22, __VMLINUX_SYMBOL_STR(iio_buffer_get) },
	{ 0xb81cdc3d, __VMLINUX_SYMBOL_STR(iio_buffer_unregister) },
	{ 0xbee96c2d, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_predisable) },
	{ 0xec1cb108, __VMLINUX_SYMBOL_STR(iio_kfifo_free) },
	{ 0xd9b3191d, __VMLINUX_SYMBOL_STR(iio_alloc_pollfunc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xa709bcce, __VMLINUX_SYMBOL_STR(iio_dealloc_pollfunc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,kfifo_buf";

