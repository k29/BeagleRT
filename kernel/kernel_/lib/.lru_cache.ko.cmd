cmd_lib/lru_cache.ko := arm-linux-gnueabi-ld -EL -r  -T /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/module-common.lds --build-id  -o lib/lru_cache.ko lib/lru_cache.o lib/lru_cache.mod.o