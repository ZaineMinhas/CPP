/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:29:19 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/09 16:30:10 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	this->_type = "Cat";
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
	this->_type = rhs.getType();
	this->_brain = new Brain(rhs.getBrain());
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "Meow ..." << std::endl;
}

Brain	Cat::getBrain(void) const {
	return (*this->_brain);
}

/*----------------------------------------------------------------------------*/

WrongCat::WrongCat() {
	this->_type = "WrongCat";
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
	this->_type = rhs.getType();
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	return (*this);
}

void	WrongCat::makeSound(void) const {
	std::cout << "Wrong Meow ..." << std::endl;
}
