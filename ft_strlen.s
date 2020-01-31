section .text
	global _ft_strlen


;ft_strlen(const char *str); rdi holds the address of str

_ft_strlen:
	xor rax, rax	;setting counter and return register to zero
	jmp if
then:
	inc rax
if:
	mov cl, [rdi + rax]
	cmp cl , 0
	jne then
end:
	ret
