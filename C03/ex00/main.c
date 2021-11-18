#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char s1[] = "asdg";
	char s2[] = "asdf";

	printf("%d\n", ft_strcmp(s1,s2));
}
