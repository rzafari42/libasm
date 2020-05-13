# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strlen.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzafari42 <marvin@42.fr>                   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/13 21:33:41 by rzafari42         #+#    #+#              #
#    Updated: 2020/05/13 21:33:42 by rzafari42        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section	.text
global	ft_strlen

ft_strlen:
	XOR rax,rax		;rax = 0

count:
	cmp byte[rdi + rax], 0 ;we compare rdi[rax] with '0'
	jz exit				   ;if equal =>exit
	inc rax				   ;if not equal, we increment rax
	jmp count			   ;then we do it again and again until rdi[rax] != 0

exit:
	ret					   ;we return the rax value
