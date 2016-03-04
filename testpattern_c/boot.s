
.global _start

.extern main
.code 16
.text
.section .start, "xa"
.align 4

/* code entry (set ARM core to SVC mode) */
_start:
   .word 0x00000400
    .type   start, function

start: 
	bl main
	wfi

