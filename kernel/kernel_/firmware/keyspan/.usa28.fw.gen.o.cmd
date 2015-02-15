cmd_firmware/keyspan/usa28.fw.gen.o := arm-linux-gnueabi-gcc -Wp,-MD,firmware/keyspan/.usa28.fw.gen.o.d  -nostdinc -isystem /usr/lib/gcc-cross/arm-linux-gnueabi/4.7/include -I/home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/include/uapi -Iinclude/generated/uapi -include /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian  -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float         -c -o firmware/keyspan/usa28.fw.gen.o firmware/keyspan/usa28.fw.gen.S

source_firmware/keyspan/usa28.fw.gen.o := firmware/keyspan/usa28.fw.gen.S

deps_firmware/keyspan/usa28.fw.gen.o := \
  /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \

firmware/keyspan/usa28.fw.gen.o: $(deps_firmware/keyspan/usa28.fw.gen.o)

$(deps_firmware/keyspan/usa28.fw.gen.o):
