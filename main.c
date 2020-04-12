#include "libasm.h"

int main(void)
{
	
	char str2[20] = "gent";
	char str1[] = "hello";

	printf("|%zd|\n", ft_strlen(str1));
	printf("real = |%zd|\n", strlen(str1));
	

	printf("strcpy: |%s|\n", strcpy(str2, str1));
	printf("|%s|\n", ft_strcpy(str2, str1));
	
	printf("strcmp: |%d|\n", ft_strcmp("hella", "hello"));
	printf("|%d|\n", strcmp("hella","hello"));

	printf("\nwrite: %zd\n",ft_write(1,"hello world",11));
	
	char *dst;
	dst = NULL;
	printf("strdup: %s\n", (dst = ft_strdup("Hello")));
	printf("real strdup = %s\n", strdup("Hello"));
	return(0);
}
