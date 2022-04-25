/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:26:57 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/25 17:28:37 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
    Weapon		*_weapon;
    std::string _name;

public:
    HumanB(std::string h_name);
    ~HumanB();


	void	attack(void);
	void	setWeapon(Weapon &weapon);
};

#endif