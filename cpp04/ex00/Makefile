# https://github.com/42school/norminette/blob/master/pdf/en.norm.pdf
# p.16 Makefile

NAME = makesound
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

all: $(NAME)

$(NAME): $(SRC)
	c++ -Wall -Wextra -Werror -std=c++98 -pedantic $(SRC) -o $(NAME)

re: clean $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

.PHONY: all re clean fclean

