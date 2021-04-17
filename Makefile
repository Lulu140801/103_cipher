##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## 103_cipher
##

CC	=	gcc

SRC 	=  	src/103cipher.c		\
			lib/my_strlen.c		\
			lib/my_getnbr.c		\
			lib/multiple_3.c	\
			lib/tiret_h.c

OBJ     =       $(SRC:.c=.o)

NAME	=	103cipher

CFLAGS 	=	-W -Wall -Wextra -pedantic


all:	$(NAME)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
