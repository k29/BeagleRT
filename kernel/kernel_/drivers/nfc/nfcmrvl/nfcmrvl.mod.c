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
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8d8dc321, __VMLINUX_SYMBOL_STR(nci_recv_frame) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x295fae21, __VMLINUX_SYMBOL_STR(nci_set_config) },
	{ 0x9c7e5296, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x25ccdac1, __VMLINUX_SYMBOL_STR(nci_unregister_device) },
	{ 0x7a973ad5, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd92a6cca, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x48e51ec3, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xb0f4fe18, __VMLINUX_SYMBOL_STR(nci_register_device) },
	{ 0x9e83a9d3, __VMLINUX_SYMBOL_STR(nci_allocate_device) },
	{ 0xe7df55a7, __VMLINUX_SYMBOL_STR(nci_free_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nci";


MODULE_INFO(srcversion, "D05073189A5E1F329592278");
