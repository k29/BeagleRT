cmd_net/dccp/dccp_ipv6.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o net/dccp/dccp_ipv6.ko net/dccp/dccp_ipv6.o net/dccp/dccp_ipv6.mod.o