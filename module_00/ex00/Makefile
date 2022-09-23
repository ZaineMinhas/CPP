# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 17:42:16 by zminhas           #+#    #+#              #
#    Updated: 2022/09/23 14:45:36 by zminhas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = 		c++

CXXFLAGS =	-Wall -Wextra -Werror -std=c++98

NAME =		megaphone

SRCS =		megaphone.cpp

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