/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:34:47 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/25 16:35:59 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde;
	const int	N = 10;

	horde = zombieHorde(N, "leon");
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}
