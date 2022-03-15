# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 17:42:16 by zminhas           #+#    #+#              #
#    Updated: 2022/03/15 18:02:29 by zminhas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone

$(NAME):
			@c++ -Wall -Werror -Wextra megaphone.cpp
			@mv a.out $(NAME)

all:		$(NAME)

fclean:		
			@rm $(NAME)

re:		fclean all

.PHONY:	all fclean re
