/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:44:35 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/19 16:31:12 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*zombi1;

	zombi1 = newZombie("martin");
	zombi1->announce();
	randomChump("leon");
	delete zombi1;
    return (0);
}