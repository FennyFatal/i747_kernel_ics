#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x94c8457c, "module_layout" },
	{ 0x6004d1b2, "dma_map_sg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9d669763, "memcpy" },
	{ 0xd5152710, "sg_next" },
	{ 0xbe57f446, "dma_unmap_sg" },
	{ 0x3786761f, "_dev_info" },
	{ 0xe4d14011, "msm_dmov_enqueue_cmd" },
	{ 0x9f9c4e9, "clk_reset" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xb2a9e083, "kmalloc_caches" },
	{ 0x6faade5b, "clk_enable" },
	{ 0x3a31bafd, "clk_set_rate" },
	{ 0xf65c6931, "clk_get" },
	{ 0xbb612735, "dma_alloc_coherent" },
	{ 0xb1758505, "platform_get_resource_byname" },
	{ 0x8ff97ceb, "__msm_ioremap" },
	{ 0xdfe50599, "platform_get_resource" },
	{ 0xf734867f, "kmem_cache_alloc" },
	{ 0xa1ecef4f, "dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xf6d0a746, "clk_disable" },
	{ 0x6f00ffcb, "dma_free_coherent" },
	{ 0x45a55ec8, "__iounmap" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "024B2632D919B85C4C856DA");
