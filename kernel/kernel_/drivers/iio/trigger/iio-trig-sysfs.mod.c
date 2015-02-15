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
	{ 0x3c974cfc, __VMLINUX_SYMBOL_STR(iio_bus_type) },
	{ 0xe97e547, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xa3843452, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x1d6b01de, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xabd72c87, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x4392578e, __VMLINUX_SYMBOL_STR(iio_trigger_poll) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfb4f3c97, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x45e81c75, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x236a45f7, __VMLINUX_SYMBOL_STR(iio_trigger_register) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xcc1b602d, __VMLINUX_SYMBOL_STR(iio_trigger_alloc) },
	{ 0xc690866c, __VMLINUX_SYMBOL_STR(irq_work_queue) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbebd9d94, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa3555058, __VMLINUX_SYMBOL_STR(iio_trigger_free) },
	{ 0x5c222d7f, __VMLINUX_SYMBOL_STR(iio_trigger_unregister) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";

