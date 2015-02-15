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
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xafad493b, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x8779a34f, __VMLINUX_SYMBOL_STR(param_ops_byte) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe2bccb66, __VMLINUX_SYMBOL_STR(ffs_name_dev) },
	{ 0xb6c563ca, __VMLINUX_SYMBOL_STR(ffs_single_dev) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb674d656, __VMLINUX_SYMBOL_STR(usb_composite_probe) },
	{ 0xa1403523, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xbebd9d94, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xfcd52ab8, __VMLINUX_SYMBOL_STR(usb_remove_function) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd3d31034, __VMLINUX_SYMBOL_STR(usb_composite_overwrite_options) },
	{ 0xd94d93e2, __VMLINUX_SYMBOL_STR(usb_add_config) },
	{ 0x9595eb1a, __VMLINUX_SYMBOL_STR(usb_string_ids_tab) },
	{ 0xca83bf93, __VMLINUX_SYMBOL_STR(rndis_borrow_net) },
	{ 0x4a1b660d, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0xe4a5eca9, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0xff4157f7, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa8bdc1f9, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0x66d70ec3, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0xbb907f05, __VMLINUX_SYMBOL_STR(usb_get_function_instance) },
	{ 0x69087e8b, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x6d196ae2, __VMLINUX_SYMBOL_STR(usb_composite_unregister) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x4165af55, __VMLINUX_SYMBOL_STR(usb_get_function) },
	{ 0x90f965bb, __VMLINUX_SYMBOL_STR(usb_put_function) },
	{ 0x8a3eb289, __VMLINUX_SYMBOL_STR(usb_add_function) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb_f_fs,libcomposite,usb_f_rndis,u_ether";

