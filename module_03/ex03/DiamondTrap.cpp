/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 20:05:44 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/04 16:11:34 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("The Ultimate one_clap_name")
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	this->_name = "The Ultimate one";
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_attack_damage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap Name constructor called" << std::endl << std::endl;
	this->_name = name;
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_attack_damage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) {
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	this->ClapTrap::_name = rhs.ClapTrap::getName();
	this->_name = rhs.getName();
	this->_hitpoints = rhs.getLp();
	this->_energy = rhs.getMana();
	this->_attack_damage = rhs.getDmg();
	return (*this);
}

std::string DiamondTrap::getName(void) const {
	return (this->_name);
}

void	DiamondTrap::whoAmI(void)
{
	if (_hitpoints <= 0)
		std::cout << "This DiamondTrap " << _name << " died..." << std::endl;
	else
		std::cout << "His DiamondTrap name is " << _name << " and his ClapTrap name is " << this->ClapTrap::_name << std::endl;
	std::cout << std::endl;
}
