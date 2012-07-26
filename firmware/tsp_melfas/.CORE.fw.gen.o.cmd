cmd_firmware/tsp_melfas/CORE.fw.gen.o := /home/fenny/i747/scripts/gcc-wrapper.py /opt/toolchains/arm-eabi-4.4.3/bin/arm-eabi-gcc -Wp,-MD,firmware/tsp_melfas/.CORE.fw.gen.o.d  -nostdinc -isystem /opt/toolchains/arm-eabi-4.4.3/bin/../lib/gcc/arm-eabi/4.4.3/include -I/home/fenny/i747/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables  -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float -gdwarf-2        -c -o firmware/tsp_melfas/CORE.fw.gen.o firmware/tsp_melfas/CORE.fw.gen.S

source_firmware/tsp_melfas/CORE.fw.gen.o := firmware/tsp_melfas/CORE.fw.gen.S

deps_firmware/tsp_melfas/CORE.fw.gen.o := \
  /home/fenny/i747/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \

firmware/tsp_melfas/CORE.fw.gen.o: $(deps_firmware/tsp_melfas/CORE.fw.gen.o)

$(deps_firmware/tsp_melfas/CORE.fw.gen.o):
