BeagleRT - Vanilla Kernel
=========================

Building a kernel for Beagle Bone consists mainly of the followign steps: 
- Building toolchain, mainly the cross compiler
- Compiling the kernel using the toolchain
- Porting the built image to BeagleBone

The devlopment folder VanillaKernel contains:
- toolchain: mainly for the cross compile
- uboot: used for building the mkimage program
- kbuild: used for buildign the kernel


### Installing Toolchain
##### ARM cross compiler:
<pre><code> sudo apt-get install gcc-arm-linux-gnueabi</code></pre>

##### uBoot mkImage:
The bootloader used on the BeagleBone black is U-Boot. U-Boot has a special image format called uImage. It includes parameters such as descriptions, the machine/architecture type, compression type, load address, checksums etc. To make these images, you need to have a mkimage tool that comes part of the U-Boot distribution. Download U-Boot, make and install the U-Boot tools:
<pre><code>
cd uBoot
wget ftp://ftp.denx.de/pub/u-boot/u-boot-latest.tar.bz2
tar -xjf u-boot-latest.tar.bz2
cd into u-boot directory
make sandbox_defconfig tools-only
sudo install tools/mkimage /usr/local/bin
</code></pre>


### Compiling the BeagleBone Kernel
<pre><code>git clone git://github.com/beagleboard/kernel.git
cd kernel
git checkout 3.12
./patch.sh
cp configs/beaglebone kernel/arch/arm/configs/beaglebone_defconfig
wget http://arago-project.org/git/projects/?p=am33x-cm3.git\;a=blob_plain\;f=bin/am335x-pm-firmware.bin\;hb=HEAD -O kernel/firmware/am335x-pm-firmware.bin
cd kernel
make ARCH=arm CROSS_COMPILE=arm-linux-gnueabi- beaglebone_defconfig -j4
make ARCH=arm CROSS_COMPILE=arm-linux-gnueabi- uImage dtbs LOADADDR=0x80008000 -j4
make ARCH=arm CROSS_COMPILE=arm-linux-gnueabi- modules -j4
make ARCH=arm CROSS_COMPILE=arm-linux-gnueabi- INSTALL_MOD_PATH=/home/cpeacock/export/rootfs modules_install
</code></pre>



