BeagleRT - Vanilla Kernel
=========================

Building a kernel for Beagle BOne is mainly about 
- Building toolchain, mainly the cross compiler
- Compiling the kernel using the toolchain
- Porting the built image to BeagleBone

The devlopment folders contains:
- toolchain: mainly for the cross compiler
- uboot: used for buildign the mkimage program
- kbuild: used for buildign the kernel


### Getting started
To get started, clone this repository and select one of these kernels (starting with vanilla recommended):
- vanilla kernel
- vanilla with PREEMPT option
- PREEMPT_RT patches
- Xenomai patches

Creata a subfolder that represents the kernel selected and compile it for the BeagleBone Black. Upload the kernel in the subfolder and provide a README that describes the process needed to reproduce the compilation.


###References
- https://www.osadl.org/fileadmin/dam/rtlws/12/Brown.pdf
- https://github.com/beaglepilot/beaglepilot