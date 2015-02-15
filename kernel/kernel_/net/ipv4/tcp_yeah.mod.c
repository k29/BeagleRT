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
	{ 0xd6f5a4ee, __VMLINUX_SYMBOL_STR(tcp_vegas_get_info) },
	{ 0x5e407184, __VMLINUX_SYMBOL_STR(tcp_vegas_cwnd_event) },
	{ 0xe18422a1, __VMLINUX_SYMBOL_STR(tcp_vegas_state) },
	{ 0xe7565e57, __VMLINUX_SYMBOL_STR(tcp_reno_min_cwnd) },
	{ 0xdcdb62b9, __VMLINUX_SYMBOL_STR(tcp_unregister_congestion_control) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x73518e47, __VMLINUX_SYMBOL_STR(tcp_register_congestion_control) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x5475fe5a, __VMLINUX_SYMBOL_STR(tcp_cong_avoid_ai) },
	{ 0x16c2a5ac, __VMLINUX_SYMBOL_STR(tcp_slow_start) },
	{ 0x15534b7, __VMLINUX_SYMBOL_STR(tcp_is_cwnd_limited) },
	{ 0x13f7cb97, __VMLINUX_SYMBOL_STR(tcp_vegas_init) },
	{ 0x12f7129e, __VMLINUX_SYMBOL_STR(tcp_vegas_pkts_acked) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tcp_vegas";

