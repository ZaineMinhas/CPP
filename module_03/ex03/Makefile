# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/23 15:55:24 by zminhas           #+#    #+#              #
#    Updated: 2022/09/23 14:50:20 by zminhas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = 		c++

CXXFLAGS =	-Wall -Wextra -Werror -std=c++98

NAME =		diamondtrap

SRCS =		ClapTrap.cpp	\
			DiamondTrap.cpp	\
			FragTrap.cpp	\
			main.cpp		\
			ScavTrap.cpp	\

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