/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:28:09 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/06 19:28:10 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {}

Cure::Cure(const Cure &src) {
	*this = src;
}

Cure::~Cure() {}

Cure	&Cure::operator=(const Cure &rhs) {
	
	return (*this);
}
