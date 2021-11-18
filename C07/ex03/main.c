#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int main()
{
	int size;
	char sep[] = "//";
	char *strs[] = {"salut","bonjour","truc","bidule"};

	size = 4;
	printf("%s\n",ft_strjoin(size,strs,sep));
}
