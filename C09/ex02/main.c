#include <stdio.h>

char	**ft_split(char *str, char *charset);

int		main(void)
{
	char str[] = "salutnqbomjourztrucqnbidule";
	char charset[] = "nqz";
	char **tab;
	int i;

	tab = ft_split(str,charset);
	i = 0;
	while (i < 5)
	{
	printf("%s\n", tab[i]);
	i++;
	}
}
