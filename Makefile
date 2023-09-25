##
## EPITECH PROJECT, 2022
## my_sokoban
## File description:
## Makefile
##

NAME	=	my_sokoban

SRC	=	lib/*.c		\
		my_sokoban.c    \

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-g3

all:	$(NAME)

$(NAME): $(OBJ)
	@gcc $(SRC) -o $(NAME) $(CFLAGS) -lncurses

%.o: %.c
	@gcc $(CFLAGS) -c $< -o $(NAME) 

clean:
	@rm -f ##
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re:	clean all