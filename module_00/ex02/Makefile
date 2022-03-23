# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/18 16:30:27 by zminhas           #+#    #+#              #
#    Updated: 2022/03/23 19:01:27 by zminhas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = 		c++

CFLAGS =	-Wall -Wextra -Werror -std=c++98

NAME =		bank

SRCS =		Account.cpp	\
			tests.cpp	\

OBJS =		$(SRCS:.cpp=.o)

.cpp.o:
			$(CXX) $(CFLAGS) -c -I ./ $< -o $(<:.cpp=.o)

all : 		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
			rm -f $(OBJS) $(OB)

fclean: 	clean
			rm -f $(NAME) $(OB)

re: 		fclean all

.PHONY:		all clean fclean re