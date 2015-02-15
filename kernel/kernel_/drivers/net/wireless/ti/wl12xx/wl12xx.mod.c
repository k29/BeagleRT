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
	{ 0x8e2d8841, __VMLINUX_SYMBOL_STR(wl12xx_cmd_build_probe_req) },
	{ 0x588c32c0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8ddd4575, __VMLINUX_SYMBOL_STR(wlcore_boot_upload_nvs) },
	{ 0x53dff67d, __VMLINUX_SYMBOL_STR(wl12xx_debug_level) },
	{ 0x7c7940fb, __VMLINUX_SYMBOL_STR(wlcore_set_key) },
	{ 0xad8075ce, __VMLINUX_SYMBOL_STR(wl1271_acx_init_mem_config) },
	{ 0xe627321d, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x5c1b1ee6, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x93ac23cd, __VMLINUX_SYMBOL_STR(wlcore_event_beacon_loss) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4875ed6a, __VMLINUX_SYMBOL_STR(wlcore_event_dummy_packet) },
	{ 0x4370250b, __VMLINUX_SYMBOL_STR(wlcore_event_inactive_sta) },
	{ 0xe59aa8c3, __VMLINUX_SYMBOL_STR(wlcore_event_ba_rx_constraint) },
	{ 0x23672b1a, __VMLINUX_SYMBOL_STR(wl1271_acx_pm_config) },
	{ 0xb54533f7, __VMLINUX_SYMBOL_STR(usecs_to_jiffies) },
	{ 0x121cb7c0, __VMLINUX_SYMBOL_STR(wlcore_calc_packet_alignment) },
	{ 0xb8e5b49b, __VMLINUX_SYMBOL_STR(wlcore_event_rssi_trigger) },
	{ 0xf0862f57, __VMLINUX_SYMBOL_STR(wlcore_cmd_wait_for_event_or_timeout) },
	{ 0xc527b31a, __VMLINUX_SYMBOL_STR(wlcore_probe) },
	{ 0x117af839, __VMLINUX_SYMBOL_STR(wlcore_alloc_hw) },
	{ 0xa14f58f7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x70a166c9, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xc18c25ac, __VMLINUX_SYMBOL_STR(wl1271_acx_set_ht_capabilities) },
	{ 0x2d2fbe9e, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x417ce69a, __VMLINUX_SYMBOL_STR(wl1271_cmd_configure) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xaecb5c81, __VMLINUX_SYMBOL_STR(wl1271_cmd_data_path) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xa4282df3, __VMLINUX_SYMBOL_STR(wl12xx_acx_mem_cfg) },
	{ 0x8f045d1c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x7bd86b66, __VMLINUX_SYMBOL_STR(wlcore_event_sched_scan_completed) },
	{ 0x8cf08141, __VMLINUX_SYMBOL_STR(wlcore_boot_upload_firmware) },
	{ 0x81bb7c52, __VMLINUX_SYMBOL_STR(wl1271_acx_sleep_auth) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x39071971, __VMLINUX_SYMBOL_STR(wlcore_set_partition) },
	{ 0xfcd858bd, __VMLINUX_SYMBOL_STR(wlcore_enable_interrupts) },
	{ 0x8e40d4e6, __VMLINUX_SYMBOL_STR(wl1271_cmd_test) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x12e3160b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xf285a4a4, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0xcad08331, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x111b1c8, __VMLINUX_SYMBOL_STR(wlcore_event_channel_switch) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xb2b5c949, __VMLINUX_SYMBOL_STR(wlcore_disable_interrupts) },
	{ 0x20219d, __VMLINUX_SYMBOL_STR(wlcore_remove) },
	{ 0x6d9ffd50, __VMLINUX_SYMBOL_STR(wlcore_event_max_tx_failure) },
	{ 0x84a3c035, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb2ba12d0, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_results) },
	{ 0x2f61317f, __VMLINUX_SYMBOL_STR(wlcore_event_soft_gemini_sense) },
	{ 0x331ea3ee, __VMLINUX_SYMBOL_STR(wlcore_free_hw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf99fb059, __VMLINUX_SYMBOL_STR(wlcore_tx_complete) },
	{ 0x5294fba, __VMLINUX_SYMBOL_STR(wl1271_format_buffer) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe512ad0e, __VMLINUX_SYMBOL_STR(wl1271_debugfs_update_stats) },
	{ 0xcd9f5450, __VMLINUX_SYMBOL_STR(wlcore_set_scan_chan_params) },
	{ 0x260ab58a, __VMLINUX_SYMBOL_STR(wlcore_boot_run_firmware) },
	{ 0x9aa6cbb0, __VMLINUX_SYMBOL_STR(wlcore_translate_addr) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x1909361, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_ssid_list) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x6e7c20ef, __VMLINUX_SYMBOL_STR(wlcore_event_roc_complete) },
	{ 0xb3e81f85, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x188f5647, __VMLINUX_SYMBOL_STR(wl1271_cmd_send) },
	{ 0x4a5e046c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x2e6e6074, __VMLINUX_SYMBOL_STR(wl1271_tx_min_rate_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wlcore,mac80211";

MODULE_ALIAS("platform:wl12xx");
