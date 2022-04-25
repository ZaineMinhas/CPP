/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:20:27 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/25 15:42:37 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal() : type("NONE") {
	std::cout << "AAnimal Default constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &src) {
	std::cout << "AAnimal Copy constructor called" << std::endl;
	*this = src;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal Destructor called" << std::endl;
}

AAnimal	&AAnimal::operator=(AAnimal const &rhs) {
	this->type = rhs.type;
	std::cout << "AAnimal Copy assignment operator called" << std::endl;
	return (*this);
}

std::string	AAnimal::getType(void) const {
	return (this->type);
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
