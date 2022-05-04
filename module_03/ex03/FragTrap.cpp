/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:37:46 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/04 16:11:34 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap Name constructor called" << std::endl << std::endl;
	this->_name = name;
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const &src) {
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	this->_name = rhs.getName();
	this->_hitpoints = rhs.getLp();
	this->_energy = rhs.getMana();
	this->_attack_damage = rhs.getDmg();
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	if (_hitpoints <= 0)
		std::cout << "ClapTrap " << _name << " is dead..." << std::endl;
	else
		std::cout << "ClapTrap " << _name << " ask for a High Five !" << std::endl;
	std::cout << std::endl;
}
