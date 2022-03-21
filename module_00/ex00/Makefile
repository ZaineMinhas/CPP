# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 17:42:16 by zminhas           #+#    #+#              #
#    Updated: 2022/03/21 18:57:46 by zminhas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = 		c++

CFLAGS =	-Wall -Wextra -Werror -std=c++98

NAME =		megaphone

SRCS =		megaphone.cpp

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