cmd_arch/arm/boot/dts/am43x-epos-evm.dtb := arm-linux-gnueabi-gcc -E -Wp,-MD,arch/arm/boot/dts/.am43x-epos-evm.dtb.d.pre.tmp -nostdinc -I/home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts -I/home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts/include -I/home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.am43x-epos-evm.dtb.dts.tmp arch/arm/boot/dts/am43x-epos-evm.dts ; /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/am43x-epos-evm.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.am43x-epos-evm.dtb.d.dtc.tmp arch/arm/boot/dts/.am43x-epos-evm.dtb.dts.tmp ; cat arch/arm/boot/dts/.am43x-epos-evm.dtb.d.pre.tmp arch/arm/boot/dts/.am43x-epos-evm.dtb.d.dtc.tmp > arch/arm/boot/dts/.am43x-epos-evm.dtb.d

source_arch/arm/boot/dts/am43x-epos-evm.dtb := arch/arm/boot/dts/am43x-epos-evm.dts

deps_arch/arm/boot/dts/am43x-epos-evm.dtb := \
  arch/arm/boot/dts/am4372.dtsi \
  /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/skeleton.dtsi \
  /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts/include/dt-bindings/pinctrl/am43xx.h \
  /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  arch/arm/boot/dts/am43xx-clocks.dtsi \

arch/arm/boot/dts/am43x-epos-evm.dtb: $(deps_arch/arm/boot/dts/am43x-epos-evm.dtb)

$(deps_arch/arm/boot/dts/am43x-epos-evm.dtb):
