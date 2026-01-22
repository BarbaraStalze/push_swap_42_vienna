# Makefile for push_swap

NAME = push_swap.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJFILES = $(SOURCES:.c=.o)
SOURCES =  \

all : $(NAME)

$(NAME) : $(OBJFILES)
	ar rcs $(@) $(?)

%.o : %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJFILES)

fclean:clean
	rm -f $(NAME)

re:fclean all

.PHONY: all clean fclean re
