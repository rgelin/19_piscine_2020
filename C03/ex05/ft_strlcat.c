/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 16:42:38 by rgelin            #+#    #+#             */
/*   Updated: 2020/10/15 15:08:34 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int taille;

	j = 0;
	while (dest[j] != '\0')
		j++;
	taille = 0;
	while (src[taille] != '\0')
		taille++;
	if (size <= j)
		taille += size;
	else
		taille += j;
	i = 0;
	while (src[i] != '\0' && j + 1 < size)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (taille);
}
