global _ft_strcpy

_ft_strcpy:
	XOR rax,rax
	jmp	cpy_src_dst

cpy_src_dst:
	cmp byte[rsi + rax],0
	jz exit
	mov bl,[rsi + rax]
	mov [rdi + rax],bl
	inc rax
	jmp cpy_src_dst

exit:
	mov bl,0
	mov [rdi + rax],bl
	mov rax,rdi
	ret
