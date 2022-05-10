/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 01:29:20 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/10 02:13:48 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
	int	int_a = 10, int_b = 20;
	float	float_a = 5.5f, float_b = 5.5f;
	double	double_a = 5, double_b = 5.1;
	
	std::cout << "int : a = " << int_a << ", b = " << int_b << std::endl;
	swap<int>(int_a, int_b);
	std::cout << "swap : a = " << int_a << ", b = " << int_b << std::endl;
	std::cout << "int : a = " << int_a << ", b = " << int_b << std::endl;

	std::cout << "float : a = " << float_a << ", b = " << float_b << std::endl;
	std::cout << "float min = " << min<float>(float_a, float_b) << std::endl;

	std::cout << "double : a = " << double_a << ", b = " << double_b << std::endl;
	std::cout << "double max = " << max<double>(double_a, double_b) << std::endl << std::endl;

	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;

	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return (0);
}
