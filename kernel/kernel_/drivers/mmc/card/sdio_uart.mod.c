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
	{ 0x6fc55845, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xf1e5de86, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x2b422ae0, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x12733c3, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0x6cac66e, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0x7d158682, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0x665b2f1a, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xf2b0e774, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0xf28759e8, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x29811201, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc068440e, __VMLINUX_SYMBOL_STR(__kfifo_alloc) },
	{ 0x5daf0e44, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x20d2c3e7, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x17e13b65, __VMLINUX_SYMBOL_STR(tty_port_register_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x66d6b9e9, __VMLINUX_SYMBOL_STR(tty_unregister_device) },
	{ 0x9ed3eb13, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x50a3d068, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xb92eabaa, __VMLINUX_SYMBOL_STR(tty_port_put) },
	{ 0xa93e6cc, __VMLINUX_SYMBOL_STR(tty_standard_install) },
	{ 0x9aae4343, __VMLINUX_SYMBOL_STR(tty_port_open) },
	{ 0x1528b20, __VMLINUX_SYMBOL_STR(tty_port_close) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0xfb26a7cf, __VMLINUX_SYMBOL_STR(tty_port_hangup) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x28a74768, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x28ba8bd, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x2230ccf2, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x5477fefa, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x64d84853, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0x1ac3fe25, __VMLINUX_SYMBOL_STR(tty_wakeup) },
	{ 0x169f7302, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0x454d4f91, __VMLINUX_SYMBOL_STR(tty_port_tty_hangup) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5ac02b22, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x872c2afd, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_flags) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x7999c821, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0xd3980b65, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8aed3961, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdb760f52, __VMLINUX_SYMBOL_STR(__kfifo_free) },
	{ 0x38356b74, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("sdio:c01v*d*");
MODULE_ALIAS("sdio:c04v*d*");
