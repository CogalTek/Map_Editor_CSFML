##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## desc
##

NAME	=		Editor

CFLAGS	= 		-W -Wall -Wextra

SRC		=		./src/main.c						\
				./src/tools/concat_strings.c		\
				./src/tools/my_put_nbr.c			\
				./src/tools/my_putchar.c			\
				./src/tools/my_putspace.c			\
				./src/tools/my_putstr.c				\

OBJ		=		$(SRC:.c=.o)

all:	$(OBJ)
		gcc $(SRC) -o $(NAME) -I../include

apple:	$(OBJ)
		/usr/bin/arch -x86_64 gcc $(SRC) -o $(NAME) -I../include

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:	fclean all
