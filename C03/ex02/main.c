#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int		main(void)
{
//	char dest[] = "salut";
//	char src[] = "bonjour";

//	printf("%s\n", ft_strcat(dest,src));
char test[256] = "";
printf("%s\n", ft_strcat(test, "asdf"));
printf("%s\n", ft_strcat(test, ""));
printf("%s\n", ft_strcat(test, "zxcv"));
}
