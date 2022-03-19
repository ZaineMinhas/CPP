# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/19 16:31:58 by zminhas           #+#    #+#              #
#    Updated: 2022/03/19 17:39:37 by zminhas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= zombieHorde

$(NAME):
						@c++ -Wall -Werror -Wextra *.cpp
						@mv a.out $(NAME)

all:		$(NAME)

fclean:
						@rm $(NAME)

re:		fclean all

.PHONY:	all fclean re