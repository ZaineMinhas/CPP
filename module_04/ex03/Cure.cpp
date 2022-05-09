/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:28:09 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/09 17:10:43 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &src) : AMateria(src) {}

Cure::~Cure() {}

Cure	&Cure::operator=(const Cure &rhs) {
	this->_type = rhs.getType();
	return (*this);
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}
