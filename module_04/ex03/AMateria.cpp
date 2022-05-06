/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:27:57 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/06 19:27:58 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(const AMateria &src) {
	*this = src;
}

AMateria::~AMateria() {}

AMateria	&AMateria::operator=(const AMateria &rhs) {
	
	return (*this);
}

std::string const	&AMateria::getType() const {
	return (this->_type);
}
