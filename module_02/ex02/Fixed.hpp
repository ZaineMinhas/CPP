/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:34:28 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/22 20:19:04 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
private:
	int					_nb;
	static int const	_bits = 8;

public:
	Fixed();
	Fixed(int const n);
	Fixed(float const f);
	Fixed(Fixed const  &src);
	~Fixed();

	int			toInt(void) const;
	float		toFloat(void) const;
	int			getRawBits(void) const;
	void		setRawBits(int const raw);

	Fixed		&operator=(Fixed const & rhs);

	bool		operator>(Fixed const & rhs) const;
	bool		operator<(Fixed const & rhs) const;
	bool		operator>=(Fixed const & rhs) const;
	bool		operator<=(Fixed const & rhs) const;
	bool		operator==(Fixed const & rhs) const;
	bool		operator!=(Fixed const & rhs) const;

	Fixed		operator+(Fixed const & rhs) const;
	Fixed		operator-(Fixed const & rhs) const;
	Fixed		operator*(Fixed const & rhs) const;
	Fixed		operator/(Fixed const & rhs) const;
	Fixed		operator++(int const);
	Fixed		&operator++(void);
	Fixed		operator--(int const);
	Fixed		&operator--(void);

	static Fixed	&min(Fixed &f0, Fixed &f1);
	static Fixed	&max(Fixed &f0, Fixed &f1);

	static Fixed const &min(Fixed const &f0, Fixed const &f1);
	static Fixed const &max(Fixed const &f0, Fixed const &f1);
};

std::ostream &	operator<<(std::ostream &o, Fixed const &rhs);

#endif
