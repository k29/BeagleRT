cmd_lib/raid6/neon4.o := arm-linux-gnueabi-gcc -Wp,-MD,lib/raid6/.neon4.o.d  -nostdinc -isystem /usr/lib/gcc-cross/arm-linux-gnueabi/4.7/include -I/home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/include/uapi -Iinclude/generated/uapi -include /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -Wno-maybe-uninitialized -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fstack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -DCC_HAVE_ASM_GOTO -ffreestanding -mfloat-abi=softfp -mfpu=neon    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(neon4)"  -D"KBUILD_MODNAME=KBUILD_STR(raid6_pq)" -c -o lib/raid6/.tmp_neon4.o lib/raid6/neon4.c

source_lib/raid6/neon4.o := lib/raid6/neon4.c

deps_lib/raid6/neon4.o := \
  /usr/lib/gcc-cross/arm-linux-gnueabi/4.7/include/arm_neon.h \
  /usr/lib/gcc-cross/arm-linux-gnueabi/4.7/include/stdint.h \
  /usr/lib/gcc-cross/arm-linux-gnueabi/4.7/include/stdint-gcc.h \

lib/raid6/neon4.o: $(deps_lib/raid6/neon4.o)

$(deps_lib/raid6/neon4.o):
