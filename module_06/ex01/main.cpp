/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 18:56:27 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/18 15:20:29 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main(void) {
	Data		d;
	Data		*d_ptr;
	uintptr_t	u_i;

	d.data = 42;
	std::cout << "PTR          : " << &d << std::endl;
	u_i = serialize(&d);
	d_ptr = deserialize(u_i);
	std::cout << "PTR          : " << d_ptr << std::endl;
	std::cout << "Unsigned int : " << &u_i << std::endl;
	return (0);
}
