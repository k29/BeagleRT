cmd_drivers/char/built-in.o :=  arm-linux-gnueabi-ld -EL    -r -o drivers/char/built-in.o drivers/char/mem.o drivers/char/random.o drivers/char/misc.o drivers/char/apm-emulation.o drivers/char/hw_random/built-in.o drivers/char/agp/built-in.o 