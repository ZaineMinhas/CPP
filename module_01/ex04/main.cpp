/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 15:39:10 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/20 17:14:56 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	retrun_error()
{
	std::cout << "Error" << std::endl;
	return (1);
}

int	main(int ac, char **av)
{
	if (ac != 4)
		return (retrun_error());
	Replace	replace(av[1], av[2], av[3]);
	if (replace.replace())
		return (retrun_error());
    return (0);
}
