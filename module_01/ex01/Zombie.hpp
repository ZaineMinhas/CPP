/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:33:58 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/16 17:46:12 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();

		void	announce(void);
		void	set_name(std::string name);

	private:
		std::string	_name;

};

Zombie	*newZombie(std::string name);
Zombie	*zombieHorde( int N, std::string name );
void	randomChump(std::string name);

#endif
