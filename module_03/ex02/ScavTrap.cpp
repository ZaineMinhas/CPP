/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:26:50 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/05 15:38:57 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap Name constructor called" << std::endl << std::endl;
	this->_name = name;
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src) {
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	this->_name = rhs.getName();
	this->_hitpoints = rhs.getLp();
	this->_energy = rhs.getMana();
	this->_attack_damage = rhs.getDmg();
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	if (_hitpoints <= 0)
		std::cout << "ClapTrap " << _name << " is dead..." << std::endl;
	else
		std::cout << "ClapTrap " << _name << " is now in Gate Keeper mode." << std::endl;
	std::cout << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energy == 0)
		std::cout << "ScavTrap " << _name << " have no energy !" << std::endl;
	else if (_hitpoints <= 0)
		std::cout << "ScavTrap " << _name << " is dead..." << std::endl;
	else
	{
		std::cout << "Scavtrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage !" << std::endl;
		this->_energy--;
	}
	std::cout << std::endl;
}
