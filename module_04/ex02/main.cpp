/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:55:17 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/09 16:38:20 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	const AAnimal* j = new Dog();
	std::cout << std::endl;
	const AAnimal* i = new Cat();
	std::cout << std::endl;
	const WrongAnimal* k = new WrongCat();
	std::cout << std::endl;
	const WrongCat* l = new WrongCat();
	//const AAnimal* n = new AAnimal();

	std::cout << std::endl << "---------------------------" << std::endl << std::endl;

	std::cout << "type : " << j->getType() << std::endl;
	j->makeSound();
	std::cout << "type : " << i->getType() << std::endl;
	i->makeSound();
	std::cout << "type : " << k->getType() << std::endl;
	k->makeSound();
	std::cout << "type : " << l->getType() << std::endl;
	l->makeSound();

	std::cout << std::endl << "---------------------------" << std::endl << std::endl;

	delete j;
	std::cout << std::endl;
	delete i;
	std::cout << std::endl;
	delete k;
	std::cout << std::endl;
	delete l;
	return (0);
}