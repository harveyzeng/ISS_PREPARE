ARM_AR=arm-none-eabi-ar
ARM_CC=arm-none-eabi-gcc
ARM_LD=arm-none-eabi-ld
ARM_OC=arm-none-eabi-objcopy
ARM_OD=arm-none-eabi-objdump

SW=nop

all: 
	$(ARM_CC) -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16  -c $(SW).s -o $(SW).o -g
	$(ARM_LD) -T link.lds *.o -o $(SW).elf -g
	$(ARM_OC) -O binary $(SW).elf $(SW).bin
	$(ARM_OD) -xd $(SW).elf > $(SW).txt
	xxd -c 1 -ps $(SW).bin > $(SW).hex
	./hextohex 
	mv temp.hex  $(SW).hex
clean:
	rm -rf *.o *.elf *.bin *.txt
