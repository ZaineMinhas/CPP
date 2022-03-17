/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:09:45 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/17 17:13:28 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

int	main(void)
{
	PhoneBook	phone;
	std::string	entry;
	int			exit = 0;

	while (!exit)
	{
		std::cout << phone.intro;
		std::getline(std::cin, entry);
		if (entry == "ADD")
			phone.add_contact();
		else if (entry == "SEARCH")
			phone.search_contact();
		else if (entry == "EXIT")
			exit = 1;
	}
	return (0);
}