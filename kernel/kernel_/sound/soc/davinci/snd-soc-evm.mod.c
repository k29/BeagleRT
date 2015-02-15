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
	{ 0xfec291c3, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_card) },
	{ 0x814e26fa, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_card_name) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbec25473, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x1397b054, __VMLINUX_SYMBOL_STR(snd_soc_pm_ops) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x118040b0, __VMLINUX_SYMBOL_STR(snd_soc_dapm_new_controls) },
	{ 0x2d2fbe9e, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x28cac911, __VMLINUX_SYMBOL_STR(snd_soc_dapm_add_routes) },
	{ 0x9c7e5296, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7a6cc893, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x7e055d32, __VMLINUX_SYMBOL_STR(snd_soc_unregister_card) },
	{ 0x385cc8ef, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x97ec4799, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0x797987cb, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_audio_routing) },
	{ 0xea7d1a50, __VMLINUX_SYMBOL_STR(snd_soc_dapm_disable_pin) },
	{ 0x94083e74, __VMLINUX_SYMBOL_STR(snd_soc_dapm_enable_pin) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb3e81f85, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x6d83952a, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x44f5e8b5, __VMLINUX_SYMBOL_STR(of_allnodes) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Cti,da830-evm-audio*");
