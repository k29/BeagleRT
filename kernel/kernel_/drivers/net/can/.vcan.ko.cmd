cmd_drivers/net/can/vcan.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o drivers/net/can/vcan.ko drivers/net/can/vcan.o drivers/net/can/vcan.mod.o