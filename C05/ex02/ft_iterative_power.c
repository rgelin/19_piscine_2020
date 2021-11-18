/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 18:56:38 by rgelin            #+#    #+#             */
/*   Updated: 2020/10/19 18:57:47 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int				i;
	long long int	nbr;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	nbr = nb;
	while (i < power)
	{
		nbr = nbr * nb;
		i++;
	}
	return (nbr);
}
