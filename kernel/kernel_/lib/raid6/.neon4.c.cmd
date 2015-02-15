cmd_lib/raid6/neon4.c := awk -f/home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/lib/raid6/unroll.awk -vN=4 < lib/raid6/neon.uc > lib/raid6/neon4.c || ( rm -f lib/raid6/neon4.c && exit 1 )
