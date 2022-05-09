/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:29:19 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/09 16:28:42 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat Default constructor called" << std::endl << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const &src) {
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
}

Cat	&Cat::operator=(Cat const &rhs) {
	this->_type = rhs.getType();
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "Meow ..." << std::endl;
}

/*----------------------------------------------------------------------------*/

WrongCat::WrongCat() {
	std::cout << "WrongCat Default constructor called" << std::endl << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &src) {
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs) {
	this->_type = rhs.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const {
	std::cout << "Wrong Meow ..." << std::endl;
}
