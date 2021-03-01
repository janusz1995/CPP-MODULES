# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drina <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/23 13:09:53 by drina             #+#    #+#              #
#    Updated: 2020/11/23 13:09:55 by drina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = megaphone

SRC = megaphone.cpp

SRCO = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCO)
	clang++ ${FLAGS} -o ${NAME} ${SRCO}

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all