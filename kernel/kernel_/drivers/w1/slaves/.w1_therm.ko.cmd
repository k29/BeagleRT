cmd_drivers/w1/slaves/w1_therm.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o drivers/w1/slaves/w1_therm.ko drivers/w1/slaves/w1_therm.o drivers/w1/slaves/w1_therm.mod.o