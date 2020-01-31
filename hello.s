section .data
	hello	db "hello world",10
section .text
	global start

start:	mov rax, 0x2000004
		mov rdi, 1
		mov rsi, hello
		mov rdx, 12
		syscall

		mov rax, 0x2000001
		mov rdi, 0
		syscall
