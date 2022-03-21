# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/19 17:43:50 by zminhas           #+#    #+#              #
#    Updated: 2022/03/21 19:01:46 by zminhas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = 		c++

CFLAGS =	-Wall -Wextra -Werror -std=c++98

NAME =		a.out

SRCS =		main.cpp

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