#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int				ft_strcmp(char *s1, char *s2);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strcat(char *dest, char *src);
char			*ft_strncat(char *dest, char *src, unsigned int nb);
char			*ft_strstr(char *str, char *to_find);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int		main(int ac, char **av)
{
	unsigned int		res2;
	unsigned int		res;
	char				*s1;
	char				*s2;
	char				*s1_2;
	char				*s2_2;
	char				*res_1;
	char				*res_2;
	res = 0;
	res2 = 0;
	s1 = (char *)malloc(sizeof(char) * 10 + 1);
	s1_2 = (char *)malloc(sizeof(char) * 10 + 1);
	s2 = (char *)malloc(sizeof(char) * 10 + 1);
	s2_2 = (char *)malloc(sizeof(char) * 10 + 1);
	res_1 = (char *)malloc(sizeof(char) * 10 + 1);
	res_2 = (char *)malloc(sizeof(char) * 10 + 1);
	if (ac == 10)
		return (0);
	s1 = av[1];
	//printf("%s\n", s1);
	s1_2 = av[1];
	//printf("%s\n", s1_2);
	s2 = av[2];
	//printf("%s\n", s2);
	s2_2 = av[2];
	//printf("%s\n", s2_2);
	//res = strcmp(s1, s2);
	//res2 = ft_strcmp(s1, s2);
	//printf("%d\n%d\n", res, res2);
	//res = strncmp(s1, s2, 4);
	//res2 = ft_strncmp(s1, s2, 4);
	//printf("%d\n%d\n", res, res2);
	//res_1 = strcat(s2, s1);
	//printf("%s\n", res_1);
	//res_2 = ft_strcat(s2_2, s1_2);
	//printf("%s\n", res_2);
	//res_1 = strncat(s2, s1, 3);
	//printf("%s\n", res_1);
	//res_2 = ft_strncat(s2_2, s1_2, 3);
	//printf("%s\n", res_2);
	//res_1 = strstr(s1, s2);
	//printf("%s\n", res_1);
	//res_2 = ft_strstr(s1_2, s2_2);
	//printf("%s\n", res_2);
	
	res = strlcat(s1, s2, 7);
	printf("%d\n%s\n", res, s1);
	res2 = ft_strlcat(s1_2, s2_2, 7);
	printf("%d\n%s\n", res2, s1_2);
}
