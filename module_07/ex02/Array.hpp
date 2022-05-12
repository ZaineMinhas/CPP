/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 04:06:21 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/12 02:07:14 by zminhas          ###   ########.fr       */
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
	unsigned int _size;

public:
	Array(void) : _size(0) { this->_array = new T[0]; }
	Array(const unsigned int n) : _size(n) { this->_array = new T[n](); }
	Array(const Array &src)
	{
		this->_size = src.size();
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = src.getArray()[i];
	}

	~Array(void) { delete [] this->_array; }

	Array	&operator=(const Array &rhs) {
		this->_size = rhs.size();
		delete this->_array;
		this->_array = new T[rhs.size()];
		for (unsigned int i = 0; i < rhs.size(); i++)
			this->_array[i] = rhs.getArray()[i];
		return (*this);
	}

	T	&operator[](const unsigned int index) {
		if (index < this->_size)
			return (this->_array[index]);
		throw (std::out_of_range("index out of range"));
	}

	T				*getArray(void) const { return (this->_array); }
	unsigned int	size(void) const { return (this->_size); }
};

#endif
