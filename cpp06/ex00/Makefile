.PHONY: all clean fclean re

NAME = convert

SRC = main.cpp

# HEADERS =

SRCO = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=gnu++98 -stdlib=libc++

all: $(NAME)

$(NAME): $(SRCO) #$(HEADERS)
	clang++ ${FLAGS} -o ${NAME} -I./ ${SRCO}

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all