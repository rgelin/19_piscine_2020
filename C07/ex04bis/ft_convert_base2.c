/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 18:51:22 by rgelin            #+#    #+#             */
/*   Updated: 2020/10/26 14:38:04 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);
int		ft_strlen(char *str);
int		check_error(char *base);

char	*rev_str(char *str, int neg)
{
	int		i;
	char	temp;

	i = 0;
	while (i < ft_strlen(str) / 2)
	{
		temp = str[i + neg];
		str[i + neg] = str[ft_strlen(str) - i - 1];
		str[ft_strlen(str) - i - 1] = temp;
		i++;
	}
	return (str);
}

void	ft_putnbr_base(char *tab, int nbr, char *base)
{
	long	n;
	int		i;

	i = 0;
	n = nbr;
	if (n < 0)
	{
		tab[i++] = '-';
		n = (unsigned int)(-n);
	}
	else
		n = (unsigned int)n;
	if (n == 0)
		tab[i++] = *(base);
	while (n > 0)
	{
		tab[i++] = *((n % ft_strlen(base)) + base);
		n = n / ft_strlen(base);
	}
	tab[i] = '\0';
	if (nbr < 0)
		rev_str(tab, 1);
	else
		rev_str(tab, 0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*tab;
	long	nb;

	if (!(check_error(base_from) || check_error(base_to)))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	if (!(tab = malloc(sizeof(char) * 34)))
		return (NULL);
	ft_putnbr_base(tab, nb, base_to);
	return (tab);
}
