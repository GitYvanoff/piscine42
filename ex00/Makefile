# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/27 12:45:17 by bcolin            #+#    #+#              #
#    Updated: 2021/07/28 16:25:08 by ypetruzz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c ft_strjoin.c ft_map_reader.c string.c load_map_from_fd.c ft_atoi.c solve.c

OBJS	= ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

EXEC	= bsq


all:		${EXEC}

.c.o:
				${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${EXEC}:	${OBJS}
				${CC} -o $@ ${OBJS}

clean:
				${RM} ${OBJS}

gen:	all
<<<<<<< HEAD
				perl map_gen 20 20	1 | ./bsq
=======
				./bsq "map200_200"
>>>>>>> 51ec0d5b7ed965492ac85422af12e31b57c790c5

fclean:	clean
				${RM} ${EXEC}

re:		fclean all

.PHONY: clean fclean re
