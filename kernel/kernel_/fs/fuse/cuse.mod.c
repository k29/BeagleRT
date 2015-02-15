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
	{ 0xbbe3a731, __VMLINUX_SYMBOL_STR(fuse_file_poll) },
	{ 0xcabab563, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x407dd4b5, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x636d8621, __VMLINUX_SYMBOL_STR(fuse_dev_operations) },
	{ 0xc5b0660d, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x1285a49a, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xe136f61, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x26dc2f28, __VMLINUX_SYMBOL_STR(fuse_do_open) },
	{ 0xe3f92bb1, __VMLINUX_SYMBOL_STR(fuse_conn_get) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xae13b6e7, __VMLINUX_SYMBOL_STR(fuse_conn_kill) },
	{ 0xfb4f3c97, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x6acb8042, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x15a8fd85, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x5a4388fd, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0xa3843452, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x1d6b01de, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xedd5fff7, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xabd72c87, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x77bc13a0, __VMLINUX_SYMBOL_STR(strim) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x65e59b74, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x4cdda707, __VMLINUX_SYMBOL_STR(fuse_direct_io) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x6ac1f097, __VMLINUX_SYMBOL_STR(fuse_do_ioctl) },
	{ 0x14c57f1f, __VMLINUX_SYMBOL_STR(fuse_sync_release) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb70e8b15, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x482a24fd, __VMLINUX_SYMBOL_STR(fuse_conn_put) },
	{ 0xce98bfc6, __VMLINUX_SYMBOL_STR(fuse_put_request) },
	{ 0x2c098c08, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x3ddbefa0, __VMLINUX_SYMBOL_STR(fuse_request_send_background) },
	{ 0x13717f44, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x56e5e8d5, __VMLINUX_SYMBOL_STR(fuse_get_req_for_background) },
	{ 0xd64e9d22, __VMLINUX_SYMBOL_STR(fuse_conn_init) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfa980105, __VMLINUX_SYMBOL_STR(fuse_dev_release) },
	{ 0x5d1bb69e, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xe97e547, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x117275a3, __VMLINUX_SYMBOL_STR(fuse_abort_conn) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

