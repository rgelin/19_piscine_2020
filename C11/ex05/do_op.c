/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 19:41:18 by rgelin            #+#    #+#             */
/*   Updated: 2020/10/28 18:55:49 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	else if (av[2][0] != '+' && av[2][0] != '-' && av[2][0] != '/'
			&& av[2][0] != '%' && av[2][0] != '*')
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	else if (av[2][0] == '/' && ft_atoi(av[3]) == 0)
		ft_putstr("Stop : division by zero");
	else if (av[2][0] == '/' && ft_atoi(av[3]) == 0)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr(ft_do_op(av[1], av[2][0], av[3]));
	ft_putchar('\n');
	return (0);
}
