cmd_drivers/usb/serial/aircable.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o drivers/usb/serial/aircable.ko drivers/usb/serial/aircable.o drivers/usb/serial/aircable.mod.o