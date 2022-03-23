/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:03:55 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/23 17:11:31 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("the true one"), _lp(1000), _mana(1000), _dmg(10000) {}

ClapTrap::ClapTrap(std::string name) : _name(name), _lp(10), _mana(10), _dmg(0) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = rhs.getName();
	this->_lp = rhs.getLp();
	this->_mana = rhs.getMana();
	this->_dmg = rhs.getDmg();
	return (*this);
}

std::string	ClapTrap::getName(void) const {
	return (this->_name);
}

int		   	ClapTrap::getLp(void) const {
	return (this->_lp);
}

int		   	ClapTrap::getMana(void) const {
	return (this->_mana);
}

int		   	ClapTrap::getDmg(void) const {
	return (this->_dmg);
}

void	ClapTrap::attack(const std::string &target)
{
	if (_mana == 0)
		std::cout << "ClapTrap " << _name << " have no energy !" << std::endl;
	else if (_lp <= 0)
		std::cout << "ClapTrap " << _name << " is dead..." << std::endl;
	else
	{
		std::cout << "Claptrap " << _name << " attacks " << target << ", causing " << _dmg << " points of damage !" << std::endl;
		this->_mana--;
	}
	std::cout << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " take " << amount << " points od damage !" << std::endl;
	this->_lp -= amount;
	if (_lp <= 0)
		std::cout << "Claptrap " << _name << " died." << std::endl;
	else
		std::cout << _lp << " life point left" << std::endl;
	std::cout << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_mana == 0)
		std::cout << "ClapTrap " << _name << " have no energy !" << std::endl;
	else if (_lp <= 0)
		std::cout << "ClapTrap " << _name << " is dead..." << std::endl;
	else
	{
		std::cout << "Claptrap " << _name << " repaired " << amount << " life points" << std::endl;
		this->_lp += amount;
		std::cout << "He has " << _lp << " life point now" << std::endl;
		this->_mana--;
	}
	std::cout << std::endl;
}
