cmd_drivers/regulator/built-in.o :=  /opt/toolchains/arm-eabi-4.4.3/bin/arm-eabi-ld -EL    -r -o drivers/regulator/built-in.o drivers/regulator/core.o drivers/regulator/dummy.o drivers/regulator/max8952.o drivers/regulator/gpio-regulator.o drivers/regulator/pm8xxx-regulator.o 
