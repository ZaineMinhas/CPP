/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 23:52:50 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/12 01:03:19 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _array(new int[0]) {}

Span::Span(const unsigned int N) : _array(new int[N]) {}

Span::Span(const Span &src) {
	*this = src;
}

Span::~Span() { delete this->_array; }

Span	&Span::operator=(const Span &rhs) {
	
	return (*this);
}
