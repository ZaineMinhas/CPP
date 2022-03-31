/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:20:27 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/31 18:39:23 by zminhas          ###   ########.fr       */
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

Animal	Animal::operator=(Animal const &rhs) {
	std::cout << "Animal Copy assignment operator called" << std::endl;
}
