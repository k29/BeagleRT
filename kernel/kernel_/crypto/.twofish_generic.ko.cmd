cmd_crypto/twofish_generic.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o crypto/twofish_generic.ko crypto/twofish_generic.o crypto/twofish_generic.mod.o