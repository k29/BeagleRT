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
	{ 0xb3e81f85, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x2d2fbe9e, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7c456283, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x1607bc43, __VMLINUX_SYMBOL_STR(close_candev) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x4c7e110e, __VMLINUX_SYMBOL_STR(open_candev) },
	{ 0x2d44e433, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xebdc323e, __VMLINUX_SYMBOL_STR(napi_complete) },
	{ 0xdfba4e70, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0xb1fb5942, __VMLINUX_SYMBOL_STR(alloc_can_skb) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x7a973ad5, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x523a6cc4, __VMLINUX_SYMBOL_STR(devm_can_led_init) },
	{ 0x5348b4d1, __VMLINUX_SYMBOL_STR(register_candev) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x9b38709f, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x4a81d87e, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x9d27ce33, __VMLINUX_SYMBOL_STR(alloc_candev) },
	{ 0xfb961d14, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0xadf42bd5, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0xb2aa5b05, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0xa34d4470, __VMLINUX_SYMBOL_STR(clk_get) },
	{ 0x9c7e5296, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xec17ebb0, __VMLINUX_SYMBOL_STR(of_match_node) },
	{ 0xa5beb08d, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x83595ae3, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x9cf999e4, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x752a7328, __VMLINUX_SYMBOL_STR(alloc_can_err_skb) },
	{ 0x1d392945, __VMLINUX_SYMBOL_STR(can_led_event) },
	{ 0x56293198, __VMLINUX_SYMBOL_STR(can_get_echo_skb) },
	{ 0x3a827996, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xeda25f3c, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x3441896c, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x74a03b0a, __VMLINUX_SYMBOL_STR(can_put_echo_skb) },
	{ 0x15582268, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x96ff773c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x788fe103, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x7f4ec274, __VMLINUX_SYMBOL_STR(free_candev) },
	{ 0x2e1ca751, __VMLINUX_SYMBOL_STR(clk_put) },
	{ 0x9bce482f, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xbe843ee7, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0x5416219f, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";

MODULE_ALIAS("platform:at91sam9x5_can");
MODULE_ALIAS("platform:at91_can");
MODULE_ALIAS("of:N*T*Catmel,at91sam9x5-can*");
MODULE_ALIAS("of:N*T*Catmel,at91sam9263-can*");
