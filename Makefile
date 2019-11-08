##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## my make file
##

CC   =  gcc

SRC  =  graph.c					\
		graph2.c				\
		graph3.c				\
		graph4.c				\
		main.c					\
		input_gestion.c			\
		error_gestion.c			\
		error_gestion2.c		\
		create_graph.c			\
		create_graph2.c			\
		movements_algorithm.c

OBJ  =  $(SRC:.c=.o)

NAME =  libmy.a

RM   =  rm -rf

CFLAGS = -W -Werror -Wextra -Wall

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $^ $(LDFLAGS) $(LDGFLAGS) $(CPPFLAGS) -o $@

clean:
		$(RM) $(OBJ)
		$(RM) *.gcno *.gcda *.info reporting

fclean: clean
		$(RM) $(NAME) tests

re: fclean all

tests:
		$(CC) tests.c $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) -fprofile-arcs -ftest-coverage -lcriterion -o tests

reporting: tests
		lcov --capture --initial --directory . --output-file coverage_base.info
		lcov --capture --directory . --output-file coverage_test.info
		lcov --add-tracefile coverage_base.info --add-tracefile coverage_test.info --output-file coverage_merge.info
		lcov --remove coverage_merge.info "`pwd`/external/*" "`pwd`/test/*" "/usr/*" -o coverage.info
		$(RM) reporting
		genhtml -o reporting -t "couverture de tests" coverage.info
		xdg-open reporting/index.html

.PHONY: all clean fclean re tests $(NAME)
