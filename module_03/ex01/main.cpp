/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:53:25 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/28 19:29:23 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	//ClapTrap bob("bob");

	/*bob.attack("Martin");
	bob.takeDamage(10);
	bob.beRepaired(1);*/
	ScavTrap	leon("Leon");
	leon.attack("Martin");
	leon.takeDamage(99);
	leon.beRepaired(98);
	leon.guardGate();
	return (0);
}
