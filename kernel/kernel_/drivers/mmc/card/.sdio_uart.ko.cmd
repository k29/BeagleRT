cmd_drivers/mmc/card/sdio_uart.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o drivers/mmc/card/sdio_uart.ko drivers/mmc/card/sdio_uart.o drivers/mmc/card/sdio_uart.mod.o