/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:50:44 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/19 16:09:18 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *newZombie(std::string name)
{
	Zombie *zombi;

	zombi = new Zombie;
	zombi->set_name(name);
	return (zombi);
}
