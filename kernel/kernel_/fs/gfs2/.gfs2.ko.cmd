cmd_fs/gfs2/gfs2.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o fs/gfs2/gfs2.ko fs/gfs2/gfs2.o fs/gfs2/gfs2.mod.o