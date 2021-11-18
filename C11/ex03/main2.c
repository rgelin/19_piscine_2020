#include <stdio.h>

int		ft_is_num(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] > '9' || str[i] < '0')
			return (1);
		i++;
	}
	return (0);
}

int		ft_count_if(char **tab, int length, int (*f)(char *));

int		main()
{
	char *tab[] = {"5a2", "9u15", "81354" , "1234y56" ,"p0"};
	
	printf("%d\n", ft_count_if(tab, 5, ft_is_num));
}
