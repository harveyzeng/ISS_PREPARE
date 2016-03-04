   .text
    .global _start
    .code   16
    .syntax unified
_start:
ldr r2,=0x40
ldr r3,=0x4
add r4,r3,r2
mov r4,r3
add r4,r3,r2
mov r4,r3
add r4,r3,r6
mov r4,r3
add r4,r3,r7
add r4,r3,r5
mov r4,r3
mov r4,r6
wfi.w
 .end