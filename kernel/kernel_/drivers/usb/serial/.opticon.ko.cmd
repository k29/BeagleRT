cmd_drivers/usb/serial/opticon.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o drivers/usb/serial/opticon.ko drivers/usb/serial/opticon.o drivers/usb/serial/opticon.mod.o