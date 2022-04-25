/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:49:51 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/25 19:13:47 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &src) {
	*this = src;
}

Intern::~Intern() {}

Intern	&Intern::operator=(const Intern &rhs) {
	(void)rhs;
	return (*this);
}

Form	*Intern::makePresidentialPardonForm(const std::string target)
{
	Form	*f = new PresidentialPardonForm(target);
	std::cout << f->getName() << " has been created" << std::endl;
	return (f);
}

Form	*Intern::makeRobotomyRequestForm(const std::string target)
{
	Form	*f = new RobotomyRequestForm(target);
	std::cout << f->getName() << " has been created" << std::endl;
	return (f);
}

Form	*Intern::makeShrubberyCreationForm(const std::string target)
{
	Form	*f = new ShrubberyCreationForm(target);
	std::cout << f->getName() << " has been created" << std::endl;
	return (f);
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	std::string		check[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	Form	*(Intern::*fc_tab[3])(const std::string target) = {&Intern::makePresidentialPardonForm, &Intern::makeRobotomyRequestForm, &Intern::makeShrubberyCreationForm};

	for (int i = 0; i < 3; i++)
		if (check[i] == name)
			return ((this->*(fc_tab[i]))(target));
	std::cout << name << " : doesn't exist" << std::endl;
	return (NULL);
	
}
