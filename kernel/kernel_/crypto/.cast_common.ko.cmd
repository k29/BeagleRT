cmd_crypto/cast_common.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o crypto/cast_common.ko crypto/cast_common.o crypto/cast_common.mod.o