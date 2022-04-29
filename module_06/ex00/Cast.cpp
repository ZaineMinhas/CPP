/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 18:13:21 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/29 19:33:23 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

Cast::Cast() {}

Cast::Cast(const std::string arg) : _arg(arg) {}

Cast::Cast(const Cast &src) {
	*this = src;
}

Cast::~Cast() {}

Cast	&Cast::operator=(const Cast &rhs) {
	this->_arg = rhs.getArg();
	this->_char = rhs.getChar();
	this->_int = rhs.getInt();
	this->_float = rhs.getFloat();
	this->_double = rhs.getDouble();
	return (*this);
}

std::string		Cast::getArg(void) const {
	return (this->_arg);
}

char	Cast::getChar(void) const {
	return (this->_char);
}

int		Cast::getInt(void) const {
	return (this->_int);
}

float	Cast::getFloat(void) const {
	return (this->_float);
}

double	Cast::getDouble(void) const {
	return (this->_double);
}

bool	Cast::isChar(void) const
{
	if (this->_arg.length() == 1 && (this->_arg[0] >= 0 && this->_arg[0] <= 127))
		return (true);
	else if (this->_arg.length() == 3 && (this->_arg[0] == '\'' && (this->_arg[1] >= 0 && this->_arg[1] <= 127) && this->_arg[2] == '\''))
		return (true);
	return (false);
}

bool	Cast::isInt(void) const
{
	for (int i = 0; i < this->_arg.length(); i++)
	{
		if (!i && (this->_arg[i] == '+' || this->_arg[i] == '-'))
			i++;
		
		else if (!(this->_arg[i] >= '0' && this->_arg[i] <= '9'))
			return (false);
	}
	return (true);
}
