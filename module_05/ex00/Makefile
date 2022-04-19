# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/19 16:14:12 by zminhas           #+#    #+#              #
#    Updated: 2022/04/19 16:15:20 by zminhas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = 		c++

CFLAGS =	-Wall -Wextra -Werror -std=c++98

NAME =		burreaucrat

SRCS =		Burreaucrat.cpp	\
			main.cpp		\

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