/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:55:17 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/16 17:30:09 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;

	std::cout << "type : " << j->getType() << std::endl;
	j->makeSound();
	std::cout << "type : " << i->getType() << std::endl;
	i->makeSound();
	std::cout << "type : " << meta->getType() << std::endl;
    meta->makeSound();

	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	return (0);
}