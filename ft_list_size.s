# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_list_size.s                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzafari42 <marvin@42.fr>                   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/13 21:34:37 by rzafari42         #+#    #+#              #
#    Updated: 2020/05/13 21:34:38 by rzafari42        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section	.text
global	ft_list_size

ft_list_size:
	xor	rax,rax

count:
	cmp	rdi,0
	jz	end
	mov	rdi, [rdi + 8]
	inc	rax
	jmp	count

end:
	ret
