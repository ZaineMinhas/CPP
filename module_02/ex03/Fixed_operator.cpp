/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_operator.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:32:18 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/22 20:32:29 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed	&Fixed::operator=(Fixed const & rhs)
{
	if (this != &rhs)
		this->_nb = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator>(Fixed const & rhs) const
{
	if (this->_nb > rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	if (this->_nb < rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	if (this->_nb >= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	if (this->_nb <= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	if (this->_nb == rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	if (this->_nb != rhs.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(Fixed const & rhs) const {
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const & rhs) const {
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const & rhs) const {
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const & rhs) const {
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed	Fixed::operator++(int const)
{
	Fixed	tmp(*this);
	this->_nb++;
	return (tmp);
}

Fixed	&Fixed::operator++(void)
{
	this->_nb++;
	return (*this);
}

Fixed	Fixed::operator--(int const)
{
	Fixed	tmp(*this);
	this->_nb--;
	return (tmp);
}

Fixed	&Fixed::operator--(void)
{
	this->_nb--;
	return (*this);
}

Fixed	&Fixed::min(Fixed &f0, Fixed &f1)
{
	if (f0.getRawBits() < f1.getRawBits())
		return (f0);
	return (f1);
}

Fixed	&Fixed::max(Fixed &f0, Fixed &f1)
{
	if (f0.getRawBits() < f1.getRawBits())
		return (f1);
	return (f0);
}

Fixed const &Fixed::min(Fixed const &f0, Fixed const &f1)
{
	if (f0.getRawBits() < f1.getRawBits())
		return (f0);
	return (f1);
}
Fixed const &Fixed::max(Fixed const &f0, Fixed const &f1)
{
	if (f0.getRawBits() < f1.getRawBits())
		return (f1);
	return (f0);
}
