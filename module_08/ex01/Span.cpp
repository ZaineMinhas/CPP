/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 23:52:50 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/12 05:20:00 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0) {}

Span::Span(const unsigned int N) : _size(N) {}

//Span::Span(const Span &src) {}

Span::~Span() {}

// Span	&Span::operator=(const Span &rhs) 
// {	
// 	return (*this);
// }

int		&Span::operator[](const unsigned int index) const { return (this->get(index)); } // a continuer !

std::list<int>	Span::getLst(void) const { return (this->_lst); }

int	Span::get(unsigned int index) const
{
	if (index >= this->_lst.size())
		throw (std::out_of_range("index out of range"));
	std::list<int>	tmp = this->_lst;
	std::list<int>::iterator	it = tmp.begin();
	for (unsigned int i = 0; i < index; i++)
		it++;
	return (*it);
}

void	Span::addNumber(int nb)
{
	static int added;

	if (added >= this->_size)
		throw (std::exception());
	this->_lst.push_back(nb);
	added++;
}

int		Span::shortestSpan(void) const
{
	if (this->_lst.size() < 2)
		throw (std::exception());
	std::list<int>	tmp = this->_lst;
	tmp.sort();
	std::list<int>::iterator it1 = tmp.begin();
	std::list<int>::iterator it2 = tmp.begin();
	it2++;
	int	compare = longestSpan();
	for (int i = 0; i < this->_size; i++)
	{
		if (*it2 - *it1 < compare)
			compare = *it2 - *it1;
		it1++;
		it2++;
	}
	return (compare);
}

int		Span::longestSpan(void) const
{
	if (this->_lst.size() < 2)
		throw (std::exception());
	std::list<int>	tmp = this->_lst;
	tmp.sort();
	return (*tmp.end() - *tmp.begin());
}
