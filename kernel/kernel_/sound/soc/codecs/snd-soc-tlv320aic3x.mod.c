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
	{ 0xbc15fb54, __VMLINUX_SYMBOL_STR(snd_soc_test_bits) },
	{ 0xe4c4b28f, __VMLINUX_SYMBOL_STR(gpiod_direction_output) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xeed4fd89, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0x5c9c7456, __VMLINUX_SYMBOL_STR(snd_soc_dapm_mixer_update_power) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xbdb1f04e, __VMLINUX_SYMBOL_STR(regmap_register_patch) },
	{ 0x46a20e87, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xc6bae9d3, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xf816c866, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xbf7fa8f5, __VMLINUX_SYMBOL_STR(regulator_register_notifier) },
	{ 0xe822b0cc, __VMLINUX_SYMBOL_STR(snd_soc_add_codec_controls) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x118040b0, __VMLINUX_SYMBOL_STR(snd_soc_dapm_new_controls) },
	{ 0xa12d929d, __VMLINUX_SYMBOL_STR(desc_to_gpio) },
	{ 0x4dd1a20a, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x4c7a03c4, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x59cda580, __VMLINUX_SYMBOL_STR(devm_regulator_bulk_get) },
	{ 0xa800e71c, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0xb3414e4, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xe749d0fe, __VMLINUX_SYMBOL_STR(regulator_unregister_notifier) },
	{ 0x28cac911, __VMLINUX_SYMBOL_STR(snd_soc_dapm_add_routes) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x49fe1a82, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0x9c7e5296, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3203bf1a, __VMLINUX_SYMBOL_STR(snd_soc_dapm_kcontrol_codec) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x368382e2, __VMLINUX_SYMBOL_STR(of_get_named_gpiod_flags) },
	{ 0xde6c67d6, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0xa1021df2, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x76a2e335, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x40eaffb0, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x42825493, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0xb9f2de69, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0xe654dcd5, __VMLINUX_SYMBOL_STR(snd_soc_codec_set_cache_io) },
	{ 0x839931fe, __VMLINUX_SYMBOL_STR(devm_regmap_init_i2c) },
	{ 0x88452f92, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x28235118, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0xbf8f6942, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0x32723af9, __VMLINUX_SYMBOL_STR(dapm_reg_event) },
	{ 0x687934e9, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb74ed79c, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x6d83952a, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x48ca8a0c, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0xc91b7946, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
	{ 0xec7d8368, __VMLINUX_SYMBOL_STR(snd_soc_write) },
	{ 0xace6657, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Cti,tlv320aic3x*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic33*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3007*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3106*");
MODULE_ALIAS("i2c:tlv320aic3x");
MODULE_ALIAS("i2c:tlv320aic33");
MODULE_ALIAS("i2c:tlv320aic3007");
MODULE_ALIAS("i2c:tlv320aic3106");
