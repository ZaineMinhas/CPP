/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 23:52:46 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/23 16:31:52 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <list>
# include <vector>
# include <algorithm>

typedef std::list<int>::iterator	iter;

class Span
{
private:
	std::list<int>	_lst;
	unsigned long	_size;

public:
	Span(void);
	Span(const unsigned int N);
	Span(const Span &src);
	~Span(void);

	Span	&operator=(const Span &rhs);
	int		&operator[](const unsigned int index) const;

	std::list<int>	getLst(void) const;
	int				getValue(unsigned int index) const;
	int				getSize(void) const;

	void	addNumber(int nb);
	void	addNumber(iter start, iter end);
	int		shortestSpan(void) const;
	int		longestSpan(void) const;

};

#endif
