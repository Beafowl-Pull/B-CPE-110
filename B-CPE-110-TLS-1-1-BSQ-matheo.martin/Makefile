##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## UwU
##

SRC = $(shell find ./sources -type f -name '*.c')

CFLAGS = -Iinclude -g3

LDFLAGS	= -Llib/my -lmy

OBJ = $(SRC:.c=.o)

NAME = bsq

all: $(NAME)

$(NAME): $(OBJ)
	make -C ./lib/my
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

lib:
	$(MAKE) -C ./lib/my re

clean:
	make -C ./lib/my clean
	rm -f $(OBJ)
	rm -f *.o
	rm -f *.gcno
	rm -f *.gcda
	rm -f *.o

fclean:	clean
	make -C ./lib/my fclean
	rm -f lib/libmy.a
	rm -f $(NAME)

re:	fclean all
