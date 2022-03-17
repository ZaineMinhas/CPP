/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class2.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:21:08 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/17 17:21:29 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

void	PhoneBook::add_contact(void)
{
	
	this->nb_add++;
	if (nb_add > 8)
		this->nb_add = 7;
	
}

void	PhoneBook::search_contact(void)
{
	
}
