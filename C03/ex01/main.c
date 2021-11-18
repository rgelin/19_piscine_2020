#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char s1[] = "salut comment ca va? Moi je vais bien et toi?";
	char s2[] = "salut comment ca va? Moi je vais bien et toi??";
	unsigned int n;

	n = 100;
	printf("%d\n", ft_strncmp(s1,s2,n));
}
