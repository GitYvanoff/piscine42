NAME := libft.a
SRCS_DIR := srcs
OBJS := $(addprefix $(SRCS_DIR)/,ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o)

HEADERS_DIR = includes

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I $(HEADERS_DIR)

all: ${NAME}

${NAME}: $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): %.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
.PHONY:				all clean flclean re
