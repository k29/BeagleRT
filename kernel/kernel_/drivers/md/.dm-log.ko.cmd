cmd_drivers/md/dm-log.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o drivers/md/dm-log.ko drivers/md/dm-log.o drivers/md/dm-log.mod.o