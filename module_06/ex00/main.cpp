/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 18:00:56 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/30 19:40:09 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

int	return_error(const std::string error)
{
	std::cout << error << std::endl;
	return (1);                       
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (return_error("zizi"));
	Cast	cast(av[1]);
	
	if (cast.isChar())
		cast.castChar();
	else if (cast.isInt())
		cast.castOther();
	else if (cast.isFloat())
		cast.castOther();
	else if (cast.isDouble())
		cast.castOther();
	else
		return_error("zizi");
	bool	dot = false;
	
	if (cast.getInt() == cast.getDouble())
		dot = true;
	if (cast.getInt() < 32 || cast.getInt() > 126)
		std::cout << "CHAR : non displayable" << std::endl;
	else
		std::cout << "CHAR : " << "\'" << cast.getChar() << "\'" << std::endl;
	std::cout << "INT : " << cast.getInt() << std::endl;
	if (dot)
		std::cout << "FLOAT : " << cast.getFloat() << ".0f" << std::endl;
	else
		std::cout << "FLOAT : " << cast.getFloat() << "f" << std::endl;
	if (dot)
		std::cout << "DOUBLE : " << cast.getDouble() << ".0" << std::endl; 
	else
		std::cout << "DOUBLE : " << cast.getDouble() << std::endl;
	return (0);
}
