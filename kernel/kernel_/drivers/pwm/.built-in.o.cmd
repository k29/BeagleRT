cmd_drivers/pwm/built-in.o :=  arm-linux-gnueabi-ld -EL    -r -o drivers/pwm/built-in.o drivers/pwm/core.o drivers/pwm/sysfs.o drivers/pwm/pwm-pca9685.o drivers/pwm/pwm-tiecap.o drivers/pwm/pwm-tiehrpwm.o drivers/pwm/pwm-tipwmss.o drivers/pwm/pwm-twl.o drivers/pwm/pwm-twl-led.o 