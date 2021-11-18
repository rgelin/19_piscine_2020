/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 13:54:32 by rgelin            #+#    #+#             */
/*   Updated: 2020/10/25 14:54:42 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_str_length(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strcopy(char *str)
{
	int		i;
	char	*dest;

	i = 0;
	if (!(dest = malloc(sizeof(char) * (ft_str_length(str) + 1))))
		return (NULL);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tab;

	if (!(tab = malloc(sizeof(struct s_stock_str) * (ac + 1))))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_str_length(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strcopy(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
