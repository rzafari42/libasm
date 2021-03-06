# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcpy.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzafari42 <marvin@42.fr>                   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/13 21:34:01 by rzafari42         #+#    #+#              #
#    Updated: 2020/05/13 21:34:02 by rzafari42        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section	.text
global	ft_strcpy

ft_strcpy:
	XOR	rax,rax

cpy_src_dst:
	cmp	byte[rsi + rax],0
	jz	exit
	mov	rcx,[rsi + rax]
	mov	[rdi + rax],rcx
	inc	rax
	jmp	cpy_src_dst

exit:
	mov	rcx,0
	mov	[rdi + rax], rcx
	mov	rax, rdi
	ret
