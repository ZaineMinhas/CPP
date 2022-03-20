/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:25:53 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/20 16:41:07 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
private:
	Weapon		&_weapon;
	std::string	_name;

public:
	HumanA(std::string h_mane, Weapon &w_name);
	~HumanA();


	void		attack();
};


#endif