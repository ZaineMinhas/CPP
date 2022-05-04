/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:03:55 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/04 16:24:30 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("the true one"), _hitpoints(10), _energy(10), _attack_damage(0) {}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy(10), _attack_damage(0) {
	std::cout << "Default constructor called" << std::endl << std::endl;
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
	this->_hitpoints = rhs.getLp();
	this->_energy = rhs.getMana();
	this->_attack_damage = rhs.getDmg();
	return (*this);
}

std::string	ClapTrap::getName(void) const {
	return (this->_name);
}

int		   	ClapTrap::getLp(void) const {
	return (this->_hitpoints);
}

int		   	ClapTrap::getMana(void) const {
	return (this->_energy);
}

int		   	ClapTrap::getDmg(void) const {
	return (this->_attack_damage);
}

void	ClapTrap::attack(const std::string &target)
{
	if (_energy == 0)
		std::cout << "ClapTrap " << _name << " have no energy !" << std::endl;
	else if (_hitpoints <= 0)
		std::cout << "ClapTrap " << _name << " is dead..." << std::endl;
	else
	{
		std::cout << "Claptrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage !" << std::endl;
		this->_energy--;
	}
	std::cout << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " take " << amount << " points of damage !" << std::endl;
	this->_hitpoints -= amount;
	if (_hitpoints <= 0)
		std::cout << "Claptrap " << _name << " died." << std::endl;
	else
		std::cout << _hitpoints << " life point left" << std::endl;
	std::cout << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy == 0)
		std::cout << "ClapTrap " << _name << " have no energy !" << std::endl;
	else if (_hitpoints <= 0)
		std::cout << "ClapTrap " << _name << " is dead..." << std::endl;
	else
	{
		std::cout << "Claptrap " << _name << " repaired " << amount << " life points" << std::endl;
		this->_hitpoints += amount;
		std::cout << "He has " << _hitpoints << " life point now" << std::endl;
		this->_energy--;
	}
	std::cout << std::endl;
}
