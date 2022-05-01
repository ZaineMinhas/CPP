/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 18:00:56 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/01 16:31:07 by zminhas          ###   ########.fr       */
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
		return (return_error("Error"));
	Cast	cast(av[1]);
	
	if (cast.isInt())
		cast.castInt();
	else if (cast.isChar())
		cast.castChar();
	else if (cast.isFloat())
		cast.castFloat();
	else if (cast.isDouble())
		cast.castDouble();
	else
		return (return_error("Error"));
	bool	dot = false;
	
	if (cast.getInt() == cast.getDouble())
		dot = true;
	if (cast.getInt() >= 0 && cast.getInt() <= 127)
	{
		if (cast.getInt() >= 32 && cast.getInt() <= 126)
			std::cout << "char: " << "\'" << cast.getChar() << "\'" << std::endl;
		else
			std::cout << "char: non displayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
	if (!cast.getArg().compare("nanf") || !cast.getArg().compare("+inff") || !cast.getArg().compare("-inff") || !cast.getArg().compare("nan") || !cast.getArg().compare("+inf") || !cast.getArg().compare("-inf"))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << cast.getInt() << std::endl;
	if (dot)
		std::cout << "float: " << cast.getFloat() << ".0f" << std::endl;
	else
		std::cout << "float: " << cast.getFloat() << "f" << std::endl;
	if (dot)
		std::cout << "double: " << cast.getDouble() << ".0" << std::endl; 
	else
		std::cout << "double: " << cast.getDouble() << std::endl;
	return (0);
}
