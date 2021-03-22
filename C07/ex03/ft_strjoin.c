/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 16:26:55 by rgelin            #+#    #+#             */
/*   Updated: 2020/10/27 16:21:29 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}

int		ft_sep_length(char *sep)
{
	int i;

	i = 0;
	while (sep[i])
		i++;
	return (i);
}

int		ft_strs_length(int size, char **strs)
{
	int i;
	int j;
	int length;

	i = 0;
	length = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			length++;
		}
		i++;
	}
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		size_tab;

	if (size == 0)
	{
		tab = malloc(sizeof(char));
		*tab = 0;
		return (tab);
	}
	size_tab = (size - 1) * ft_sep_length(sep) + ft_strs_length(size, strs) + 1;
	if (!(tab = malloc(sizeof(char) * size_tab)))
		return (0);
	i = 0;
	*tab = 0;
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if (i < size - 1)
			ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}
