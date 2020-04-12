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
	
	printf("mine = |%d|\n", ft_strcmp("hello", "hello"));
	printf("real = |%d|\n", strcmp("hello","hello"));

	printf("mine = |%d|\n", ft_strcmp("hello", "HELLA"));
	printf("real = |%d|\n", strcmp("hello", "HELLA"));

	printf("mine = |%d|\n", ft_strcmp("hello_world !", "Bonjour le monde !"));
	printf("real = |%d|\n", strcmp("hello_world !", "Bonjour le monde !"));

	printf("mine = |%d|\n", ft_strcmp("stayathome", "#restezchezvous"));
	printf("real = |%d|\n", strcmp("#stayathome", "#resterchezvous"));

	printf("mine = |%d|\n", ft_strcmp("#42atom", "#42MAISON"));
	printf("real = |%d|\n", strcmp("#42atom", "#42MAISON"));

	printf("mine = |%d|\n", ft_strcmp("", "vide"));
	printf("real = |%d|\n", strcmp("", "vide"));

	printf("mine = |%d|\n", ft_strcmp("\n", "rien"));
	printf("real = |%d|\n", strcmp("\n", "rien"));
	printf("------------------------------\n\n");
}

void	ft__write(void)
{
	printf("-----------FT_WRITE-----------\n");
	int fd;

	fd = 1;
	printf("mine = %zd\n",ft_write(fd,"hello world",11));
	printf("real = %zd\n",write(fd,"hello world",11));

	printf("mine = %zd\n",ft_write(fd,"hi",2));
	printf("real = %zd\n",write(fd,"hi",2));
	
	printf("mine = %zd\n",ft_write(fd,"hola, como estas ?",18));
	printf("real = %zd\n",write(fd,"hola, como estas ?",18));


	printf("mine = %zd\n",ft_write(fd,"welcome hi",9));	
	printf("real = %zd\n",write(fd,"welcome hi",9));
	printf("------------------------------\n\n");
}

void	ft__read(void)
{
	printf("-----------FT_READ------------\n");
	char buffer[100];
	int fd;
	fd = open("test.txt", O_RDONLY);
	printf("mine = |%ld|\n", ft_read(fd,buffer,8));
	close(fd);
	fd = open("test.txt", O_RDONLY);
	printf("real = |%ld|\n", read(fd, buffer,8));
	close(fd);
	printf("-------------------------------\n\n");
}

void	ft_dup(void)
{
	printf("-----------FT_STRDUP-----------\n");
	char *dst;
	dst = NULL;
	printf("mine = %s\n", (dst = ft_strdup("Hello")));
	free(dst);
	printf("real = %s\n", (dst = strdup("Hello")));
	free(dst);

	printf("mine = %s\n", (dst = ft_strdup("Hello")));
	free(dst);
	printf("real = %s\n", (dst = strdup("Hello")));
	free(dst);
	printf("------------------------------\n\n");	
}

int main(void)
{
	ft_len();
	ft_cpy();
	ft_cmp();
	ft__write();
	ft__read();
	ft_dup();

	return(0);
}
