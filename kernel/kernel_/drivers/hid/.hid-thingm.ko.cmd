cmd_drivers/hid/hid-thingm.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o drivers/hid/hid-thingm.ko drivers/hid/hid-thingm.o drivers/hid/hid-thingm.mod.o