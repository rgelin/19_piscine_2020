/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:55:58 by rgelin            #+#    #+#             */
/*   Updated: 2020/10/28 18:56:58 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

void	ft_putchar(char c);
int		ft_atoi(char *nb);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_do_op(char *a, char op, char *b);

#endif
