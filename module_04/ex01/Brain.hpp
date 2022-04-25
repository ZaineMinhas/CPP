/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:33:54 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/25 15:41:19 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
private:
	std::string	ideas[100];

public:
	Brain();
	Brain(Brain const &src);
	~Brain();
	Brain	&operator=(Brain const &rhs);

};

#endif