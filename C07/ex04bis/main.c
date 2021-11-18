#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);
//int		ft_atoi_base(char *str, char *base);

int		main(void)
{
	char  n[] = "+----+2147483647wd52";
	char base_from[] = "0123456789";
	char base_to[] = "0123456789abcdef";
//	char *res;

	printf("%s\n",ft_convert_base(n, base_from, base_to));
//	printf("%s\n", res);
//	printf("%d\n", ft_atoi_base(n,base_to));
}
