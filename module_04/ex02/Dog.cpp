/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:35:39 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/06 19:56:52 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	this->_brain = new Brain;
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(Dog const &src) {
	*this = src;
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << "Dog Destructor called" << std::endl;
}

Dog	&Dog::operator=(Dog const &rhs) {
	this->type = rhs.type;
	this->_brain = new Brain(rhs.getBrain());
	std::cout << "Dog Copy assignment operator called" << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "bark bark !!!" << std::endl;
}

Brain	Dog::getBrain(void) const {
	return (*this->_brain);
}
