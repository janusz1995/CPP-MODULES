.PHONY: all clean fclean re

NAME = ex00

SRC = main.cpp

HEADERS = whatever.hpp

SRCO = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCO) $(HEADERS)
	clang++ ${FLAGS} -o ${NAME} -I./ ${SRCO}

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all