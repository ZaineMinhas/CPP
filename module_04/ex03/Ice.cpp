/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:28:20 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/09 17:09:28 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice &src) : AMateria(src) {}

Ice::~Ice() {}

Ice	&Ice::operator=(const Ice &rhs) {
	this->_type = rhs.getType();
	return (*this);
}

AMateria* Ice::clone() const {
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
