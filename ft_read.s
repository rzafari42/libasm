# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_read.s                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzafari42 <marvin@42.fr>                   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/13 21:33:22 by rzafari42         #+#    #+#              #
#    Updated: 2020/05/13 21:33:25 by rzafari42        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section	.text
global ft_read
extern __errno_location

ft_read:
	mov rax,0 		  ;put the number corresponding to sys_read in rax
	syscall			  ;ask the OS to call the correct function
	cmp rax,0
	jl exit			  ;if it returns a negative value => exit
	ret				  ;else: return the value returned by 'read'

exit:
	mov r10,rax
	call __errno_location
	neg r10
	mov [rax],r10
	mov rax,-1		  ;if 'read' returns a negative value, we put '-1' in rax
	ret				  ; we return rax
