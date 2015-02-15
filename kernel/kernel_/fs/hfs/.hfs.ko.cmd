cmd_fs/hfs/hfs.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o fs/hfs/hfs.ko fs/hfs/hfs.o fs/hfs/hfs.mod.o
