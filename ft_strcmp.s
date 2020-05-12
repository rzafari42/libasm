section	.text
global ft_strcmp

ft_strcmp:
	mov al, byte[rdi]	;put the *rdi byte in 'al' register
	mov bl, byte[rsi]	;put the *rsi byte in 'bl' register
	cmp al,0		;compare al w/ '0'
	jz exit			;if al == 0 => exit
	cmp bl,0		;same
	jz exit			;same
	cmp al,bl		;compare al w/ bl
	jne exit		;if not equal => exit
	inc rsi			;go to next character (byte)
	inc rdi			;same as above
	jmp ft_strcmp		;do it again

exit:
	sub	eax,ebx		;calculate rax = rax - rbx
	jl	exit1
	je	exit2	
	mov	eax,1
	ret

exit1:
	mov	eax,-1
	ret

exit2:
	mov	eax,0
	ret
