cmd_arch/arm/boot/dts/omap3-beagle.dtb := arm-linux-gnueabi-gcc -E -Wp,-MD,arch/arm/boot/dts/.omap3-beagle.dtb.d.pre.tmp -nostdinc -I/home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts -I/home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts/include -I/home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.omap3-beagle.dtb.dts.tmp arch/arm/boot/dts/omap3-beagle.dts ; /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/omap3-beagle.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.omap3-beagle.dtb.d.dtc.tmp arch/arm/boot/dts/.omap3-beagle.dtb.dts.tmp ; cat arch/arm/boot/dts/.omap3-beagle.dtb.d.pre.tmp arch/arm/boot/dts/.omap3-beagle.dtb.d.dtc.tmp > arch/arm/boot/dts/.omap3-beagle.dtb.d

source_arch/arm/boot/dts/omap3-beagle.dtb := arch/arm/boot/dts/omap3-beagle.dts

deps_arch/arm/boot/dts/omap3-beagle.dtb := \
  arch/arm/boot/dts/omap34xx.dtsi \
  arch/arm/boot/dts/omap3.dtsi \
  /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts/include/dt-bindings/pinctrl/omap.h \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/twl4030.dtsi \
  arch/arm/boot/dts/twl4030_omap3.dtsi \
  arch/arm/boot/dts/omap3xxx-clocks.dtsi \
  arch/arm/boot/dts/omap34xx-omap36xx-clocks.dtsi \
  arch/arm/boot/dts/omap36xx-omap3430es2plus-clocks.dtsi \
  arch/arm/boot/dts/omap36xx-am35xx-omap3430es2plus-clocks.dtsi \

arch/arm/boot/dts/omap3-beagle.dtb: $(deps_arch/arm/boot/dts/omap3-beagle.dtb)

$(deps_arch/arm/boot/dts/omap3-beagle.dtb):
