# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/20 15:32:27 by zminhas           #+#    #+#              #
#    Updated: 2022/03/20 17:17:29 by zminhas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= replace

$(NAME):
						@c++ -Wall -Werror -Wextra *.cpp
						@mv a.out $(NAME)

all:		$(NAME)

fclean:
						@rm $(NAME)

re:		fclean all

.PHONY:	all fclean re