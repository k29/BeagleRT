cmd_drivers/usb/misc/isight_firmware.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o drivers/usb/misc/isight_firmware.ko drivers/usb/misc/isight_firmware.o drivers/usb/misc/isight_firmware.mod.o