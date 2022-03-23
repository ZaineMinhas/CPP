/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:41:01 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/23 15:44:16 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	Fixed	_x;
	Fixed	_y;
public:
	Point();
	Point(float const f0, float const f1);
	Point(Point const &src);
	~Point();

	Point	&operator=(Point const &rhs);

	Fixed	get_x(void) const;
	Fixed	get_y(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif