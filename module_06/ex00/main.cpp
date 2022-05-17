/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 18:00:56 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/17 20:08:15 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

void	display_char(Cast cast)
{
	if (cast.getInt() >= 0 && cast.getInt() <= 127)
	{
		if (cast.getInt() >= 32 && cast.getInt() <= 126)
			std::cout << "char: " << "\'" << cast.getChar() << "\'" << std::endl;
		else
			std::cout << "char: non displayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
}

void	display_int(Cast cast)
{
	if (!cast.getArg().compare("nanf") || !cast.getArg().compare("+inff") || !cast.getArg().compare("-inff") || !cast.getArg().compare("nan") || !cast.getArg().compare("+inf") || !cast.getArg().compare("-inf"))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << cast.getInt() << std::endl;
}

void	display_float(Cast cast)
{
	bool	dot = false;
	
	if (cast.getInt() == cast.getDouble())
		dot = true;
	if (dot)
		std::cout << "float: " << cast.getFloat() << ".0f" << std::endl;
	else
		std::cout << "float: " << cast.getFloat() << "f" << std::endl;
}

void	display_double(Cast cast)
{
	bool	dot = false;
	
	if (cast.getInt() == cast.getDouble())
		dot = true;
	if (dot)
		std::cout << "double: " << cast.getDouble() << ".0" << std::endl; 
	else
		std::cout << "double: " << cast.getDouble() << std::endl;
}

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
	{
		std::cout << "type : INT" << std::endl;
		cast.castOther();
	}
	else if (cast.isChar())
	{
		std::cout << "type : CHAR" << std::endl;
		cast.castChar();
	}
	else if (cast.isFloat())
	{
		std::cout << "type : FLOAT" << std::endl;
		cast.castOther();
	}
	else if (cast.isDouble())
	{
		std::cout << "type : DOUBLE" << std::endl;
		cast.castOther();
	}
	else
		return (return_error("Error"));

	display_char(cast);
	display_int(cast);
	display_float(cast);
	display_double(cast);
	return (0);
}
