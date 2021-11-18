#include <stdio.h>

void ft_sort_string_tab(char **tab);

int		main(int ac, char **av)
{
	int i;

	ft_sort_string_tab(av);
	i = 1;
	while (i <= ac)
	{
		printf("%s\n", av[i]);
		i++;
	}
}
