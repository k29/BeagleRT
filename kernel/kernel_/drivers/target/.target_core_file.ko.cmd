cmd_drivers/target/target_core_file.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o drivers/target/target_core_file.ko drivers/target/target_core_file.o drivers/target/target_core_file.mod.o