/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:37:51 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/21 19:41:43 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen	karen;

	/* LEVEL 1 */
	karen.complain("DEBUG");

	/* LEVEL 2 */
	karen.complain("INFO");

	/* LEVEL 3 */
	karen.complain("WARNING");

	/* LEVEL 4 */
	karen.complain("ERROR");
	return (0);
}