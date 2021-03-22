/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 13:18:37 by rgelin            #+#    #+#             */
/*   Updated: 2020/11/21 18:00:31 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_in_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_nb_words(char *str, char *charset)
{
	int i;
	int nb_words;

	i = 1;
	nb_words = 0;
	if (!ft_in_charset(str[0], charset))
		nb_words = 1;
	while (str[i])
	{
		if (!(ft_in_charset(str[i], charset))
				&& ft_in_charset(str[i - 1], charset))
			nb_words++;
		i++;
	}
	return (nb_words);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		index;
	char	**tab;

	tab = malloc(sizeof(char*) * (ft_nb_words(str, charset) + 1));
	if (!tab || !str[0])
		return (NULL);
	i = 0;
	index = 0;
	while (index < ft_nb_words(str, charset))
	{
		if (!(tab[index] = malloc(sizeof(char) * ft_strlen(str))))
			return (NULL);
		j = 0;
		while (str[i] && ft_in_charset(str[i], charset))
			i++;
		while (str[i] && !(ft_in_charset(str[i], charset)))
			tab[index][j++] = str[i++];
		tab[index][j] = '\0';
		index++;
	}
	tab[index] = 0;
	return (tab);
}
