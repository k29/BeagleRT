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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x20b2f6b4, __VMLINUX_SYMBOL_STR(is_fw_load) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x15ac698d, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x90dfb577, __VMLINUX_SYMBOL_STR(snd_card_create) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x9bc9dc23, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xba8e0862, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0xaaf46236, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_integer) },
	{ 0xced41dd6, __VMLINUX_SYMBOL_STR(snd_pcm_link_rwlock) },
	{ 0x15e46189, __VMLINUX_SYMBOL_STR(cx231xx_register_extension) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x612299a6, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6ca00955, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0xfb2b5f57, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x78f0f483, __VMLINUX_SYMBOL_STR(cx231xx_capture_start) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc7b58f35, __VMLINUX_SYMBOL_STR(cx231xx_set_alt_setting) },
	{ 0x3339c16f, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x587f3b13, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x6541b244, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0xc2d7fedc, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0xd867536e, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x8af72d5c, __VMLINUX_SYMBOL_STR(cx231xx_unregister_extension) },
	{ 0x36834220, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cx231xx,snd-pcm,snd";

