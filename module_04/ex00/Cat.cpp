/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:29:19 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/31 18:53:45 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat Default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat const &src) {
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
}

Cat	Cat::operator=(Cat const &rhs) {
	std::cout << "Cat Copy assignment operator called" << std::endl;
}

void	Cat::makeSound(void) {
	std::cout << "Miaou..." << std::endl;
}
