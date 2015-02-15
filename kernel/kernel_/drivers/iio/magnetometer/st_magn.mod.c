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
	{ 0x7c68753a, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdf76bbeb, __VMLINUX_SYMBOL_STR(iio_pollfunc_store_time) },
	{ 0x57804665, __VMLINUX_SYMBOL_STR(st_sensors_set_enable) },
	{ 0xe6617d0d, __VMLINUX_SYMBOL_STR(st_sensors_sysfs_set_sampling_frequency) },
	{ 0x74d7047, __VMLINUX_SYMBOL_STR(st_sensors_trigger_handler) },
	{ 0x138ec318, __VMLINUX_SYMBOL_STR(st_sensors_deallocate_trigger) },
	{ 0x71a12fb7, __VMLINUX_SYMBOL_STR(st_sensors_sysfs_sampling_frequency_avail) },
	{ 0xcc0ac64e, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x3fd9cdbd, __VMLINUX_SYMBOL_STR(st_sensors_allocate_trigger) },
	{ 0x744de4f6, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0xcf7fdf62, __VMLINUX_SYMBOL_STR(st_sensors_set_fullscale_by_gain) },
	{ 0xf0aad73c, __VMLINUX_SYMBOL_STR(st_sensors_check_device_support) },
	{ 0xfb41b55b, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_postenable) },
	{ 0xfe0d3645, __VMLINUX_SYMBOL_STR(st_sensors_init_sensor) },
	{ 0xbee96c2d, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_predisable) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa7f6916, __VMLINUX_SYMBOL_STR(st_sensors_sysfs_get_sampling_frequency) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb9e8a806, __VMLINUX_SYMBOL_STR(st_sensors_sysfs_scale_avail) },
	{ 0xd07bdf77, __VMLINUX_SYMBOL_STR(st_sensors_read_info_raw) },
	{ 0x851a188a, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio-triggered-buffer,industrialio,st_sensors";

