cmd_drivers/power/built-in.o :=  /opt/toolchains/arm-eabi-4.4.3/bin/arm-eabi-ld -EL    -r -o drivers/power/built-in.o drivers/power/power_supply.o drivers/power/max17040_battery.o drivers/power/pm8xxx-ccadc.o drivers/power/pm8921-sec-charger.o drivers/power/smb347_charger.o drivers/power/sec_battery.o 
