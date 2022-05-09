/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:55:17 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/09 13:49:21 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	std::cout << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();
	const WrongCat* l = new WrongCat();

	std::cout << "---------------------------" << std::endl << std::endl;

	std::cout << "type : " << meta->getType() << std::endl;
	meta->makeSound();
	std::cout << "type : " << j->getType() << std::endl;
	j->makeSound();
	std::cout << "type : " << i->getType() << std::endl;
	i->makeSound();
	std::cout << "type : " << k->getType() << std::endl;
	k->makeSound();
	std::cout << "type : " << l->getType() << std::endl;
	l->makeSound();

	std::cout << std::endl << "---------------------------" << std::endl << std::endl;

	delete meta;
	std::cout << std::endl;
	delete j;
	std::cout << std::endl;
	delete i;
	std::cout << std::endl;
	delete k;
	std::cout << std::endl;
	delete l;
	return (0);
}