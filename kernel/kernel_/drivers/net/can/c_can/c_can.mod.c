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
	{ 0x3441896c, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf78d104f, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x5348b4d1, __VMLINUX_SYMBOL_STR(register_candev) },
	{ 0x9f4648d5, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x752a7328, __VMLINUX_SYMBOL_STR(alloc_can_err_skb) },
	{ 0xebdc323e, __VMLINUX_SYMBOL_STR(napi_complete) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x2d707284, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x9d27ce33, __VMLINUX_SYMBOL_STR(alloc_candev) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xee4efc3, __VMLINUX_SYMBOL_STR(can_bus_off) },
	{ 0x1607bc43, __VMLINUX_SYMBOL_STR(close_candev) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdfba4e70, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x1d392945, __VMLINUX_SYMBOL_STR(can_led_event) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9b38709f, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x7f4ec274, __VMLINUX_SYMBOL_STR(free_candev) },
	{ 0xffb8a96e, __VMLINUX_SYMBOL_STR(unregister_candev) },
	{ 0xb1fb5942, __VMLINUX_SYMBOL_STR(alloc_can_skb) },
	{ 0xb7a2204e, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x3a827996, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x96ff773c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x15582268, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x4c7e110e, __VMLINUX_SYMBOL_STR(open_candev) },
	{ 0x523a6cc4, __VMLINUX_SYMBOL_STR(devm_can_led_init) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x56293198, __VMLINUX_SYMBOL_STR(can_get_echo_skb) },
	{ 0xeda25f3c, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x74a03b0a, __VMLINUX_SYMBOL_STR(can_put_echo_skb) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";

