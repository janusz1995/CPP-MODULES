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

NAME = My_Awesome_PhoneBook

SRC = main.cpp fill_contact.cpp show.cpp

HEADERS = phonebook.h contacts.hpp

SRCO = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCO) $(HEADERS)
	clang++ ${FLAGS} -o ${NAME} -I./ ${SRCO}

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all