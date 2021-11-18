#include <stdio.h>

int			ft_is_num(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' && str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

int		ft_any(char **tab, int (*f)(char *));

int			main()
{
	char *tab[] = {"23654", "85943", "95684"};

	printf("%d\n", ft_any(tab, ft_is_num));
}
