/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:26:13 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/11 23:20:05 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <list>
# include <array>
# include <vector>

template<typename T>
bool	easyfind(const T &container, const int to_find)
{
	return (*std::find(container.begin(), container.end(), to_find) == to_find ? true : false);
}

#endif
