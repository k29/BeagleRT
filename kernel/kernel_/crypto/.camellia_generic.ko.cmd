cmd_crypto/camellia_generic.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o crypto/camellia_generic.ko crypto/camellia_generic.o crypto/camellia_generic.mod.o