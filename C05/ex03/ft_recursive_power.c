/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 15:06:11 by rgelin            #+#    #+#             */
/*   Updated: 2020/10/19 18:59:01 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int nbr;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
		power--;
	return (nbr = nb * ft_recursive_power(nb, power));
}
