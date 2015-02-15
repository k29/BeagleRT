cmd_fs/efs/efs.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o fs/efs/efs.ko fs/efs/efs.o fs/efs/efs.mod.o
