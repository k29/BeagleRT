cmd_drivers/misc/eeprom/eeprom.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o drivers/misc/eeprom/eeprom.ko drivers/misc/eeprom/eeprom.o drivers/misc/eeprom/eeprom.mod.o