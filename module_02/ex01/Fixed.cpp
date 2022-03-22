/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:43:18 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/22 19:30:13 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _nb(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n) {
	std::cout << "Int constructor called" << std::endl;
	this->_nb = n << _bits;
}

Fixed::Fixed(float const f) {
	std::cout << "Float constructor called" << std::endl;
	this->_nb = roundf(f * (1 << _bits));
}

Fixed::Fixed(Fixed const  &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const {
	return (this->_nb);
}

void	Fixed::setRawBits(int const raw) {
	this->_nb = raw;
}

int		Fixed::toInt(void) const {
	return (_nb >> _bits);
}

float	Fixed::toFloat(void) const {
	return ((float)_nb / (1 << _bits));
}

Fixed &	 Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_nb = rhs.getRawBits();
	return (*this);
}

std::ostream &	operator<<(std::ostream &o, Fixed const &rhs) {
	o << rhs.toFloat();
	return (o);
}
