/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 18:13:21 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/17 16:29:40 by zminhas          ###   ########.fr       */
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
	for (size_t i = 0; i < this->_arg.length(); i++)
	{
		if (!i && (this->_arg[i] == '+' || this->_arg[i] == '-'))
			i++;
		else if (!(this->_arg[i] >= '0' && this->_arg[i] <= '9'))
			return (false);
	}
	return (true);
}

bool	Cast::isFloat(void) const
{
	if (!this->_arg.compare("nanf") || !this->_arg.compare("+inff") || !this->_arg.compare("-inff"))
		return (true);
	if (this->_arg[this->_arg.length() - 1] != 'f')
		return (false);
	int	dot = 0;
	for (size_t i = 0; i < this->_arg.length(); i++)
	{
		if (!i && ((this->_arg[i] != '+' || this->_arg[i] != '-') && (this->_arg[i] < '0' && this->_arg[i] > '9')))
			return (false);
		if (i == this->_arg.length() - 1 && this->_arg[i] == 'f')
			return (true);
		else if (i && !(this->_arg[i] >= '0' && this->_arg[i] <= '9'))
		{
			if (this->_arg[i] == '.')
				dot++;
			else
				return (false);
			if (dot != 1)
				return (false);
		}
	}
	return (true);
}

bool	Cast::isDouble(void) const
{
	if (!this->_arg.compare("nan") || !this->_arg.compare("+inf") || !this->_arg.compare("-inf"))
		return (true);
	int	dot = 0;
	for (size_t i = 0; i < this->_arg.length(); i++)
	{
		if (!i && (this->_arg[i] != '+' || this->_arg[i] != '-') && (this->_arg[i] < '0' && this->_arg[i] > '9'))
			return (false);
		else if (i && !(this->_arg[i] >= '0' && this->_arg[i] <= '9'))
		{
			if (this->_arg[i] == '.')
				dot++;
			else
				return (false);
			if (dot != 1)
				return (false);
		}
	}
	return (true);
}

void	Cast::castChar(void) {
	if (this->_arg.length() == 1)
		this->_cast = static_cast<double>(this->_arg[0]);
	else
		this->_cast = static_cast<double>(this->_arg[1]);
	this->_char = static_cast<char>(this->_cast);
	this->_int = static_cast<int>(this->_cast);
	this->_float = static_cast<float>(this->_cast);
	this->_double = static_cast<double>(this->_cast);
}

void	Cast::castInt(void) {
	this->_cast = atof(this->_arg.c_str());
	this->_int = static_cast<int>(this->_cast);
	this->_char = static_cast<char>(this->_cast);
	this->_float = static_cast<float>(this->_cast);
	this->_double = static_cast<float>(this->_cast);
}

void	Cast::castFloat(void) {
	this->_cast = atof(this->_arg.c_str());
	this->_float = static_cast<float>(this->_cast);
	this->_int = static_cast<int>(this->_cast);
	this->_char = static_cast<char>(this->_cast);
	this->_double = static_cast<double>(this->_cast);
}

void	Cast::castDouble(void) {
	this->_cast = atof(this->_arg.c_str());
	this->_double = this->_cast;
	this->_int = static_cast<int>(this->_double);
	this->_float = static_cast<float>(this->_double);
	this->_char = static_cast<char>(this->_double);
}
