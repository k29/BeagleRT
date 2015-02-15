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
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x58834770, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0x808fc31d, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x11b57670, __VMLINUX_SYMBOL_STR(gether_get_qmult) },
	{ 0x1e5d9c1c, __VMLINUX_SYMBOL_STR(gether_setup_name_default) },
	{ 0xbbbfb216, __VMLINUX_SYMBOL_STR(gether_get_host_addr_cdc) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xbde35fba, __VMLINUX_SYMBOL_STR(gether_get_ifname) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8878cfa6, __VMLINUX_SYMBOL_STR(gether_cleanup) },
	{ 0xeb669dc9, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0xa8bdc1f9, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0xf7bc2a8, __VMLINUX_SYMBOL_STR(gether_get_dev_addr) },
	{ 0xfde02873, __VMLINUX_SYMBOL_STR(gether_connect) },
	{ 0x69087e8b, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0x9c7e5296, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5daf0e44, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x5a4000f8, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0xb11bc31e, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xe4a5eca9, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x51cdfec2, __VMLINUX_SYMBOL_STR(gether_get_host_addr) },
	{ 0x11a39979, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x66d70ec3, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0x7a845886, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x4a1b660d, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0xff4157f7, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0x1f4c067d, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4ba86d4f, __VMLINUX_SYMBOL_STR(gether_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7d6a2506, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x433a2711, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_ether";

