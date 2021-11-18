#include <stdio.h>

void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
	}
	return (s1[i] - s2[i]);
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	ft_advanced_sort_string_tab(av,ft_strcmp);
	while (i <= ac)
	{
		printf("%s\n", av[i]);
		i++;
	}
}
