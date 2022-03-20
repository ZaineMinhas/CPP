/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:37:21 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/20 16:42:14 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string h_name) : _name(h_name) {}

HumanB::~HumanB() {}

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->_weapon = &weapon;
}
