cmd_drivers/media/common/cypress_firmware.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o drivers/media/common/cypress_firmware.ko drivers/media/common/cypress_firmware.o drivers/media/common/cypress_firmware.mod.o