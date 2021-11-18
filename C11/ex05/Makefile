NAME = 		do-op

CC = 		gcc

SRCS = 		do_op.c\
			ft_atoi.c\
			ft_do_op.c\
			ft_putchar.c\
			ft_putnbr.c\
			ft_putstr.c

CFLAGS = 	-Wall -Werror -Wextra

INC = 		-I ft.h

RM = 		/bin/rm -f

OBJS = 		$(SRCS:.c=.o)

.c.o:
			$(CC) $(CFLAGS) $(INC) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME): 	$(OBJS)
			$(CC) -o $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:
			$(RM) $(OBJ) $(NAME)

re:			fclean all

.PHONY:		clean fclean re
