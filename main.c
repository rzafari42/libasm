#include "libasm.h"

void	ft_len(void)
{	
	printf("-----------FT_STRLEN----------\n");
	printf("mine = |%zd|\n", ft_strlen("hello"));
	printf("real = |%zd|\n", strlen("hello"));
	printf("mine = |%zd|\n", ft_strlen("hello_world !"));
	printf("real = |%zd|\n", strlen("hello_world !"));
	printf("mine = |%zd|\n", ft_strlen("#stayathome"));
	printf("real = |%zd|\n", strlen("#stayathome"));
	printf("mine = |%zd|\n", ft_strlen("#42atom"));
	printf("real = |%zd|\n", strlen("#42atom"));
	printf("mine = |%zd|\n", ft_strlen(""));
	printf("real = |%zd|\n", strlen(""));
	printf("mine = |%zd|\n", ft_strlen("\n"));
	printf("real = |%zd|\n", strlen("\n"));
	printf("------------------------------\n\n");
}

void	ft_cpy(void)
{
	char dest[100];

	printf("-----------FT_STRCPY----------\n");		
	printf("mine = |%s|\n", ft_strcpy(dest, "HELLA"));
	printf("real = |%s|\n", strcpy(dest, "HELLA"));
	printf("mine = |%s|\n", ft_strcpy(dest, "Bonjour le monde !"));
	printf("real = |%s|\n", strcpy(dest, "Bonjour le monde !"));
	printf("mine = |%s|\n", ft_strcpy(dest, "#restezchezvous"));
	printf("real = |%s|\n", strcpy(dest, "#resterchezvous"));
	printf("mine = |%s|\n", ft_strcpy(dest, "#42MAISON"));
	printf("real = |%s|\n", strcpy(dest, "#42MAISON"));
	printf("mine = |%s|\n", ft_strcpy(dest, "vide"));
	printf("real = |%s|\n", strcpy(dest, "vide"));
	printf("mine = |%s|\n", ft_strcpy(dest, "rien"));
	printf("real = |%s|\n", strcpy(dest, "rien"));
	printf("------------------------------\n\n");
}

void	ft_cmp(void)
{	
	printf("-----------FT_STRCMP----------\n");
	printf("mine = |%d|\n", ft_strcmp("hello","hello"));
	printf("real = |%d|\n", strcmp("hello","hello"));
	printf("mine = |%d|\n", ft_strcmp("hello", "HELLA"));
	printf("real = |%d|\n", strcmp("hello", "HELLA"));
	printf("mine = |%d|\n", ft_strcmp("hello_world !", "Bonjour le monde !"));
	printf("real = |%d|\n", strcmp("hello_world !", "Bonjour le monde !"));
	printf("mine = |%d|\n", ft_strcmp("stayathome", "#restezchezvous"));
	printf("real = |%d|\n", strcmp("#stayathome", "#resterchezvous"));
	printf("mine = |%d|\n", ft_strcmp("Hi","Hi"));
	printf("real = |%d|\n", strcmp("HI","HI"));
	printf("mine = |%d|\n", ft_strcmp("#42atom", "#42aAISON"));
	printf("real = |%d|\n", strcmp("#42atom", "#42MAISON"));
	printf("mine = |%d|\n", ft_strcmp("", "vide"));
	printf("real = |%d|\n", strcmp("", "vide"));
	printf("mine = |%d|\n", ft_strcmp("\n", "rien"));
	printf("real = |%d|\n", strcmp("\n", "rien"));
	printf("------------------------------\n\n");
}

void	ft__write(void)
{
	int fd;

	fd = 1;
	printf("-----------FT_WRITE-----------\n");
	printf("mine = %ld errno = %d\n",ft_write(5000, "hello world", 11), errno);
	printf("real = %ld errno = %d\n",write(5000, "hello world", 11), errno);
	printf("mine = %ld errno= %d\n",ft_write(fd, "hi", 2), errno);
	printf("real = %ld erno = %d\n",write(fd, "hi", 2), errno);
	printf("mine = %ld errno = %d\n",ft_write(50000, "hola, como estas ?", 18), errno);
	printf("real = %ld errno = %d\n",write(50000, "hola, como estas ?", 18), errno);
	printf("mine = %ld errno = %d\n",ft_write(fd, "welcome hi", 9), errno);	
	printf("real = %ld errno = %d\n",write(fd, "welcome hi", 9), errno);
	printf("------------------------------\n\n");
}

void	ft__read(void)
{

	char buffer[100];
	int fd;
	
	printf("-----------FT_READ------------\n");
	fd = open("test.txt", O_RDONLY);
	printf("mine = |%ld|\n", ft_read(fd, buffer, 8));
	close(fd);
	fd = open("test.txt", O_RDONLY);
	printf("real = |%ld|\n", read(fd, buffer, 8));
	printf("-------------------------------\n\n");
}

void	ft_dup(void)
{
	char *dst;
	
	dst = NULL;
	printf("-----------FT_STRDUP-----------\n");
	printf("mine = %s\n", dst = ft_strdup("Hello"));
	free(dst);
	printf("real = %s\n", (dst = strdup("Hello")));
	free(dst);
	printf("mine = %s\n", dst = ft_strdup("Hello"));
	free(dst);
	printf("real = %s\n", (dst = strdup("Hello")));
	free(dst);
	printf("------------------------------\n\n");	
}

int main(void)
{
	ft_len();
	ft_cmp();
	ft__write();
	ft__read();
	ft_cpy();
	ft_dup();

	return(0);
}
