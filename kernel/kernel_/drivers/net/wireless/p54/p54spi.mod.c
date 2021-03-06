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
	{ 0x80855116, __VMLINUX_SYMBOL_STR(p54_free_skb) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x6c6cdd4d, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0xb7170839, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x6a12736, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xbc1cd9af, __VMLINUX_SYMBOL_STR(p54_rx) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x48e51ec3, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7b24185c, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x687934e9, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x6be96bf6, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xef1e99da, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0xe5f81b28, __VMLINUX_SYMBOL_STR(p54_register_common) },
	{ 0x257f7f24, __VMLINUX_SYMBOL_STR(p54_parse_eeprom) },
	{ 0x7a973ad5, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x230250ae, __VMLINUX_SYMBOL_STR(p54_parse_firmware) },
	{ 0xde35a016, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x5daf0e44, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xbc477a2, __VMLINUX_SYMBOL_STR(irq_set_irq_type) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x76d07d6e, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0xe4c4b28f, __VMLINUX_SYMBOL_STR(gpiod_direction_output) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0x8d7ea373, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x9c7e5296, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8b4531f0, __VMLINUX_SYMBOL_STR(p54_init_common) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2ef2d329, __VMLINUX_SYMBOL_STR(p54_free_common) },
	{ 0x3dbc07f4, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x8e9c7933, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0xf816c866, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x1121c74b, __VMLINUX_SYMBOL_STR(p54_unregister_common) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=p54common,mac80211";

