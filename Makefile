##
## EPITECH PROJECT, 2021
## my_defender
## File description:
## Makefile
##

SRC		=	src/main.c	\
			src/speed.c	\
			src/value.c	\
			src/move.c	\
			src/utils.c	\
			src/ia.c

OBJ		=	$(SRC:.c=.o)

NAME		=	ai

TEST_NAME	=	test_units

CPPFLAGS	= -I include/

CFLAGS	=	 -g3 -O3 -O -O1 -O2

LDFLAGS	=	-L lib/my -l my

CRITERION = -lcriterion --coverage

all:	$(NAME)

$(NAME): $(OBJ)
	cd lib/my && $(MAKE)
	gcc -o $(NAME) $(OBJ) $(LIB) $(CPPFLAGS) $(LDFLAGS) $(CFLAGS)

tests_run:
	gcc -o $(TEST_NAME) $(SRC) tests/test_matchstick.c $(LDFLAGS) $(CPPFLAGS) $(CFLAGS) $(CRITERION)
	-./$(TEST_NAME)

clean:
	rm -f $(OBJ)
	rm -f lib/my/*.o
	rm -f src/*.o
	rm -f *~
	rm -f *.html

fclean: clean
	rm -f lib/libmy.a
	rm -f lib/my/libmy.a
	rm -f *.gcda
	rm -f *.gcno

re:	fclean all 

.PHONY: all clean fclean re tests_run