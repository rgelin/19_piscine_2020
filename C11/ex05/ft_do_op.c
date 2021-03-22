/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:01:12 by rgelin            #+#    #+#             */
/*   Updated: 2020/10/28 14:01:30 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_do_op(char *a, char op, char *b)
{
	int nb;

	nb = 0;
	if (op == '+')
		nb = ft_atoi(a) + ft_atoi(b);
	if (op == '-')
		nb = ft_atoi(a) - ft_atoi(b);
	if (op == '/')
		nb = ft_atoi(a) / ft_atoi(b);
	if (op == '%')
		nb = ft_atoi(a) % ft_atoi(b);
	if (op == '*')
		nb = ft_atoi(a) * ft_atoi(b);
	return (nb);
}
