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
	printf("mine = |%zd|\n", ft_strlen("asdfasdf''///##!!@"));
	printf("real = |%zd|\n", strlen("asdfasdf''///##!!@"));
	printf("mine = |%zd|\n", ft_strlen("the\0hidden"));
	printf("real = |%zd|\n", strlen("the\0hidden"));
	printf("mine = |%zd|\n", ft_strlen("Lorem ipsum dolor sit amet, consectetur adipiscing\elit. Sed in malesuada purus. Etiam a scelerisque massa. Ut non euismod elit. Aliquam\bibendum dolor mi, id fringilla tellus pulvinar eu. Fusce vel fermentum sem. Cras\volutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisi\felis sed purus. Mauris magna ex, mollis non suscipit eu, lacinia ac turpis. Phasellus\ac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posuere\tortor, sit amet consequat amet."));	
	printf("real = |%zd|\n", strlen("Lorem ipsum dolor sit amet, consectetur adipiscing\elit. Sed in malesuada purus. Etiam a scelerisque massa. Ut non euismod elit. Aliquam\bibendum dolor mi, id fringilla tellus pulvinar eu. Fusce vel fermentum sem. Cras\volutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisi\felis sed purus. Mauris magna ex, mollis non suscipit eu, lacinia ac turpis. Phasellus\ac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posuere\tortor, sit amet consequat amet."));
	printf("------------------------------\n\n");
}

void	ft_cpy(void)
{
	char dest[500];

	printf("-----------FT_STRCPY----------\n");		
	printf("mine = |%s|\n", ft_strcpy(dest, "HELLO"));
	printf("real = |%s|\n", strcpy(dest, "HELLO"));
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
	printf("mine = |%s|\n", ft_strcpy(dest, ""));
	printf("real = |%s|\n", strcpy(dest, ""));
	printf("mine = |%s|\n", ft_strcpy(dest, "abc"));
	printf("real = |%s|\n", strcpy(dest, "abc"));
	printf("mine = |%s|\n", ft_strcpy(dest, "asl;fjl;asdjfjkasdl;fjadjsf"));	
	printf("real = |%s|\n", strcpy(dest, "asl;fjl;asdjfjkasdl;fjadjsf"));
	printf("mine = |%s|\n", ft_strcpy(dest, "yope\0la"));
	printf("real = |%s|\n", strcpy(dest, "yope\0la"));
	printf("mine = |%s|\n", ft_strcpy(dest, "Lorem ipsum dolor sit amet, consectetur adipiscing\elit. Sed in malesuada purus. Etiam a scelerisque massa. Ut non euismod elit. Aliquam\bibendum dolor mi, id fringilla tellus pulvinar eu. Fusce vel fermentum sem. Cras\volutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisi\felis sed purus. Mauris magna ex, mollis non suscipit eu, lacinia ac turpis. Phasellus\ac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posuere\tortor, sit amet consequat amet.\n"));
	printf("real = |%s|\n", strcpy(dest, "Lorem ipsum dolor sit amet, consectetur adipiscing\elit. Sed in malesuada purus. Etiam a scelerisque massa. Ut non euismod elit. Aliquam\bibendum dolor mi, id fringilla tellus pulvinar eu. Fusce vel fermentum sem. Cras\volutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisi\felis sed purus. Mauris magna ex, mollis non suscipit eu, lacinia ac turpis. Phasellus\ac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posuere\tortor, sit amet consequat amet.\n"));
	printf("mine = |%s|\n", ft_strcpy(dest,"\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0b\x0c\x0d\x0e\x0f\n"));	
	printf("real = |%s|\n", strcpy(dest,"\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0b\x0c\x0d\x0e\x0f\n"));
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
	printf("mine = |%d|\n", ft_strcmp("the\0hidden", "thehidden"));
	printf("real = |%d|\n", strcmp("the\0hidden", "thehidden"));
	printf("mine = |%d|\n", ft_strcmp("asdklfjasdfj////asdf'''asdf3##", "asdklfjasdfj////asdf'''asdf3##"));
	printf("real = |%d|\n", strcmp("asdklfjasdfj////asdf'''asdf3##", "asdklfjasdfj////asdf'''asdf3##"));
	printf("------------------------------\n\n");
}

void	ft__write(void)
{
	int fd;

	fd = 1;
	errno = 0;
	printf("-----------FT_WRITE-----------\n");
	printf("mine = %ld errno = %d\n",ft_write(5000, "hello world", 11), errno);
	errno = 0;
	printf("real = %ld errno = %d\n",write(5000, "hello world", 11), errno);
	errno = 0;
	printf("mine = %ld errno= %d\n",ft_write(fd, "hi", 2), errno);
	errno = 0;
	printf("real = %ld erno = %d\n",write(fd, "hi", 2), errno);
	errno = 0;
	printf("mine = %ld errno = %d\n",ft_write(50000, "hola, como estas ?", 18), errno);
	errno = 0;
	printf("real = %ld errno = %d\n",write(50000, "hola, como estas ?", 18), errno);
	errno = 0;
	printf("mine = %ld errno = %d\n",ft_write(fd, "welcome hi", 9), errno);	
	errno = 0;
	printf("real = %ld errno = %d\n",write(fd, "welcome hi", 9), errno);
	printf("------------------------------\n\n");
}

void	ft__read(void)
{

	char buffer[100];
	int fd;
	
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
