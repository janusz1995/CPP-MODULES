.PHONY: all clean fclean re

NAME = ex01

SRC = main.cpp serialize.cpp deserialize.cpp random_symbol.cpp

HEADERS = data.h

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