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
	{ 0x666eba4d, __VMLINUX_SYMBOL_STR(genphy_read_status) },
	{ 0xa6102035, __VMLINUX_SYMBOL_STR(genphy_config_aneg) },
	{ 0xe9b7a3e0, __VMLINUX_SYMBOL_STR(phy_drivers_unregister) },
	{ 0x534edb92, __VMLINUX_SYMBOL_STR(phy_drivers_register) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x734b1260, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xf4f0082e, __VMLINUX_SYMBOL_STR(mdiobus_read) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("mdio:000000000100110111010000011?0110");
MODULE_ALIAS("mdio:000000000100110111010000011?0100");
MODULE_ALIAS("mdio:000000000100110111010000011?0010");
