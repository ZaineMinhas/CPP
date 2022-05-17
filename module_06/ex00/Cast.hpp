/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 18:13:18 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/17 19:41:12 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_HPP
# define CAST_HPP

# include <iostream>
# include <stdlib.h>

class Cast
{
private:
	std::string	_arg;
	char		_char;
	int			_int;
	float		_float;
	double		_double;
	double		_cast;
	
public:
	Cast(void);
	Cast(const std::string arg);
	Cast(const Cast &src);
	~Cast(void);

	Cast	&operator=(const Cast &rhs);

	std::string	getArg(void) const;
	char		getChar(void) const;
	int			getInt(void) const;
	float		getFloat(void) const;
	double		getDouble(void) const;

	bool	isChar(void) const;
	bool	isInt(void) const;
	bool	isFloat(void) const;
	bool	isDouble(void) const;

	void	castChar(void);
	void	castOther(void);
};

#endif
