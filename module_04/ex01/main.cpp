/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:55:17 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/09 14:09:44 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "------------------------" << std::endl << std::endl;
	{
		Dog	basic;
		std::cout << std::endl;
		{
			Dog	tmp = basic;
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}
	std::cout << std::endl << "------------------------" << std::endl << std::endl;
	
	delete j;
	std::cout << std::endl;
	delete i;

	return (0);
}