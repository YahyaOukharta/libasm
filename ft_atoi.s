section .text
	global _ft_atoi

;ft_atoi(const char *str); rdi

_ft_atoi:
	xor rcx, rcx
	xor rdx, rdx
	xor rax,rax
	jmp is_space

skip_space:
	inc rcx

is_space:
	mov dl, [rdi + rcx]
	cmp dl, 9
	je skip_space
	cmp dl, 10
	je skip_space
	cmp dl, 11
	je skip_space
	cmp dl, 12
	je skip_space
	cmp dl, 13
	je skip_space
	cmp dl, 32
	je skip_space
	jmp check_sign

check_sign:
	xor r8, r8
	mov dl, [rdi + rcx]
	cmp dl, 43
	je next_digit
	cmp dl, 45
	jne is_digit
	mov r8, 1

next_digit:
	inc rcx

is_digit:	
	mov dl, [rdi + rcx]
	cmp dl , 48
	jl end
	cmp dl, 57
	jg end
	mov r9, rax
	imul r9, 10
	sub dl, 48
	add r9, rdx
	mov rax, r9
	jmp next_digit

end:
	cmp r8, 1
	jne return
	neg rax
return:
	ret

