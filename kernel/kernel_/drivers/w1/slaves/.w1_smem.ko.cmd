cmd_drivers/w1/slaves/w1_smem.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o drivers/w1/slaves/w1_smem.ko drivers/w1/slaves/w1_smem.o drivers/w1/slaves/w1_smem.mod.o