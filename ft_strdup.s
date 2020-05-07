section	.text
global	ft_strdup
extern	ft_strlen
extern	ft_strcpy
extern	malloc

ft_strdup:
	push	rdi
	call	ft_strlen
	inc 	rax
	mov	rdi,rax
	call	malloc
	pop	rsi
	;cmp	rax,0
	;je	exit
	mov	rdi,rax
	call	ft_strcpy
	ret

exit:
	ret
