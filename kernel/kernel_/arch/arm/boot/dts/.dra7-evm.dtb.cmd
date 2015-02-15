cmd_arch/arm/boot/dts/dra7-evm.dtb := arm-linux-gnueabi-gcc -E -Wp,-MD,arch/arm/boot/dts/.dra7-evm.dtb.d.pre.tmp -nostdinc -I/home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts -I/home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts/include -I/home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.dra7-evm.dtb.dts.tmp arch/arm/boot/dts/dra7-evm.dts ; /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/dra7-evm.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.dra7-evm.dtb.d.dtc.tmp arch/arm/boot/dts/.dra7-evm.dtb.dts.tmp ; cat arch/arm/boot/dts/.dra7-evm.dtb.d.pre.tmp arch/arm/boot/dts/.dra7-evm.dtb.d.dtc.tmp > arch/arm/boot/dts/.dra7-evm.dtb.d

source_arch/arm/boot/dts/dra7-evm.dtb := arch/arm/boot/dts/dra7-evm.dts

deps_arch/arm/boot/dts/dra7-evm.dtb := \
  arch/arm/boot/dts/dra7.dtsi \
  /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/kaustubh/BeagleRT/vanillaKernel/kbuild/kernel/kernel/arch/arm/boot/dts/include/dt-bindings/pinctrl/dra.h \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/dra7xx-clocks.dtsi \

arch/arm/boot/dts/dra7-evm.dtb: $(deps_arch/arm/boot/dts/dra7-evm.dtb)

$(deps_arch/arm/boot/dts/dra7-evm.dtb):
