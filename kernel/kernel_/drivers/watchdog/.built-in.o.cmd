cmd_drivers/watchdog/built-in.o :=  arm-linux-gnueabi-ld -EL    -r -o drivers/watchdog/built-in.o drivers/watchdog/watchdog.o drivers/watchdog/omap_wdt.o drivers/watchdog/twl4030_wdt.o 
