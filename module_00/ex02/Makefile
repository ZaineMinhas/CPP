# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zminhas <zminhas@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/18 16:30:27 by zminhas           #+#    #+#              #
#    Updated: 2022/10/03 19:12:12 by zminhas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = 		c++

CXXsFLAGS =	-Wall -Wextra -Werror -std=c++98

NAME =		bank

SRCS =		Account.cpp	\
			tests.cpp	\

OBJS =		$(SRCS:.cpp=.o)

.cpp.o:
			$(CXX) $(CXXsFLAGS) -c -I ./ $< -o $(<:.cpp=.o)

$(NAME):	$(OBJS)
			$(CXX) $(CXXsFLAGS) -o $(NAME) $(OBJS)

all : 		$(NAME)

clean:
			rm -f $(OBJS)

fclean: 	clean
			rm -f $(NAME)

re: 		fclean all

.PHONY:		all clean fclean re