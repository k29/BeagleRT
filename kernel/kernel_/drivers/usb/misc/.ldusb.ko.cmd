cmd_drivers/usb/misc/ldusb.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o drivers/usb/misc/ldusb.ko drivers/usb/misc/ldusb.o drivers/usb/misc/ldusb.mod.o