# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/03 20:29:03 by fgameiro          #+#    #+#              #
#    Updated: 2026/08/03 20:30:11 by fgameiro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Harl

CC			= g++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

INCLUDES	=	inc/Harl.hpp

SRCS		=	main.cpp \
				src/Harl.cpp

OBJ_DIR		= obj
OBJS 		= $(addprefix $(OBJ_DIR)/,$(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -rf $(OBJ_DIR)

re: fclean all

.PHONY: all clean fclean re