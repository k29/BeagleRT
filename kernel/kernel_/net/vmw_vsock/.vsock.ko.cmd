cmd_net/vmw_vsock/vsock.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o net/vmw_vsock/vsock.ko net/vmw_vsock/vsock.o net/vmw_vsock/vsock.mod.o