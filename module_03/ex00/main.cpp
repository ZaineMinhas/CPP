/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:53:25 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/23 17:10:37 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap bob("bob");

	bob.attack("Martin");
	bob.takeDamage(10);
	bob.beRepaired(1);
	ClapTrap	phil(bob);
	phil.beRepaired(10);
	ClapTrap	martin;
	martin.attack("Leon");
	bob = martin;
	bob.beRepaired(10);
    return (0);
}
