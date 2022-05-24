/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 23:08:57 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/24 16:54:37 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void	display_int(int n)
{
	std::cout << n << std::endl;
}

int main()
{
	std::cout << "TEST 1" << std::endl;
	{
		std::list<int>	lst;
		lst.push_back(1);
		lst.push_back(42);
		lst.push_back(19);
		lst.push_back(-1);
		lst.push_back(0);
		try
		{
			std::cout << *easyfind(lst, 19) << std::endl;
			std::cout << *easyfind(lst, 4) << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "not finded" << std::endl;
		}
	}
	std::cout << std::endl << "TEST 2" << std::endl;
	{
		std::array<int, 5>	lst;
		
		lst[0] = 1;
		lst[1] = 42;
		lst[2] = 19;
		lst[3] = -1;
		lst[4] = 0;
		try
		{
			std::cout << *easyfind(lst, 19) << std::endl;
			std::cout << *easyfind(lst, 4) << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "not finded" << std::endl;
		}
	}
	std::cout << std::endl <<  "TEST 3" << std::endl;
	{
		std::vector<char>	lst;
		
		lst.push_back('a');
		lst.push_back('b');
		lst.push_back('c');
		lst.push_back('d');
		lst.push_back('e');
		try
		{
			std::cout << *easyfind(lst, 'c') << std::endl;
			std::cout << *easyfind(lst, 'z') << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "not finded" << std::endl;
		}
	}
	std::cout << std::endl <<  "TEST 4" << std::endl;
	{
		std::vector<int>	lst;
		try
		{
			std::cout << *easyfind(lst, 3) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "empty container" << std::endl;
		}
	}
}
