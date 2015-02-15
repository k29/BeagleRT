git clone git://github.com/beagleboard/kernel.git
cd kernel
git checkout 3.14
./patch.sh
cp configs/beaglebone kernel/arch/arm/configs/beaglebone_defconfig
wget http://arago-project.org/git/projects/?p=am33x-cm3.git\;a=blob_plain\;f=bin/am335x-pm-firmware.bin\;hb=HEAD -O kernel/firmware/am335x-pm-firmware.bin
cd kernel
make ARCH=arm CROSS_COMPILE=arm-linux-gnueabi- beaglebone_defconfig -j4
make ARCH=arm CROSS_COMPILE=arm-linux-gnueabi- uImage dtbs LOADADDR=0x80008000 -j4
make ARCH=arm CROSS_COMPILE=arm-linux-gnueabi- modules -j4	
make ARCH=arm CROSS_COMPILE=arm-linux-gnueabi- INSTALL_MOD_PATH=/home/cpeacock/export/rootfs modules_install