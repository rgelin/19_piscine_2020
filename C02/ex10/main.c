#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(void)
{
char test[256] = "\0zxcvzxcvzxcvxzcvzxcv";
printf("%d-", ft_strlcpy(test, "asdf", 16));
printf("%s\n", test);
printf("%d-", ft_strlcpy(test, "asdf", 6));
printf("%s\n", test);
printf("%d-", ft_strlcpy(test, "asdf", 4));
printf("%s\n", test);
printf("%d-", ft_strlcpy(test, "", 16));
printf("%s\n", test);
printf("%d-", ft_strlcpy(test, "asdf", 0));
printf("%s\n", test);
}
