/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:44:35 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/25 16:37:59 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*zombi1;
	Zombie	*zombi2;

	zombi1 = newZombie("martin");
	zombi1->announce();
	zombi2 = newZombie("antonin");
	zombi2->announce();

	randomChump("leon");

	delete zombi1;
	delete zombi2;
    return (0);
}