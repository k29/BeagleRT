cmd_net/caif/caif_usb.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o net/caif/caif_usb.ko net/caif/caif_usb.o net/caif/caif_usb.mod.o