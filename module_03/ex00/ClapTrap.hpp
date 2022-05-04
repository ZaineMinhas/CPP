/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:59:46 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/04 16:11:34 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
private:
	std::string	_name;
	int			_hitpoints;
	int			_energy;
	int			_attack_damage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src);
	~ClapTrap();
	ClapTrap	&operator=(ClapTrap const &rhs);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string	getName(void) const;
	int			getLp(void) const;
	int			getMana(void) const;
	int			getDmg(void) const;
};

#endif