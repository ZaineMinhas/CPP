/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:20:27 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/09 16:30:03 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal() : _type("NONE") {
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
	this->_type = rhs.getType();
	return (*this);
}

std::string	AAnimal::getType(void) const {
	return (this->_type);
}

/*----------------------------------------------------------------------------*/

WrongAnimal::WrongAnimal() : _type("NONE") {
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
	this->_type = rhs.getType();
	return (*this);
}

std::string	WrongAnimal::getType(void) const {
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "Some wrong animal noise" << std::endl;
}
