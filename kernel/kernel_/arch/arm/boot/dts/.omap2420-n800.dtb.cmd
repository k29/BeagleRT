cmd_arch/arm/boot/dts/omap2420-n800.dtb := arm-linux-gnueabi-gcc -E -Wp,-MD,arch/arm/boot/dts/.omap2420-n800.dtb.d.pre.tmp -nostdinc -I/home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts -I/home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts/include -I/home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.omap2420-n800.dtb.dts.tmp arch/arm/boot/dts/omap2420-n800.dts ; /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/omap2420-n800.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.omap2420-n800.dtb.d.dtc.tmp arch/arm/boot/dts/.omap2420-n800.dtb.dts.tmp ; cat arch/arm/boot/dts/.omap2420-n800.dtb.d.pre.tmp arch/arm/boot/dts/.omap2420-n800.dtb.d.dtc.tmp > arch/arm/boot/dts/.omap2420-n800.dtb.d

source_arch/arm/boot/dts/omap2420-n800.dtb := arch/arm/boot/dts/omap2420-n800.dts

deps_arch/arm/boot/dts/omap2420-n800.dtb := \
  arch/arm/boot/dts/omap2420-n8x0-common.dtsi \
  arch/arm/boot/dts/omap2420.dtsi \
  arch/arm/boot/dts/omap2.dtsi \
  /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts/include/dt-bindings/pinctrl/omap.h \
  arch/arm/boot/dts/skeleton.dtsi \

arch/arm/boot/dts/omap2420-n800.dtb: $(deps_arch/arm/boot/dts/omap2420-n800.dtb)

$(deps_arch/arm/boot/dts/omap2420-n800.dtb):