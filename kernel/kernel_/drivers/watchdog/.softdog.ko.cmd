cmd_drivers/watchdog/softdog.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o drivers/watchdog/softdog.ko drivers/watchdog/softdog.o drivers/watchdog/softdog.mod.o