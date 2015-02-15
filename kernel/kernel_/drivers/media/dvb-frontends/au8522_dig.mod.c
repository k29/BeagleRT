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
	{ 0xff08ae0b, __VMLINUX_SYMBOL_STR(au8522_release_state) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x26485f8d, __VMLINUX_SYMBOL_STR(au8522_led_ctrl) },
	{ 0xd5b57921, __VMLINUX_SYMBOL_STR(au8522_writereg) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x13f12196, __VMLINUX_SYMBOL_STR(au8522_readreg) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x170e7466, __VMLINUX_SYMBOL_STR(au8522_i2c_gate_ctrl) },
	{ 0x9c803a59, __VMLINUX_SYMBOL_STR(au8522_sleep) },
	{ 0x1d6d0f7a, __VMLINUX_SYMBOL_STR(au8522_analog_i2c_gate_ctrl) },
	{ 0x836583fd, __VMLINUX_SYMBOL_STR(au8522_get_state) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe5fb9cb7, __VMLINUX_SYMBOL_STR(au8522_init) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=au8522_common";

