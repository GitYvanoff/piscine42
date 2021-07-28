# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/27 12:45:17 by bcolin            #+#    #+#              #
#    Updated: 2021/07/28 14:36:26 by bcolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c ft_strjoin.c ft_map_reader.c string.c load_map_from_fd.c ft_atoi.c

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
				./bsq "map200_200"

fclean:	clean
				${RM} ${EXEC}	

re:		fclean all

.PHONY: clean fclean re
