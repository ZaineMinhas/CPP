# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/19 15:36:50 by zminhas           #+#    #+#              #
#    Updated: 2022/03/19 16:23:48 by zminhas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= zombie

$(NAME):
						@c++ -Wall -Werror -Wextra *.cpp
						@mv a.out $(NAME)

all:		$(NAME)

fclean:
						@rm $(NAME)

re:		fclean all

.PHONY:	all fclean re