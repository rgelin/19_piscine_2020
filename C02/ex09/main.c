#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char str[] = "salut, comMent tu vas ? 42\nmots quarMante-deux; cinquante+et+un";

	printf("%s\n",ft_strcapitalize(str));
}
