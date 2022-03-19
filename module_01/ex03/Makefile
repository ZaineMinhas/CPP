# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/19 18:15:53 by zminhas           #+#    #+#              #
#    Updated: 2022/03/19 18:16:00 by zminhas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= a.out

$(NAME):
						@c++ -Wall -Werror -Wextra *.cpp
						@mv a.out $(NAME)

all:		$(NAME)

fclean:
						@rm $(NAME)

re:		fclean all

.PHONY:	all fclean re