/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:09:45 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/18 15:18:32 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

int	main(void)
{
	std::string	entry;
	PhoneBook	phone;
	
	while (1)
	{
		std::cout << "type ADD, SEARCH or EXIT : ";
		std::getline(std::cin, entry);
		if (entry == "ADD")
			phone.add_contact();
		else if (entry == "SEARCH")
			phone.search_contact();
		else if (entry == "EXIT")
			break ;
	}
	return (0);
}