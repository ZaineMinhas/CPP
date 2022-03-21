# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/17 16:00:44 by zminhas           #+#    #+#              #
#    Updated: 2022/03/21 19:05:11 by zminhas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = 		c++

CFLAGS =	-Wall -Wextra -Werror -std=c++98

NAME =		phonebook

SRCS =		phonebook.class.cpp		\
			phonebook.class2.cpp	\
			main.cpp				\

OBJS =		$(SRCS:.cpp=.o)

all : 		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
			rm -f $(OBJS) $(OB)

fclean: 	clean
			rm -f $(NAME) $(OB)

re: 		fclean all

.PHONY:		all clean fclean re
