cmd_drivers/hid/hid-dr.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o drivers/hid/hid-dr.ko drivers/hid/hid-dr.o drivers/hid/hid-dr.mod.o