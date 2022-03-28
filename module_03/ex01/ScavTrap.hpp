/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:24:43 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/28 15:30:27 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap
{
private:
	std::string	_name;
	int			_lp;
	int			_mana;
	int			_dmg;

public:
    ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &src);
    ~ScavTrap();
};

#endif