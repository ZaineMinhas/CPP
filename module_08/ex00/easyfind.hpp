/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:26:13 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/24 16:53:27 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <list>
# include <array>
# include <list>
# include <vector>

template<typename T>
typename T::iterator	easyfind(T &container, int to_find)
{
	if (container.begin() == container.end())
		throw (std::exception());
	typename T::iterator it = std::find(container.begin(), container.end(), to_find);
	if (*it == to_find)
		return (it);
	throw (std::exception());
}

#endif
