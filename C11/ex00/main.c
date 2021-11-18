#include <unistd.h>

void	ft_foreach(int *tab, int lenght, void(*f)(int));
void	ft_putnbr(int nb)
{
	char c;

	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		c = nb % 10 + '0';
		write(1, &c, 1);
	}
	else
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}

int		main(void)
{
	int tab[] = {6, 8, 6, 78, 91};
	
	ft_foreach(tab, 5, &ft_putnbr);
	return (0);
}
