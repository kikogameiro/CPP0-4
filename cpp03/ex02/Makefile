# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/26 14:38:32 by fgameiro          #+#    #+#              #
#    Updated: 2026/08/26 14:38:34 by fgameiro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= FragTrap

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98 -MMD -MP

INCLUDES	=	inc/ClapTrap.hpp \
				inc/ScavTrap.hpp \
				inc/FragTrap.hpp

SRCS		=	main.cpp \
				src/ClapTrap.cpp \
				src/ScavTrap.cpp \
				src/FragTrap.cpp

OBJ_DIR		= obj
OBJS		= $(addprefix $(OBJ_DIR)/,$(SRCS:.cpp=.o))
DEPS		= $(OBJS:.o=.d)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re