/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 04:06:21 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/11 02:04:11 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template<typename T>
class Array
{
private:
	T	*_array;
	const unsigned int _size;

public:
	Array(void) : _size(0) { this->_array = new T[0]; }
	Array(const unsigned int n) : _size(n) { this->_array = new T[n](); }
	Array(const Array<T> &src) { *this = src; }
	~Array(void) { delete [] this->_array; }

	Array	&operator=(const Array &rhs) {
		delete this->_array;
		this->_array = new T[rhs.size()];
		for (unsigned int i = 0; i < rhs.size(); i++)
			this->_array[i] = rhs[i];
		return (*this);
	}

	T	&operator[](const unsigned int index) {
		if (index < 0 || index > this->_size)
			throw (std::out_of_range("index out of range"));
		return (this->_array[index]);
	}

	T				*getArray(void) const { return (this->_array); }
	unsigned int	size(void) const { return (this->_size); }
};

#endif
