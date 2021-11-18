#include <stdio.h>

int ft_count_if(char **tab, int length, int(*f)(char*));

int		ft_is_num(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

int		main(void)
{
	char *tab[] = {"15d156", "54545", "545fr"};

	printf("%d\n", ft_count_if(tab, 3, ft_is_num));
}
