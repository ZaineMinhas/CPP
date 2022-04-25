/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:37:51 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/25 17:08:54 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen	karen;

	/* LEVEL 1 */
	karen.complain("DEBUG");
	std::cout << std::endl;

	/* LEVEL 2 */
	karen.complain("INFO");
	std::cout << std::endl;

	/* LEVEL 3 */
	karen.complain("WARNING");
	std::cout << std::endl;

	/* LEVEL 4 */
	karen.complain("ERROR");
	std::cout << std::endl;
	return (0);
}