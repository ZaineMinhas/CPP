/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:26:13 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/18 19:57:16 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <list>
# include <array>
# include <list>

template<typename T>
typename T::iterator	easyfind(T &container, int to_find)
{
	typename T::iterator it = std::find(container.begin(), container.end(), to_find);
	if (*it == to_find)
		return (it);
	throw (std::exception());
}

#endif
