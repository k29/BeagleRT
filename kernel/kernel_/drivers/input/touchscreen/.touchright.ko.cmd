cmd_drivers/input/touchscreen/touchright.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o drivers/input/touchscreen/touchright.ko drivers/input/touchscreen/touchright.o drivers/input/touchscreen/touchright.mod.o