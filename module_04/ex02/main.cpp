/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:55:17 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/18 16:12:11 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	const WrongAnimal* k = new WrongCat();

	std::cout << std::endl;

	std::cout << "type : " << j->getType() << std::endl;
	j->makeSound();
	std::cout << "type : " << i->getType() << std::endl;
	i->makeSound();
	std::cout << "type : " << k->getType() << std::endl;
	k->makeSound();

	std::cout << std::endl;

	delete j;
	delete i;
	delete k;
	return (0);
}