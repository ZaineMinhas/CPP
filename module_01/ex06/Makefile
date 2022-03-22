# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/21 19:46:39 by zminhas           #+#    #+#              #
#    Updated: 2022/03/22 17:28:58 by zminhas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = 		c++

CFLAGS =	-Wall -Wextra -Werror -std=c++98

NAME =		karenFilter

SRCS =		main.cpp	\
			Karen.cpp	\

OBJS =		$(SRCS:.cpp=.o)

all : 		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
			rm -f $(OBJS) $(OB)

fclean: 	clean
			rm -f $(NAME) $(OB)

re: 		fclean all

.PHONY:		all clean fclean re