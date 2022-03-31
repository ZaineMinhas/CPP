/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:26:50 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/31 18:08:46 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->_lp = 100;
	this->_mana = 50;
	this->_dmg = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap Name constructor called" << std::endl << std::endl;
	this->_name = name;
	this->_lp = 100;
	this->_mana = 50;
	this->_dmg = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src) {
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap	ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	this->_name = rhs.getName();
	this->_lp = rhs.getLp();
	this->_mana = rhs.getMana();
	this->_dmg = rhs.getDmg();
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	if (_lp <= 0)
		std::cout << "ClapTrap " << _name << " is dead..." << std::endl;
	else
		std::cout << "ClapTrap " << _name << " is now in Gate Keeper mode." << std::endl;
	std::cout << std::endl;
}
