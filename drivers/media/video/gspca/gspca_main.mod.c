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
	{ 0x87a7cf, "video_ioctl2" },
	{ 0xb2a9e083, "kmalloc_caches" },
	{ 0x9a033f32, "__video_register_device" },
	{ 0xfc6e8775, "__init_waitqueue_head" },
	{ 0xd939f692, "__mutex_init" },
	{ 0xf6372969, "input_free_device" },
	{ 0x65c7509d, "input_register_device" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x4a81ce30, "input_allocate_device" },
	{ 0xf734867f, "kmem_cache_alloc" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xdf4c8767, "ns_to_timeval" },
	{ 0xc87c1f84, "ktime_get" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x3d8d39b0, "vm_insert_page" },
	{ 0x1263d2af, "vmalloc_to_page" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x948afe9c, "video_devdata" },
	{ 0xc3c24030, "module_put" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x999e8297, "vfree" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0xbc3d21af, "finish_wait" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x69ff5332, "prepare_to_wait" },
	{ 0x5f754e5a, "memset" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x328a05f1, "strncpy" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xdabd9725, "video_unregister_device" },
	{ 0x282b77de, "dev_set_drvdata" },
	{ 0xfb3f4bf1, "input_unregister_device" },
	{ 0xd18fa1f2, "mutex_lock" },
	{  0xf1338, "__wake_up" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa232a87c, "usb_clear_halt" },
	{ 0x744e8cfc, "dev_get_drvdata" },
	{ 0x50980325, "usb_set_interface" },
	{ 0x63e13168, "usb_kill_urb" },
	{ 0xbed0cb65, "mutex_unlock" },
	{ 0xbc4e3793, "mutex_lock_interruptible" },
	{ 0x1361ca51, "usb_free_urb" },
	{ 0xb1ed472c, "usb_free_coherent" },
	{ 0xe5ae572, "usb_alloc_coherent" },
	{ 0xad4e1f01, "usb_alloc_urb" },
	{ 0x2e23b4fc, "usb_ifnum_to_if" },
	{ 0x565c99cb, "usb_submit_urb" },
	{ 0x27e1a049, "printk" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

