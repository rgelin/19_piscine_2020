#include <stdio.h>

int ft_recursive_power(int nb, int power);

int		main(void)
{
	int nb;
	int power;

	nb = 8;
	power = 10;
	printf("%d\n", ft_recursive_power(nb,power));
}
