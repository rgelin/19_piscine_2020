#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int size;

	size = 5;
	int tab[5] = {1,2,3,4,5};

	ft_rev_int_tab(tab,size);
	for (int i = 0; i < size; i++)
	{
		printf("%d", tab [i]);
	}
}
