/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 23:52:50 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/12 23:36:01 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0), _added(0) {}

Span::Span(const unsigned int N) : _size(N), _added(0) {}

Span::Span(const Span &src) { *this = src; }

Span::~Span() { this->_lst.erase(this->_lst.begin(), this->_lst.end()); }

Span	&Span::operator=(const Span &rhs) 
{
	std::list<int>::iterator	it = this->_lst.begin();
	while (it++ != this->_lst.end())
		this->_lst.pop_back();
	this->_added = rhs.getAdded();
	this->_size = rhs.getSize();
	for (int i = 0; i < this->_added; i++)
		this->_lst.push_back(rhs.getValue(i));
	return (*this);
}

std::list<int>	Span::getLst(void) const { return (this->_lst); }

int	Span::getValue(unsigned int index) const
{
	if (index >= this->_lst.size())
		throw (std::out_of_range("index out of range"));
	std::list<int>	tmp = this->_lst;
	std::list<int>::iterator	it = tmp.begin();
	for (unsigned int i = 0; i < index; i++)
		it++;
	return (*it);
}

int	Span::getSize(void) const { return (this->_size); }

int	Span::getAdded(void) const { return (this->_added); }

void	Span::addNumber(int nb)
{
	if (this->_added >= this->_size)
		throw (std::exception());
	this->_lst.push_back(nb);
	this->_added++;
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
	for (int i = 0; i < this->_size - 1; i++)
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
	std::list<int>::iterator	it = tmp.begin();
	int	biggest;
	int	smalest;
	for (int i = 0; i < this->_size; i++)
	{
		if (!i)
			smalest = *it;
		else if (i == this->_size - 1)
			biggest = *it;
		it++;
	}
	return (biggest - smalest);
}
