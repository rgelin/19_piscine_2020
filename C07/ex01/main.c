#include <stdio.h>

int *ft_range(int min, int max);

int		main()
{
	int min;
	int max;
	int *tab;
	int i;

	min = -8;
	max = 8;
	tab = ft_range(min,max);
	i = 0;
	while (i < 16)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
