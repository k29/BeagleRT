cmd_drivers/usb/gadget/gadgetfs.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o drivers/usb/gadget/gadgetfs.ko drivers/usb/gadget/gadgetfs.o drivers/usb/gadget/gadgetfs.mod.o