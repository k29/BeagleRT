cmd_crypto/cast6_generic.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o crypto/cast6_generic.ko crypto/cast6_generic.o crypto/cast6_generic.mod.o