
rm *.o *.elf *.txt *.bin

#compile the source codes to object code

arm-none-eabi-gcc -mcpu=cortex-m4  -mthumb  -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O0 -c  boot.s -o boot.o -g
arm-none-eabi-gcc -mcpu=cortex-m4   -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O0 -c  app.c -o app.o -g


#link all object code to elf file
 
arm-none-eabi-ld -T link.lds *.o -o nop.elf -g

#get the binary code

arm-none-eabi-objcopy -O binary nop.elf nop.bin

#get the symbol table and assembly code

arm-none-eabi-objdump -xd nop.elf > nop.txt


xxd -c 1 -ps nop.bin > nop.hex
./hextohex