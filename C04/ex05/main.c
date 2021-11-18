#include <stdio.h>

int		ft_atoi_base(char *str,  char *base);

int main()
{
	char str[] = "   -+---+++-42azdz8425";
	char base[] = "012322456789abcdef";

	printf("%d\n", ft_atoi_base(str,base));
}
