cmd_drivers/md/raid1.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o drivers/md/raid1.ko drivers/md/raid1.o drivers/md/raid1.mod.o