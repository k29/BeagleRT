cmd_drivers/leds/leds-regulator.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o drivers/leds/leds-regulator.ko drivers/leds/leds-regulator.o drivers/leds/leds-regulator.mod.o