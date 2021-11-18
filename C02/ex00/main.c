#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char dest[50];
	char *src;

	src = "salut";

	ft_strcpy(dest,src);

	printf("%s\n",dest);
}
