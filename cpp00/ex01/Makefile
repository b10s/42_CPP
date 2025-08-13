# https://github.com/42school/norminette/blob/master/pdf/en.norm.pdf
# p.16 Makefile

NAME = ph0n3b00k
SRC = main.cpp PhoneBook.cpp Contact.cpp
HDR = PhoneBook.hpp Contact.hpp

all: $(NAME)

$(NAME): $(SRC) $(HDR)
	c++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

re: clean $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

.PHONY: all re clean fclean

