/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 23:08:57 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/11 23:09:45 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void	display_int(int n)
{
	std::cout << n << std::endl;
}

int main()
{
	{
		std::list<int>	lst;
		lst.push_back(1);
		lst.push_back(42);
		lst.push_back(19);
		lst.push_back(-1);
		lst.push_back(0);
		try
		{
			std::cout << easyfind(lst, 19) << std::endl;
			std::cout << easyfind(lst, 4) << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::array<int, 5>	lst;
		
		lst[0] = 1;
		lst[1] = 42;
		lst[2] = 19;
		lst[3] = -1;
		lst[4] = 0;
		try
		{
			std::cout << easyfind(lst, 19) << std::endl;
			std::cout << easyfind(lst, 4) << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::vector<int>	lst;
		
		lst.push_back(1);
		lst.push_back(42);
		lst.push_back(19);
		lst.push_back(-1);
		lst.push_back(0);
		try
		{
			std::cout << easyfind(lst, 19) << std::endl;
			std::cout << easyfind(lst, 4) << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}
