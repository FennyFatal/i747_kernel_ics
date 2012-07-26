cmd_arch/arm/mach-msm/board-8064-camera.o := /home/fenny/i747/scripts/gcc-wrapper.py /opt/toolchains/arm-eabi-4.4.3/bin/arm-eabi-gcc -Wp,-MD,arch/arm/mach-msm/.board-8064-camera.o.d  -nostdinc -isystem /opt/toolchains/arm-eabi-4.4.3/bin/../lib/gcc/arm-eabi/4.4.3/include -I/home/fenny/i747/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -D__ -Os -marm -fno-dwarf2-cfi-asm -fstack-protector -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fomit-frame-pointer -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(board_8064_camera)"  -D"KBUILD_MODNAME=KBUILD_STR(board_8064_all)" -c -o arch/arm/mach-msm/.tmp_board-8064-camera.o arch/arm/mach-msm/board-8064-camera.c

source_arch/arm/mach-msm/board-8064-camera.o := arch/arm/mach-msm/board-8064-camera.c

deps_arch/arm/mach-msm/board-8064-camera.o := \
    $(wildcard include/config/arch/msm8960.h) \
    $(wildcard include/config/arch/apq8064.h) \
    $(wildcard include/config/msm/camera.h) \
    $(wildcard include/config/imx074.h) \
    $(wildcard include/config/i2c.h) \

arch/arm/mach-msm/board-8064-camera.o: $(deps_arch/arm/mach-msm/board-8064-camera.o)

$(deps_arch/arm/mach-msm/board-8064-camera.o):
