/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:53:25 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/31 17:16:05 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	//ClapTrap bob("bob");

	/*bob.attack("Martin");
	bob.takeDamage(10);
	bob.beRepaired(1);*/

	/*ScavTrap	leon("Leon");
	leon.attack("Martin");
	leon.takeDamage(99);
	leon.beRepaired(98);
	leon.guardGate();*/

	/*FragTrap	filip("Filip");
	filip.takeDamage(99);
	filip.beRepaired(98);
	filip.highFivesGuys();*/

	DiamondTrap antonin("antonin");
	antonin.attack("martin");
	antonin.beRepaired(100);
	antonin.guardGate();
	antonin.highFivesGuys();
	antonin.whoAmI();
	return (0);
}
