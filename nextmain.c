/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nextmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari42 <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 21:32:50 by rzafari42         #+#    #+#             */
/*   Updated: 2020/05/13 21:32:53 by rzafari42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

void	ft_cpy(void)
{
	char dest[500];

	printf("-----------FT_STRCPY----------\n");
	printf("mine = |%s|\n", ft_strcpy(dest, "HELLO"));
	printf("real = |%s|\n", strcpy(dest, "HELLO"));
	printf("mine = |%s|\n", ft_strcpy(dest, "Bonjour le monde !"));
	printf("real = |%s|\n", strcpy(dest, "Bonjour le monde !"));
	printf("mine = |%s|\n", ft_strcpy(dest, "#42MAISON"));
	printf("real = |%s|\n", strcpy(dest, "#42MAISON"));
	printf("mine = |%s|\n", ft_strcpy(dest, "vide"));
	printf("real = |%s|\n", strcpy(dest, "vide"));
	printf("mine = |%s|\n", ft_strcpy(dest, ""));
	printf("real = |%s|\n", strcpy(dest, ""));
	printf("mine = |%s|\n", ft_strcpy(dest, "abc"));
	printf("real = |%s|\n", strcpy(dest, "abc"));
	printf("mine = |%s|\n", ft_strcpy(dest, "asl;fjl;asdjfjkasdl;fjadjsf"));
	printf("real = |%s|\n", strcpy(dest, "asl;fjl;asdjfjkasdl;fjadjsf"));
	printf("mine = |%s|\n", ft_strcpy(dest, "yope\0la"));
	printf("real = |%s|\n", strcpy(dest, "yope\0la"));
	printf("mine = |%s|\n", ft_strcpy(dest, "Lorem ipsum\fdolor\vsit"));
	printf("real = |%s|\n", strcpy(dest, "Lorem ipsum\fdolor\vsit"));
	printf("mine = |%s|\n", ft_strcpy(dest, "\x00\x01\x02\x03\x04\x05"));
	printf("real = |%s|\n", strcpy(dest, "\x00\x01\x02\x03\x04\x05"));
	printf("------------------------------\n\n");
}

void	ft_read2(void)
{
	char	buffer[100];
	int		fd;

	errno = 0;
	fd = open("test1.txt", O_RDONLY);
	printf("mine = |%ld| errno = %d\n", ft_read(fd, buffer, 8), errno);
	close(fd);
	errno = 0;
	fd = open("test1.txt", O_RDONLY);
	printf("real = |%ld| errno = %d\n", read(fd, buffer, 8), errno);
	close(fd);
	errno = 0;
	fd = 450;
	printf("mine = |%ld| errno = %d\n", ft_read(fd, buffer, 8), errno);
	errno = 0;
	printf("real = |%ld| errno = %d\n", read(fd, buffer, 8), errno);
}

void	ft__read(void)
{
	char	buffer[100];
	int		fd;

	printf("-----------FT_READ------------\n");
	errno = 0;
	fd = -1;
	printf("mine = |%ld| errno = %d\n", ft_read(fd, buffer, 8), errno);
	errno = 0;
	printf("real = |%ld| errno = %d\n", read(fd, buffer, 8), errno);
	errno = 0;
	fd = open("test.txt", O_RDONLY);
	printf("mine = |%ld| eerno = %d\n", ft_read(fd, buffer, 8), errno);
	close(fd);
	errno = 0;
	fd = open("test.txt", O_RDONLY);
	printf("real = |%ld| errno = %d\n", read(fd, buffer, 8), errno);
	close(fd);
	ft_read2();
	printf("-------------------------------\n\n");
}

void	ft_dup(void)
{
	char *dst;

	dst = NULL;
	printf("-----------FT_STRDUP-----------\n");
	printf("mine = |%s|\n", dst = ft_strdup("Bonjour"));
	free(dst);
	printf("real = |%s|\n", (dst = strdup("Bonjour")));
	free(dst);
	printf("mine = |%s|\n", dst = ft_strdup("Hello"));
	free(dst);
	printf("real = |%s|\n", (dst = strdup("Hello")));
	free(dst);
	printf("mine = |%s|\n", (dst = ft_strdup("asl;fjl;asdjfjkasdl;fjadjsf")));
	free(dst);
	printf("real = |%s|\n", (dst = strdup("asl;fjl;asdjfjkasdl;fjadjsf")));
	free(dst);
	printf("mine = |%s|\n", (dst = ft_strdup("42atom\0maison")));
	free(dst);
	printf("real = |%s|\n", (dst = strdup("42atom\0maison")));
	printf("------------------------------\n\n");
}
