cmd_drivers/usb/misc/usbled.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o drivers/usb/misc/usbled.ko drivers/usb/misc/usbled.o drivers/usb/misc/usbled.mod.o