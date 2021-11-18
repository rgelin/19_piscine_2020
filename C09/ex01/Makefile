# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgelin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/25 19:48:32 by rgelin            #+#    #+#              #
#    Updated: 2020/10/28 13:53:42 by rgelin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC		= gcc

SRCS	= srcs/ft_putchar.c \
			srcs/ft_putstr.c \
			srcs/ft_swap.c \
			srcs/ft_strlen.c \
			srcs/ft_strcmp.c

INC		= -I includes

OBJS	= $(SRCS:%.c=%.o)

CFLAGS	= -Wall -Wextra -Werror

REMOVE	= /bin/rm -f

.c.o:
			$(CC) $(CFLAGS) $(INC) -c $< -o $(<:.c=.o)

all:		$(NAME)

${NAME}:	$(OBJS)
			ar rc  $(NAME) $(OBJS)
			ranlib $(NAME)

clean:
			$(REMOVE) $(OBJS)

fclean:
			$(REMOVE) $(OBJ) $(NAME)

re:			fclean all

.PHONY:		clean fclean re
