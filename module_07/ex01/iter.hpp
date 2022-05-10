/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 02:20:49 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/10 03:56:09 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	print(T &content) { std::cout << content << " "; }

template<typename T>
void plus_8(T &info) { info += 8; }

template<typename T>
void minus_8(T &info) { info -= 8; }

template<typename T>
void	iter(T *array, int size, void (*fct)(T &content))
{
	if (!array)
		return ;
	for (int i = 0; i < size; i++)
		fct(array[i]);
}

#endif
