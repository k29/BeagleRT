cmd_drivers/gpio/gpio-adnp.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o drivers/gpio/gpio-adnp.ko drivers/gpio/gpio-adnp.o drivers/gpio/gpio-adnp.mod.o