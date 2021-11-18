/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 14:57:35 by rgelin            #+#    #+#             */
/*   Updated: 2020/10/11 15:44:16 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int		main(void)
{
	int *a;
	int *b;
	int c;
	int d;

	c = 55;
	d = 89;
	a = &c;
	b = &d;
	printf("%d\n",c);
	printf("%d\n",d);
	ft_swap(a,b);
	printf("%d\n",c);
	printf("%d\n",d);
	return (0);
}
