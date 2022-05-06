/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:55:17 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/06 19:55:05 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	Dog	basic;
	std::cout << std::endl;
	{
		Dog	tmp = basic;
		std::cout << std::endl;
	}
	
	delete j;//should not create a leak
	delete i;

	return (0);
}