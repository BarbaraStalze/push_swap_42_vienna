# Makefile for push_swap

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
OBJFILES = $(SOURCES:.c=.o)
SOURCES = assemble_stack.c \
	find_cheapest.c \
	find_target.c \
	first_push.c \
	free_stack.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_cost.c \
	ft_indexing.c \
	ft_move.c \
	ft_reverse_rotate.c \
	ft_rotate.c \
	ft_split.c \
	is_sorted.c \
	is_valid.c \
	new_node.c \
	operations.c \
	push_swap.c \
	sort_few.c \
	ft_substr.c \

all : $(NAME)

$(NAME) : $(OBJFILES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(NAME)

%.o : %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJFILES)

fclean:clean
	rm -f $(NAME)

re:fclean all

.PHONY: all clean fclean re
