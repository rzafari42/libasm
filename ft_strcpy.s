global _ft_strcpy

_ft_strcpy:
	XOR rax,rax
	jmp	cpy_src_dst

cpy_src_dst:
	cmp byte[rsi + rax],0
	jz exit
	mov cl,[rsi + rax]
	mov [rdi + rax],cl
	inc rax
	jmp cpy_src_dst

exit:
	mov cl,0
	mov [rdi + rax],cl
	mov rax,rdi
	ret
