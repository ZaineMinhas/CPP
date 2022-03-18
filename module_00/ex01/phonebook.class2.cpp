/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class2.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:21:08 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/18 15:31:08 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

std::string	PhoneBook::get_info(std::string info)
{
	std::string entry;

	std::cout << info;
	getline(std::cin, entry);
	if (entry == "")
		return (get_info(info));
	else
		return (entry);
}

void	PhoneBook::add_contact(void)
{
	this->nb_add++;
	if (nb_add == 8)
		this->nb_add = 7;
	this->contact[nb_add].id = nb_add;
	this->contact[nb_add].f_name = PhoneBook::get_info("first name: ");
	this->contact[nb_add].l_name = PhoneBook::get_info("last name: ");
	this->contact[nb_add].n_name = PhoneBook::get_info("nickname: ");
	this->contact[nb_add].phone_nb = PhoneBook::get_info("phone number: ");
	this->contact[nb_add].secret = PhoneBook::get_info("darkest secret: ");
}

void	PhoneBook::print_info(const std::string info)
{
}

void	PhoneBook::search_contact(void)
{
	int	id;

	id = std::stoi(PhoneBook::get_info("contact Id please: "));
	if (id < 0 || id > nb_add)
		std::cout << "Error" << std::endl;
	else
	{
		std::cout << "|     index|first name| last name|  nickname|" << std::endl;
		std::cout << "         " << contact[id].id << "|";
		
		std::cout << std::endl;
		/*std::cout << "first name: " << contact[id].f_name << std::endl;
		std::cout << "last name: " << contact[id].l_name << std::endl;
		std::cout << "nickname: " << contact[id].n_name << std::endl;
		std::cout << "phone number: " << contact[id].phone_nb << std::endl;
		std::cout << "darkest secret: " << contact[id].secret << std::endl;*/
	}
}
