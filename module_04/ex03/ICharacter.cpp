/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:28:27 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/06 19:28:28 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter() {}

ICharacter::ICharacter(const ICharacter &src) {
	*this = src;
}

ICharacter::~ICharacter() {}

ICharacter	&ICharacter::operator=(const ICharacter &rhs) {
	
	return (*this);
}
