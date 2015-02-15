cmd_fs/ufs/ufs.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o fs/ufs/ufs.ko fs/ufs/ufs.o fs/ufs/ufs.mod.o
