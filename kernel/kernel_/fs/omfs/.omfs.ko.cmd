cmd_fs/omfs/omfs.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o fs/omfs/omfs.ko fs/omfs/omfs.o fs/omfs/omfs.mod.o