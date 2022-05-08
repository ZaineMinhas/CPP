/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:28:27 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/08 19:48:49 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

Character::Character() : _name("NONE") {
	for (int i = 0; i < 4; i++)
		this->_item[i] = NULL;
}

Character::Character(const std::string name) : _name(name) {
	for (int i = 0; i < 4; i++)
		this->_item[i] = NULL;
}

Character::Character(const Character &src) {
	*this = src;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		if (this->_item[i])
			delete this->_item[i];
}

Character	&Character::operator=(const Character &rhs) {
	this->~Character();
	this->_name = rhs.getName();
	for (int i = 0; i < 4; i++)
	{
		this->_item[i] = NULL;
		if (rhs.getItem(i))
			this->_item[i] = rhs.getItem(i)->clone();
	}
	return (*this);
}

const std::string	&Character::getName(void) const {
	return (this->_name);
}

const AMateria		*Character::getItem(const int id) const {
	if (id > 3 || id < 0)
		return (NULL);
	return (this->_item[id]);
}

void	Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++)
		if (!this->_item[i])
		{
			this->_item[i] = m;
			return ;
		}
}

void	Character::unequip(int idx) {
	if (!this->_item[idx] || !(idx > 3 && idx < 0))
		return ;
	this->_item[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target) {
	if (!this->_item[idx] || (idx > 3 && idx < 0))
		return ;
	this->_item[idx]->use(target);
}
