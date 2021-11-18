/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 12:41:52 by rgelin            #+#    #+#             */
/*   Updated: 2020/10/26 17:10:03 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		check_error(char *str)
{
	int i;
	int j;

	if (ft_strlen(str) == 0 || ft_strlen(str) == 1)
		return (0);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[j])
		{
			if (str[i] == str[j] && i != j)
				return (0);
			j++;
		}
		if (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
				|| str[i] == '\f' || str[i] == ' '
				|| str[i] == '+' || str[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

int		check_in_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int		check_index_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != c)
		i++;
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	long	nb;

	i = 0;
	sign = 1;
	nb = 0;
	if (check_error(base) == 0)
		return (0);
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (check_in_base(str[i], base))
	{
		nb = (nb * ft_strlen(base)) + check_index_base(str[i], base);
		i++;
	}
	return (nb * sign);
}
