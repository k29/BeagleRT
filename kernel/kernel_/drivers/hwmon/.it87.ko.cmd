cmd_drivers/hwmon/it87.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o drivers/hwmon/it87.ko drivers/hwmon/it87.o drivers/hwmon/it87.mod.o