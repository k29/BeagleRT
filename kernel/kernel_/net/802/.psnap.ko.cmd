cmd_net/802/psnap.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o net/802/psnap.ko net/802/psnap.o net/802/psnap.mod.o