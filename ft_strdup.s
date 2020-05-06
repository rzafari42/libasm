global ft_strdup
extern	ft_strlen
extern	ft_strcpy
extern	malloc

ft_strdup:
	push 	rdi
	call	ft_strlen
	add		rax,1
	mov		rdi,rax
	call	malloc
	pop		rsi
	mov 	rdi,rax
	call	ft_strcpy
	ret
