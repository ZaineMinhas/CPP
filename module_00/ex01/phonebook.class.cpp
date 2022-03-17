/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:05:03 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/17 17:32:27 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

Contact::Contact() : f_name(NULL), l_name(NULL), n_name(NULL), phone_nb(NULL), secret(NULL)
{
}

Contact::~Contact()
{
}

PhoneBook::PhoneBook() : intro("type ADD, SEARCH or EXIT : "), nb_add(0)
{
}

PhoneBook::~PhoneBook()
{
}
