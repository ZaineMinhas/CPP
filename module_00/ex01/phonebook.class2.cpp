/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class2.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:21:08 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/18 18:00:00 by zminhas          ###   ########.fr       */
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
	if (nb_add < 7)
		this->nb_add++;
	this->contact[id].id = id;
	this->contact[id].f_name = PhoneBook::get_info("first name: ");
	this->contact[id].l_name = PhoneBook::get_info("last name: ");
	this->contact[id].n_name = PhoneBook::get_info("nickname: ");
	this->contact[id].phone_nb = PhoneBook::get_info("phone number: ");
	this->contact[id].secret = PhoneBook::get_info("darkest secret: ");
	this->id++;
	this->id %= 8;
}

std::string	PhoneBook::print_info(std::string info)
{
	unsigned long	i = -1;

	if (info.length() == 10)
		return (info);
	else if (info.length() > 10)
	{
		info[9] = '.';
		info = info.substr(0, 10);
		return (info);
	}
	else
	{
		while (++i < 10 - info.length())
			std::cout << " ";
		return (info);
	}
}

void	PhoneBook::search_contact(void)
{
	std::string	entry;
	int			id = -1;

	if (nb_add == -1)
	{
		std::cout << "There is no one in your phonebook" << std::endl;
		return ;
	}
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	while (++id <= nb_add)
	{
		std::cout << "|         " << contact[id].id << "|";
		std::cout << print_info(contact[id].f_name) << "|";
		std::cout << print_info(contact[id].l_name) << "|";
		std::cout << print_info(contact[id].n_name) << "|" << std::endl;
	}
	entry = PhoneBook::get_info("contact ID: ");
	for (int i = 0; i < (int)entry.length(); i++)
	{
		if (!isdigit(entry[i]))
		{
			std::cout << "Invalid ID" << std::endl;
			return ;
		}
	}
	id = std::stoi(entry);
	if (id < 0 || id > nb_add)
		std::cout << "Does not exist" << std::endl;
	else
	{
		std::cout << "first name: " << contact[id].f_name << std::endl;
		std::cout << "last name: " << contact[id].l_name << std::endl;
		std::cout << "nickname: " << contact[id].n_name << std::endl;
		std::cout << "phone number: " << contact[id].phone_nb << std::endl;
		std::cout << "darkest secret: " << contact[id].secret << std::endl;
	}
}
