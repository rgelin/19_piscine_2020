#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int		main(void)
{
//	char str[] = "salut";
//	char to_find[] = "al";

//	printf("%s\n", ft_strstr(str,to_find));
printf("%s\n", ft_strstr("asdf qwerty", "wer"));
printf("%s\n", ft_strstr("asdf qwerty qwerty", "wer"));
printf("%s\n", ft_strstr("asdf qwerty", "qwerty1"));
printf("%s\n", ft_strstr("", "wer"));
printf("%s\n", ft_strstr("asdf qwerty", "zxcv"));
printf("%s\n", ft_strstr("asdf qwerty", ""));
}
