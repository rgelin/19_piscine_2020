/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 20:48:33 by rgelin            #+#    #+#             */
/*   Updated: 2020/10/26 14:22:22 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char **ft_split(char *str, char *charset);

int		main(void)
{
	char str[] = "salutnqbomjourztrucqnbidule";
	char charset[] = "nqz";
	char **tab;
	int i;

	tab = ft_split(str,charset);
	i = 0;
	while (i < 5)
	{
	printf("%s\n", tab[i]);
	i++;
	}
}
