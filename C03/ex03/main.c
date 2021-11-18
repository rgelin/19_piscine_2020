#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
//	char dest[] = "salut";
//	char src[] = "bonjour";
//	unsigned int nb;

//	nb = 3;
//	printf("%s\n",ft_strncat(dest,src,nb));
char test[256] = "\0zxcvzxcvzxcvxzcvzxcvzxcv";
printf("%s\n", ft_strncat(test, "asdf", 16));
printf("%s\n", ft_strncat(test, "", 16));
printf("%s\n", ft_strncat(test, "qwerty", 0));
printf("%s\n", ft_strncat(test, "asdf", 3));
}
