# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/21 19:24:05 by fgameiro          #+#    #+#              #
#    Updated: 2026/09/03 10:44:12 by fgameiro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= Animals

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98 -MMD -MP -Wshadow

INCLUDES	=	inc/AAnimal.hpp \
				inc/Cat.hpp \
				inc/Dog.hpp \
				inc/WrongAnimal.hpp \
				inc/WrongCat.hpp \
				inc/Brain.hpp \
				inc/Colors.hpp

SRCS		=	main.cpp \
				src/Cat.cpp \
				src/Dog.cpp \
				src/AAnimal.cpp \
				src/WrongAnimal.cpp \
				src/WrongCat.cpp \
				src/Brain.cpp

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