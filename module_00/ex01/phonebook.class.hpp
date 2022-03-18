/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:01:43 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/18 17:35:49 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
# include <string>

class Contact
{
	public:
		Contact();
		~Contact();

		int			id;
		std::string	f_name;
		std::string	l_name;
		std::string	n_name;
		std::string	phone_nb;
		std::string	secret;
	private:
};

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();

		void		add_contact(void);
		void		search_contact(void);

	private:
		int			nb_add;
		int			id;
		Contact		contact[8];

		std::string	print_info(std::string info);
		std::string	get_info(std::string info);
};

#endif