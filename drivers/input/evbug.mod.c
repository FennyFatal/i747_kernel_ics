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
	{ 0xb5d3bf9a, "input_register_handler" },
	{ 0xb2a9e083, "kmalloc_caches" },
	{ 0x61e1bae4, "input_open_device" },
	{ 0x4d821e76, "input_register_handle" },
	{ 0xf734867f, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b70a9a7, "input_unregister_handle" },
	{ 0xb60bb366, "input_close_device" },
	{ 0x27e1a049, "printk" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3a1c70b4, "input_unregister_handler" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("input:b*v*p*e*-e*k*r*a*m*l*s*f*w*");
