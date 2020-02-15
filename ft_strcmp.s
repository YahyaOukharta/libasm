section .text
	global _ft_strcmp

; ft_strcmp(char *s1, char *s2); s1:rdi s2:rsi
_ft_strcmp:
	jmp if
then:
	inc rdi
	inc rsi	
if:
	xor r8,r8
	xor r9,r9
	mov r8b, [rdi]
	mov r9b, [rsi]

	cmp r8b, 0
	je end
	cmp r9b, 0
	je end
	cmp r8b, r9b
	je then
end:
	sub r8w,r9w
	movsx rax, r8w
	ret
