/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:35:39 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/09 16:29:46 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->_type = "Dog";
	this->_brain = new Brain;
	std::cout << "Dog Default constructor called" << std::endl << std::endl;
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
	this->_type = rhs.getType();
	this->_brain = new Brain(rhs.getBrain());
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "bark bark !!!" << std::endl;
}

Brain	Dog::getBrain(void) const {
	return (*this->_brain);
}
