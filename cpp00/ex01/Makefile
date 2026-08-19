# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/25 15:38:20 by fgameiro          #+#    #+#              #
#    Updated: 2026/08/19 11:56:52 by fgameiro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98 -MMD -MP

SRCS		= main.cpp \
				src/contact.cpp \
				src/phonebook.cpp

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