/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 18:00:56 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/29 18:17:38 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

int	return_error(const std::string error)
{
	std::cout << error << std::endl;
	return (1);                       
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (return_error(""));
	Cast(av[1]);
	
	return (0);
}
