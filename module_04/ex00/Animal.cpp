/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:20:27 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/25 15:40:06 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("NONE") {
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(Animal const &src) {
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal() {
	std::cout << "Animal Destructor called" << std::endl;
}

Animal	&Animal::operator=(Animal const &rhs) {
	this->type = rhs.type;
	std::cout << "Animal Copy assignment operator called" << std::endl;
	return (*this);
}

std::string	Animal::getType(void) const {
	return (this->type);
}

void	Animal::makeSound(void) const {
	std::cout << "Some animal noise" << std::endl;
}

/*----------------------------------------------------------------------------*/

WrongAnimal::WrongAnimal() : type("NONE") {
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs) {
	this->type = rhs.type;
	std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
	return (*this);
}

std::string	WrongAnimal::getType(void) const {
	return (this->type);
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "Some wrong animal noise" << std::endl;
}
