/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:40:52 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/23 18:52:08 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(Fixed(0)), _y(Fixed(0)) {}

Point::Point(float const f0, float const f1) : _x(Fixed(f0)), _y(Fixed(f1)) {}

Point::Point(Point const &src) : _x(src.get_x().toFloat()), _y(src.get_y().toFloat()) {}

Point::~Point() {}

Point	&Point::operator=(Point const &rhs)
{
	(void)rhs;
	return (*this);
}

Point	Point::operator-(Point const &rhs) const {
	Point tmp(this->_x.toFloat() - rhs.get_x().toFloat(), this->_y.toFloat() - rhs.get_y().toFloat());
	return (tmp);
}

Fixed	const &Point::get_x(void) const {
	return (this->_x);
}

Fixed	const &Point::get_y(void) const {
	return (this->_y);
}
