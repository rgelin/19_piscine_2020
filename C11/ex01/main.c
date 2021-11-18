#include <stdio.h>

int		ft_times_tes(int nb)
{
	return (nb * 10);
}

int		*ft_map(int *tab, int length, int (*f)(int));

int		main()
{
	int i;
	int tab[] = {1, 2, 3, 4, 5 ,6, 7};
	int *res;

	res = ft_map(tab, 7, &ft_times_tes);
	i = 0;
	while (i < 7)
	{
		printf("%d\n", res[i]);
		i++;
	}
}
