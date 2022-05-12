/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 23:52:46 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/12 20:28:14 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <list>
# include <vector>
# include <algorithm>

class Span
{
private:
	std::list<int>	_lst;
	int				_size;
	int				_added;

public:
	Span(void);
	Span(const unsigned int N);
	Span(const Span &src);
	~Span(void);

	Span	&operator=(const Span &rhs);
	int		&operator[](const unsigned int index) const;

	std::list<int>	getLst(void) const;
	int				getValue(unsigned int index) const;

	void	addNumber(int nb);
	int		shortestSpan(void) const;
	int		longestSpan(void) const;

};

#endif
