/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:32:41 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/22 20:32:52 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _nb(0) {}

Fixed::Fixed(int const n) {
	this->_nb = n << _bits;
}

Fixed::Fixed(float const f) {
	this->_nb = roundf(f * (1 << _bits));
}

Fixed::Fixed(Fixed const  &src) {
	*this = src;
}

Fixed::~Fixed() {}

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

std::ostream &	operator<<(std::ostream &o, Fixed const &rhs) {
	o << rhs.toFloat();
	return (o);
}
