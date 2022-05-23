/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 05:01:16 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/23 16:59:45 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << "-----/ Test 1 /-----" << std::endl;

	try		/* Test 1 */
	{
		Span	sp(3);
		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(3);
		sp.addNumber(4);
		std::cout << "Nice." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "too much number" << std::endl;;
	}

	std::cout << std::endl << "-----/ Test 2 /-----" << std::endl;

	try
	{
		Span	sp(10);
		sp.addNumber(5);
		//sp.addNumber(10);
		std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "longest span : " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " : not enough number" << std::endl;
	}
	

	std::cout << std::endl << "-----/ Test 3 /-----" << std::endl;

	try		/* Test 3 */
	{
		Span	sp = Span(10);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		Span sp2(sp);
		std::cout << "shortest span : " << sp2.shortestSpan() << std::endl;
		std::cout << "longest span : " << sp2.longestSpan() << std::endl;
		std::cout << "Everything works well !" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Oups..." << std::endl;
	}

	std::cout << std::endl << "-----/ Test 4 /-----" << std::endl;

	/*{
		Span sp = Span(100);

		iter start	= sp.getLst().begin();
		iter end	= sp.getLst().end();
		sp.addNumber(start, end);
		try
		{
			for (unsigned long i = 0; i < sp.getLst().size(); i++)
			{
				std::cout << sp.getValue(i) << " | ";
			}
			std::cout << std::endl;
			std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
			std::cout << "longest span : " << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}*/
}
