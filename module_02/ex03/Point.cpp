/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:40:52 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/23 15:45:59 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(float const f0, float const f1) : _x(f0), _y(f1) {}

Point::Point(Point const &src) {
	*this = src;
}

Point::~Point() {}

Point	&Point::operator=(Point const &rhs)
{
	this->_x = rhs.get_x();
	this->_y = rhs.get_y();
	return (*this);
}

Fixed	Point::get_x(void) const {
	return (this->_x);
}

Fixed	Point::get_y(void) const {
	return (this->_y);
}
