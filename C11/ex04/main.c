#include <stdio.h>

int			ft_sort(int a, int b)
{
	if (a < b)
		return (-1);
	else if (a == b)
		return (0);
	else
		return (1);
}

int			ft_is_sort(int *tab, int length, int (*f)(int, int));

int			main()
{
	int tab[] = {8, 10, 6, 5, 4, 3, 1};

	printf("%d\n", ft_is_sort(tab, 7, ft_sort));
}
