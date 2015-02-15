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
	{ 0x3fc867de, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x96c48c48, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0x6d92ed7d, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x56293198, __VMLINUX_SYMBOL_STR(can_get_echo_skb) },
	{ 0xee4efc3, __VMLINUX_SYMBOL_STR(can_bus_off) },
	{ 0x74a03b0a, __VMLINUX_SYMBOL_STR(can_put_echo_skb) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x96ff773c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xe2ef4525, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xeda25f3c, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x4c7e110e, __VMLINUX_SYMBOL_STR(open_candev) },
	{ 0x523a6cc4, __VMLINUX_SYMBOL_STR(devm_can_led_init) },
	{ 0x5348b4d1, __VMLINUX_SYMBOL_STR(register_candev) },
	{ 0x8d7ea373, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x6d83952a, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x5daf0e44, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xf00af5f6, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x63636293, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0x2d44e433, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x44c41aac, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x9d27ce33, __VMLINUX_SYMBOL_STR(alloc_candev) },
	{ 0x4a81d87e, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x56dadcd3, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x385cc8ef, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb1fb5942, __VMLINUX_SYMBOL_STR(alloc_can_skb) },
	{ 0x15582268, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xa18499a9, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x752a7328, __VMLINUX_SYMBOL_STR(alloc_can_err_skb) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x1d392945, __VMLINUX_SYMBOL_STR(can_led_event) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x84e3fd1a, __VMLINUX_SYMBOL_STR(can_free_echo_skb) },
	{ 0x6a12736, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x1607bc43, __VMLINUX_SYMBOL_STR(close_candev) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x7a973ad5, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd1664c96, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x7f4ec274, __VMLINUX_SYMBOL_STR(free_candev) },
	{ 0xe16ce611, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x7c456283, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xffb8a96e, __VMLINUX_SYMBOL_STR(unregister_candev) },
	{ 0x42767c14, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x9c7e5296, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x6be96bf6, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x1496c02a, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0xd2f853c8, __VMLINUX_SYMBOL_STR(regulator_enable) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";

MODULE_ALIAS("spi:mcp2510");
MODULE_ALIAS("spi:mcp2515");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515*");
