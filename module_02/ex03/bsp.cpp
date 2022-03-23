/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:40:41 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/23 18:51:24 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	getSide(Point const a, Point const b, Point const point){
	Fixed	ret;

	ret = (point - b).get_x() * (a - b).get_y() - (a - b).get_x() * (point - b).get_y();
	return (ret.toFloat());
}

bool	bsp(Point const a, Point const b, Point const c, Point const point){
	bool	pos, neg;
	float	b1 = getSide(a, b, point);
	float	b2 = getSide(c, a, point);
	float	b3 = getSide(b, c, point);
	
	pos = ((b1 >= 0) || (b2 >= 0) || b3 >= 0);
	neg = ((b1 <= 0) || (b2 <= 0) || b3 <= 0);
	return (!(neg && pos));
}
