cmd_drivers/hid/hid-sensor-hub.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o drivers/hid/hid-sensor-hub.ko drivers/hid/hid-sensor-hub.o drivers/hid/hid-sensor-hub.mod.o