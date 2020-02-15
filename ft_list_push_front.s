section .text
	global _ft_list_push_front

_ft_list_push_front:
	cmp rdi, 0
	je end
	cmp rsi, 0
	je end
	mov r8, [rdi]
	cmp r8, 0
	je end
	jmp loop

next_element:
	pop r8
	mov r8, [r8 + 8]
loop:
	push r8
	mov r8, [r8 + 8]
	cmp r8, 0
	jne next_element
	pop r8
	mov [r8 + 8] , rsi
end:
	ret
