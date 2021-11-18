#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int c;
	int d;
	int *a;
	int *b;

	c  = 9;
	d  = 4;
	a = &c;
	b = &d;
	printf("%d\n",*a);
	printf("%d\n",*b);
	ft_ultimate_div_mod(a,b);
	printf("%d\n",*a);
	printf("%d\n",*b);
	return (0);
}
