/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:35:21 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/19 17:36:57 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
	Zombie	*zombi = new Zombie[N];

	for (int i = 0; i < N; i++)
		zombi[i].set_name(name);
	return (zombi);
}
