cmd_crypto/sha512_generic.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o crypto/sha512_generic.ko crypto/sha512_generic.o crypto/sha512_generic.mod.o