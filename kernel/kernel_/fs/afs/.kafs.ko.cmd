cmd_fs/afs/kafs.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o fs/afs/kafs.ko fs/afs/kafs.o fs/afs/kafs.mod.o