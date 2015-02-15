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
	{ 0x3ddf7bea, __VMLINUX_SYMBOL_STR(cgroup_unload_subsys) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x941861b3, __VMLINUX_SYMBOL_STR(cgroup_load_subsys) },
	{ 0x22675997, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2ffea74c, __VMLINUX_SYMBOL_STR(sock_from_file) },
	{ 0x109fda8c, __VMLINUX_SYMBOL_STR(cgroup_taskset_next) },
	{ 0x9dd0d972, __VMLINUX_SYMBOL_STR(cgroup_taskset_cur_css) },
	{        0, __VMLINUX_SYMBOL_STR(iterate_fd) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xc84b728a, __VMLINUX_SYMBOL_STR(cgroup_taskset_first) },
	{ 0x5d0678ce, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x898428c8, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

