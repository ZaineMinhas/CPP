# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/21 19:08:34 by zminhas           #+#    #+#              #
#    Updated: 2022/09/23 14:47:21 by zminhas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = 		c++

CXXFLAGS =	-Wall -Wextra -Werror -std=c++98

NAME =		karen

SRCS =		main.cpp	\
			Karen.cpp	\

OBJS =		$(SRCS:.cpp=.o)

.cpp.o:
			$(CXX) $(CXXFLAGS) -c -I ./ $< -o $(<:.cpp=.o)

all : 		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)

fclean: 	clean
			rm -f $(NAME)

re: 		fclean all

.PHONY:		all clean fclean re