# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/02 05:24:30 by fabou-za          #+#    #+#              #
#    Updated: 2023/01/02 05:24:42 by fabou-za         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = template
CFLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++

SRC_NAME = main.cpp

OBJ_NAME = $(SRC_NAME:%.cpp=%.o)
HEADER = whatever.hpp

all: $(NAME)

$(NAME): $(OBJ_NAME)
	$(CC) $^ -o $@

%.o: %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ_NAME)

fclean: clean 
	rm -rf $(NAME)

re: fclean all
