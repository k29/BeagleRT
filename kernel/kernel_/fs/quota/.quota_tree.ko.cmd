cmd_fs/quota/quota_tree.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o fs/quota/quota_tree.ko fs/quota/quota_tree.o fs/quota/quota_tree.mod.o