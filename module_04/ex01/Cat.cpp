/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:29:19 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/25 15:41:43 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	this->_brain = new Brain;
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(Cat const &src) {
	*this = src;
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << "Cat Destructor called" << std::endl;
}

Cat	&Cat::operator=(Cat const &rhs) {
	this->type = rhs.type;
	std::cout << "Cat Copy assignment operator called" << std::endl;
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "Meow ..." << std::endl;
}

/*----------------------------------------------------------------------------*/

WrongCat::WrongCat() {
	this->type = "WrongCat";
	std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) {
	*this = src;
	std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs) {
	this->type = rhs.type;
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	return (*this);
}

void	WrongCat::makeSound(void) const {
	std::cout << "Wrong Meow ..." << std::endl;
}
