# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/18 16:30:27 by zminhas           #+#    #+#              #
#    Updated: 2022/03/18 16:30:34 by zminhas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook

$(NAME):
			@c++ -Wall -Werror -Wextra *.cpp
			@mv a.out $(NAME)

all:		$(NAME)

fclean:		
			@rm $(NAME)

re:		fclean all

.PHONY:	all fclean re