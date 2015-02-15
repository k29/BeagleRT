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
	{ 0x12733c3, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x665b2f1a, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa60b2e1e, __VMLINUX_SYMBOL_STR(btmrvl_register_hdev) },
	{ 0x7e95f9f3, __VMLINUX_SYMBOL_STR(btmrvl_add_card) },
	{ 0x3dbc07f4, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xde35a016, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xd6ef0bb0, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x2230ccf2, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x5477fefa, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x6d83952a, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7c640527, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x9844d293, __VMLINUX_SYMBOL_STR(btmrvl_remove_card) },
	{ 0xdb6d58d6, __VMLINUX_SYMBOL_STR(btmrvl_send_module_cfg_cmd) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x96ff773c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2e03af40, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0xdee203fc, __VMLINUX_SYMBOL_STR(btmrvl_process_event) },
	{ 0x72027dfe, __VMLINUX_SYMBOL_STR(btmrvl_check_evtpkt) },
	{ 0xe76123af, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xef2f70b7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x48e51ec3, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xd92a6cca, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x90ab83f, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3ce54e70, __VMLINUX_SYMBOL_STR(btmrvl_interrupt) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8aed3961, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x28ba8bd, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x50a3d068, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xd3980b65, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0x7999c821, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x38356b74, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xa1fd5de5, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x38226da6, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x6b4caf29, __VMLINUX_SYMBOL_STR(hci_suspend_dev) },
	{ 0xc02d2b91, __VMLINUX_SYMBOL_STR(btmrvl_enable_hs) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x5c9cfd1c, __VMLINUX_SYMBOL_STR(hci_resume_dev) },
	{ 0xb61a0c3b, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xb96cda21, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=btmrvl,bluetooth";

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd912E*");

MODULE_INFO(srcversion, "AB6BD624A1DB7E2C0247286");
