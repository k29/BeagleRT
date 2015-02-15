cmd_arch/arm/boot/dts/omap5-uevm.dtb := arm-linux-gnueabi-gcc -E -Wp,-MD,arch/arm/boot/dts/.omap5-uevm.dtb.d.pre.tmp -nostdinc -I/home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts -I/home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts/include -I/home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.omap5-uevm.dtb.dts.tmp arch/arm/boot/dts/omap5-uevm.dts ; /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/omap5-uevm.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.omap5-uevm.dtb.d.dtc.tmp arch/arm/boot/dts/.omap5-uevm.dtb.dts.tmp ; cat arch/arm/boot/dts/.omap5-uevm.dtb.d.pre.tmp arch/arm/boot/dts/.omap5-uevm.dtb.d.dtc.tmp > arch/arm/boot/dts/.omap5-uevm.dtb.d

source_arch/arm/boot/dts/omap5-uevm.dtb := arch/arm/boot/dts/omap5-uevm.dts

deps_arch/arm/boot/dts/omap5-uevm.dtb := \
  arch/arm/boot/dts/omap5.dtsi \
  /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts/include/dt-bindings/pinctrl/omap.h \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/omap4-cpu-thermal.dtsi \
  /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts/include/dt-bindings/thermal/thermal.h \
  arch/arm/boot/dts/omap5-gpu-thermal.dtsi \
  arch/arm/boot/dts/omap5-core-thermal.dtsi \
  arch/arm/boot/dts/omap54xx-clocks.dtsi \

arch/arm/boot/dts/omap5-uevm.dtb: $(deps_arch/arm/boot/dts/omap5-uevm.dtb)

$(deps_arch/arm/boot/dts/omap5-uevm.dtb):
