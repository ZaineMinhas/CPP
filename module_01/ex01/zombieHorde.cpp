/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:35:21 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/22 16:41:21 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
	if (N < 1)
	{
		std::cout << "silence . . ." << std::endl;
		return (NULL);
	}

	Zombie	*zombi = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombi[i].set_name(name);
		zombi[i].announce();
	}
	return (zombi);
}
