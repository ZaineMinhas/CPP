/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 05:01:16 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/12 23:33:56 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	{
		Span sp = Span(5);
	
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		Span sp2(sp);

		try
		{
			std::cout << "shortest span : " << sp2.shortestSpan() << std::endl;
			std::cout << "longest span : " << sp2.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "-------------------" << std::endl;
	{
		Span sp = Span(10000);

		for (int i = 0; i < 10000; i++)
			sp.addNumber(i);
		try
		{
			std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
			std::cout << "longest span : " << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}
