cmd_net/ipv6/tunnel6.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o net/ipv6/tunnel6.ko net/ipv6/tunnel6.o net/ipv6/tunnel6.mod.o