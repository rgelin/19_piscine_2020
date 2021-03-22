/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 20:12:06 by rgelin            #+#    #+#             */
/*   Updated: 2020/10/27 16:29:25 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_error(char *base);
int		ft_atoi_base(char *str, char *base);
int		ft_strlen(char *str);

void	rev_str(char *str, int neg)
{
	int		len;
	int		i;
	char	temp;

	i = 0;
	len = ft_strlen(str);
	while (i < len / 2)
	{
		temp = str[i + neg];
		str[i + neg] = str[len - 1 - i];
		str[len - i - 1] = temp;
		i++;
	}
}

void	convert_base(char *tab, int n, char *base_to)
{
	int		i;
	int		len;
	long	nb;

	i = 0;
	if (n < 0)
	{
		tab[i++] = '-';
		nb = (unsigned int)(-n);
	}
	else
		nb = (unsigned int)n;
	if (nb == 0)
		tab[i++] = *(base_to);
	len = ft_strlen(base_to);
	while (nb > 0)
	{
		tab[i++] = *(base_to + (nb % len));
		nb /= len;
	}
	tab[i] = 0;
	if (n < 0)
		rev_str(tab, 1);
	else
		rev_str(tab, 0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long n;
	char *tab;

	if (check_error(base_from) || check_error(base_to))
		return (0);
	n = ft_atoi_base(nbr, base_from);
	tab = (char *)malloc(sizeof(char) * 34);
	convert_base(tab, n, base_to);
	return (tab);
}
