/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 19:14:38 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/05 17:45:17 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base	*generate(void)
{
	int	nb = rand() % 3;

	if (!nb)
		return (new A);
	else if (nb == 1)
		return (new B);
	else
		return (new C);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknow class" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		static_cast<void>(a);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
		static_cast<void>(e);
		try
		{
			B& b = dynamic_cast<B&>(p);
			static_cast<void>(b);
			std::cout << "B" << std::endl;
		}
		catch(const std::exception& e)
		{
			static_cast<void>(e);
			try
			{
				C& c = dynamic_cast<C&>(p);
				static_cast<void>(c);
				std::cout << "C" << std::endl;
			}
			catch(const std::exception& e)
			{
				static_cast<void>(e);
				std::cout << "Unknow class" << std::endl;
			}
			
		}
	}
}

int		main(void)
{
	Base	*base1 = generate();
	Base	*base2 = generate();
	Base	*base3 = generate();
	Base	*base4 = generate();
	Base	*base5 = generate();
	Base	*base6 = generate();
	Base	*base7 = generate();

	std::cout << std::endl << "-__Base 1__-" << std::endl;
	identify(base1);
	identify(*base1);
	std::cout << std::endl << "-__Base 2__-" << std::endl;
	identify(base2);
	identify(*base2);
	std::cout << std::endl << "-__Base 3__-" << std::endl;
	identify(base3);
	identify(*base3);
	std::cout << std::endl << "-__Base 4__-" << std::endl;
	identify(base4);
	identify(*base4);
	std::cout << std::endl << "-__Base 5__-" << std::endl;
	identify(base5);
	identify(*base5);
	std::cout << std::endl << "-__Base 6__-" << std::endl;
	identify(base6);
	identify(*base6);
	std::cout << std::endl << "-__Base 7__-" << std::endl;
	identify(base7);
	identify(*base7);

	return (0);
}
