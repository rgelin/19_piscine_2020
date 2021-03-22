/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 15:29:20 by rgelin            #+#    #+#             */
/*   Updated: 2020/10/22 21:06:14 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_lenght(char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_erreur(char *base)
{
	int i;
	int j;

	i = 0;
	if (ft_lenght(base) == 0 || ft_lenght(base) == 1)
		return (1);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	lenght;
	long			nb;

	if (ft_erreur(base) == 1)
		return ;
	nb = nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	lenght = ft_lenght(base);
	if (nb >= lenght)
	{
		ft_putnbr_base(nb / lenght, base);
		ft_putnbr_base(nb % lenght, base);
	}
	else
		write(1, base + nb, 1);
}
