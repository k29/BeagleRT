cmd_crypto/ghash-generic.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o crypto/ghash-generic.ko crypto/ghash-generic.o crypto/ghash-generic.mod.o