#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x94c8457c, "module_layout" },
	{ 0xc3fe87c8, "param_ops_uint" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x2a1b73a8, "no_llseek" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8e03b3aa, "spi_new_device" },
	{ 0x29d10f99, "spi_busnum_to_master" },
	{ 0x9d669763, "memcpy" },
	{ 0x7ff6cdd6, "spi_register_driver" },
	{ 0x8b8e1db8, "__class_create" },
	{ 0x93d1de0c, "__register_chrdev" },
	{ 0x23445860, "put_device" },
	{ 0xbe9aed61, "spi_setup" },
	{ 0x9a9f7e8f, "get_device" },
	{ 0xad998077, "complete" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x2f4ea1ac, "wait_for_completion" },
	{ 0x5d01276d, "spi_async" },
	{ 0x5f754e5a, "memset" },
	{ 0xbd7e845, "nonseekable_open" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xed5001b6, "class_destroy" },
	{ 0x9cc50c05, "driver_unregister" },
	{ 0x411cc146, "device_unregister" },
	{ 0xb2a9e083, "kmalloc_caches" },
	{ 0x343a1a8, "__list_add" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xae20584c, "device_create" },
	{ 0xd3dbfbc4, "_find_first_zero_bit_le" },
	{ 0xd939f692, "__mutex_init" },
	{ 0xf734867f, "kmem_cache_alloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbed0cb65, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x1f69cbe, "device_destroy" },
	{ 0x521445b, "list_del" },
	{ 0xd18fa1f2, "mutex_lock" },
	{ 0xaea99e9d, "_raw_spin_unlock_irq" },
	{ 0x282b77de, "dev_set_drvdata" },
	{ 0xe551272c, "_raw_spin_lock_irq" },
	{ 0x744e8cfc, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

