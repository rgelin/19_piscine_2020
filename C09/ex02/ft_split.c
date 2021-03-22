/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 20:31:02 by rgelin            #+#    #+#             */
/*   Updated: 2020/10/26 17:55:44 by rgelin           ###   ########.fr       */
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

int		check_in_charset(char c, char *charset)
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

int		check_nb_words(char *str, char *charset)
{
	int i;
	int nb_words;

	nb_words = 0;
	if (!(check_in_charset(str[0], charset)))
		nb_words = 1;
	i = 0;
	while (str[i])
	{
		if (check_in_charset(str[i - 1], charset) &&
				!check_in_charset(str[i], charset))
			nb_words++;
		i++;
	}
	return (nb_words);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		index;
	int		j;
	char	**tab;

	if (!(tab = malloc(sizeof(char*) * (check_nb_words(str, charset) + 1)))
			|| !str[0])
		return (NULL);
	i = 0;
	index = 0;
	while (index < check_nb_words(str, charset))
	{
		if (!(tab[index] = malloc(sizeof(char) * ft_strlen(str))))
			return (NULL);
		j = 0;
		while (str[i] && check_in_charset(str[i], charset))
			i++;
		while (str[i] && !check_in_charset(str[i], charset))
			tab[index][j++] = str[i++];
		tab[index][j] = '\0';
		index++;
	}
	tab[index] = 0;
	return (tab);
}
