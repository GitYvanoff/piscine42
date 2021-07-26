SRCS		= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

OBJS		= $(addprefix srcs/, ${SRCS: .c=.o})

NAME		= libft.a

.c.o:
					gcc -Wall -Werror -Wextra -c -I./includes $< -o ${<:.c=.o}

${NAME}:		${OBJS}
					ar -rcs $@ $^

all:		${NAME}

clean:
					rm -f ${OBJS}

fclean:		clean
					rm -f ${OBJS}

re:					fclean all

.PHONY:				all clean flclean re
