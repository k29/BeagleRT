cmd_arch/arm/boot/dts/omap2430-sdp.dtb := arm-linux-gnueabi-gcc -E -Wp,-MD,arch/arm/boot/dts/.omap2430-sdp.dtb.d.pre.tmp -nostdinc -I/home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts -I/home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts/include -I/home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.omap2430-sdp.dtb.dts.tmp arch/arm/boot/dts/omap2430-sdp.dts ; /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/omap2430-sdp.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.omap2430-sdp.dtb.d.dtc.tmp arch/arm/boot/dts/.omap2430-sdp.dtb.dts.tmp ; cat arch/arm/boot/dts/.omap2430-sdp.dtb.d.pre.tmp arch/arm/boot/dts/.omap2430-sdp.dtb.d.dtc.tmp > arch/arm/boot/dts/.omap2430-sdp.dtb.d

source_arch/arm/boot/dts/omap2430-sdp.dtb := arch/arm/boot/dts/omap2430-sdp.dts

deps_arch/arm/boot/dts/omap2430-sdp.dtb := \
  arch/arm/boot/dts/omap2430.dtsi \
  arch/arm/boot/dts/omap2.dtsi \
  /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts/include/dt-bindings/pinctrl/omap.h \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/twl4030.dtsi \

arch/arm/boot/dts/omap2430-sdp.dtb: $(deps_arch/arm/boot/dts/omap2430-sdp.dtb)

$(deps_arch/arm/boot/dts/omap2430-sdp.dtb):
