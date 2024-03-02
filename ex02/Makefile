# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/02 05:27:28 by fabou-za          #+#    #+#              #
#    Updated: 2023/01/02 16:51:51 by fabou-za         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = classTemplate
CFLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++

SRC_NAME = main.cpp

OBJ_NAME = $(SRC_NAME:%.cpp=%.o)

HEADER = Array.hpp

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
