/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 02:57:13 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/23 19:01:07 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <deque>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() : std::stack<T>() {}
	MutantStack(const MutantStack &src) : std::stack<T>(src) {}
	~MutantStack() {}

	MutantStack		&operator=(const MutantStack &rhs) {
		this->c = rhs.c;
		return (*this);
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator r_iterator;

	iterator	begin(void) { return (this->c.begin()); }
	iterator	end(void) { return (this->c.end()); }
	r_iterator	rbegin(void) { return (this->c.rbegin()); }
	r_iterator	rend(void) { return (this->c.rend()); }
};

#endif
