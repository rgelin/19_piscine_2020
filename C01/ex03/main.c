/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 16:06:47 by rgelin            #+#    #+#             */
/*   Updated: 2020/10/11 16:47:57 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int a;
	int b;
	int *div;
	int *mod;
	
	a = 8;
	b = 3;
	*div = 0;
	*mod = 0;

	ft_div_mod(a,b,div,mod);
	printf("%d\n",*div);
	printf("%d\n",*mod);
}
