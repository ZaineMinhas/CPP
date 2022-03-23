/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:40:48 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/23 18:53:08 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	Point	a(-1, 2);
	Point	b(-1, -1);
	Point	c(2, 2);
	Point	p(0.5, 0.6);

	if (bsp(a, b, c, p))
		std::cout << "OUI" << std::endl;
	else
		std::cout << "NON" << std::endl;
	return (0);
}
