# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 18:16:30 by zminhas           #+#    #+#              #
#    Updated: 2022/04/16 19:17:50 by zminhas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = 		c++

CFLAGS =	-Wall -Wextra -Werror -std=c++98

NAME =		brain

SRCS =		Animal.cpp	\
			Brain.cpp	\
			Cat.cpp		\
			Dog.cpp		\
			main.cpp	\

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