/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:27:57 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/08 19:48:31 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("NONE") {}

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::AMateria(const AMateria &src) {
	*this = src;
}

AMateria::~AMateria() {}

AMateria	&AMateria::operator=(const AMateria &rhs) {
	this->_type = rhs.getType();
	return (*this);
}

std::string const	&AMateria::getType() const {
	return (this->_type);
}

void	AMateria::use(ICharacter& target) {
	if (this->_type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->_type == "cure")
		std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
	else
		std::cout << "Error" << std::endl;
}

/*---------------------------------------------------------------------------------------*/

MateriaSource::MateriaSource(void) {
	for (int i = 0; i < 4; i++)
		this->_item[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src) {
	*this = src;
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < 4; i++)
		if (this->_item[i])
			delete this->_item[i];
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs) {
	this->~MateriaSource();
	for (int i = 0; i < 4; i++)
	{
		this->_item[i] = NULL;
		if (rhs.getItem(i))
			this->_item[i] = rhs.getItem(i)->clone();
	}
	return (*this);
}

const AMateria	*MateriaSource::getItem(const int id) const {
	if (id > 3 || id < 0)
		return (NULL);
	return (this->_item[id]);
}

void	MateriaSource::learnMateria(AMateria *materia) {
	for (int i = 0; i < 4; i++)
		if (!this->_item[i])
			this->_item[i] = materia;
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++)
		if (this->_item[i] && this->_item[i]->getType() == type)
			return (this->_item[i]->clone());
	return (NULL);
}
