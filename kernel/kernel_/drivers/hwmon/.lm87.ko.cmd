cmd_drivers/hwmon/lm87.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o drivers/hwmon/lm87.ko drivers/hwmon/lm87.o drivers/hwmon/lm87.mod.o