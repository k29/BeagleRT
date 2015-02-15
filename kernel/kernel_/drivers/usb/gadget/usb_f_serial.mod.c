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
	{ 0x808fc31d, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0xf4bf65ba, __VMLINUX_SYMBOL_STR(gserial_connect) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xeb669dc9, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0x69087e8b, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x9c7e5296, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5a4000f8, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0x28c29e5c, __VMLINUX_SYMBOL_STR(gserial_disconnect) },
	{ 0x11a39979, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x33bfdca2, __VMLINUX_SYMBOL_STR(gserial_alloc_line) },
	{ 0x7a845886, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x1f4c067d, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb6652875, __VMLINUX_SYMBOL_STR(gserial_free_line) },
	{ 0x124740b0, __VMLINUX_SYMBOL_STR(usb_string_id) },
	{ 0x7d6a2506, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x433a2711, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_serial";

