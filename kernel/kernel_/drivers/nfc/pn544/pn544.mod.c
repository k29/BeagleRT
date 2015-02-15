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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcaf7a5ff, __VMLINUX_SYMBOL_STR(nfc_hci_send_event) },
	{ 0x1647750, __VMLINUX_SYMBOL_STR(nfc_dep_link_is_up) },
	{ 0xcd3b960c, __VMLINUX_SYMBOL_STR(nfc_hci_set_param) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x6f0ee0d4, __VMLINUX_SYMBOL_STR(nfc_hci_allocate_device) },
	{ 0x36add55e, __VMLINUX_SYMBOL_STR(nfc_find_se) },
	{ 0x747c4de7, __VMLINUX_SYMBOL_STR(nfc_tm_activated) },
	{ 0x5daf0e44, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe1ea2a68, __VMLINUX_SYMBOL_STR(nfc_hci_get_clientdata) },
	{ 0xf13316d9, __VMLINUX_SYMBOL_STR(nfc_hci_send_cmd) },
	{ 0xa08ebea8, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xef2f70b7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xc498093c, __VMLINUX_SYMBOL_STR(nfc_set_remote_general_bytes) },
	{ 0x60c3b607, __VMLINUX_SYMBOL_STR(nfc_hci_target_discovered) },
	{ 0xd731b8d6, __VMLINUX_SYMBOL_STR(nfc_hci_register_device) },
	{ 0x50565682, __VMLINUX_SYMBOL_STR(nfc_get_local_general_bytes) },
	{ 0xae7fd8bf, __VMLINUX_SYMBOL_STR(nfc_hci_free_device) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfc8032b4, __VMLINUX_SYMBOL_STR(nfc_hci_unregister_device) },
	{ 0x96ff773c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf09f471b, __VMLINUX_SYMBOL_STR(nfc_tm_data_received) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x54f73fad, __VMLINUX_SYMBOL_STR(nfc_add_se) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x51b862ce, __VMLINUX_SYMBOL_STR(nfc_hci_send_cmd_async) },
	{ 0xa544d8f0, __VMLINUX_SYMBOL_STR(nfc_hci_get_param) },
	{ 0xfa6255de, __VMLINUX_SYMBOL_STR(nfc_hci_set_clientdata) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hci,nfc";

