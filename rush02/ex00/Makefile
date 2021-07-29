# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/25 02:57:08 by ypetruzz          #+#    #+#              #
#    Updated: 2021/07/25 18:32:29 by ypetruzz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRC = *.c
FLAGS = -Wall -Werror -Wextra
all: $(NAME)
RM = rm -f
$(NAME):
		gcc $(FLAGS) -o $(NAME) $(SRC)

clean:
		$(RM) *.o
fclean: clean
		$(RM) $(NAME)
