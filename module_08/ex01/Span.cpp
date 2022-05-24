/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 23:52:50 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/24 16:32:20 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(const unsigned int N) : _size(N) { this->_lst = new std::list<int>; }

Span::Span(const Span &src)
{
	this->_lst = new std::list<int>;
	this->_size = src.getSize();
	for (unsigned long i = 0; i < src.getLst()->size(); i++)
		this->_lst->push_back(src.getValue(i));
}

Span::~Span() { delete this->_lst; }

Span	&Span::operator=(const Span &rhs) 
{
	delete this->_lst;
	this->_lst = new std::list<int>;
	this->_size = rhs.getSize();
	for (unsigned long i = 0; i < rhs.getLst()->size(); i++)
		this->_lst->push_back(rhs.getValue(i));
	return (*this);
}

std::list<int>	*Span::getLst(void) const { return (this->_lst); }

int	Span::getValue(unsigned int index) const
{
	if (index >= this->_lst->size())
		throw (std::out_of_range("index out of range"));
	std::list<int>	*tmp(this->_lst);
	iter	it = tmp->begin();
	for (unsigned int i = 0; i < index; i++)
		it++;
	return (*it);
}

int	Span::getSize(void) const { return (this->_size); }

void	Span::addNumber(int nb)
{
	if (this->_lst->size() >= this->_size)
		throw (std::exception());
	this->_lst->push_back(nb);
}

void	Span::addNumber(iter start, iter end)
{
	srand(time(NULL));
	while (start++ != end)
		addNumber(rand());
}

int		Span::shortestSpan(void) const
{
	if (this->_lst->size() < 2)
		throw (std::exception());
	std::list<int>	*tmp(this->_lst);
	tmp->sort();
	iter	it1 = tmp->begin();
	iter	it2 = tmp->begin();
	it2++;
	int	compare = INT_MAX;
	for (unsigned long i = 0; i < this->_lst->size() - 1; i++)
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
	if (this->_lst->size() < 2)
		throw (std::exception());
	std::list<int>	*tmp(this->_lst);
	tmp->sort();
	int	smalest = tmp->front();
	tmp->reverse();
	int	biggest = tmp->front();
	return (biggest - smalest);
}
