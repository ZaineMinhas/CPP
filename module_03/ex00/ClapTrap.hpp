/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:59:46 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/23 16:04:21 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
private:
	std::string	_name;
	int			_pv;
	int			_mana;
	int			_dmg;

public:
	ClapTrap();
	ClapTrap(ClapTrap const &src);
	~ClapTrap();

	ClapTrap	operator=(ClapTrap const &rhs);
};

#endif