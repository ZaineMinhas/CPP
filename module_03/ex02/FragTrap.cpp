/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:37:46 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/28 19:56:15 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default constructor called" << std::endl;
    this->_name = "the one";
    this->_lp = 100;
    this->_mana = 100;
    this->_dmg = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap Name constructor called" << std::endl << std::endl;
	this->_name = name;
	this->_lp = 100;
	this->_mana = 100;
	this->_dmg = 30;
}

FragTrap::FragTrap(FragTrap const &src) {
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = src;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap	FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	this->_name = rhs.getName();
	this->_lp = rhs.getLp();
	this->_mana = rhs.getMana();
	this->_dmg = rhs.getDmg();
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
    if (_lp <= 0)
		std::cout << "ClapTrap " << _name << " is dead..." << std::endl;
    else
        std::cout << "ClapTrap " << _name << " ask for a High Five !" << std::endl;
    std::cout << std::endl;
}
