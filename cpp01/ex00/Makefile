# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/29 15:42:02 by fgameiro          #+#    #+#              #
#    Updated: 2026/07/29 17:04:46 by fgameiro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= zombie

CC			= g++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

INCLUDES	=	inc/Zombie.hpp

SRCS		= 	main.cpp \
				src/Zombie.cpp \
				src/newZombie.cpp \
				src/randomChump.cpp

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