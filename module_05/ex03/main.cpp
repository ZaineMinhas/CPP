/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:17:20 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/16 16:43:37 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void)
{
	Bureaucrat	martin("martin le marton", 1);
	Intern *i = new Intern();
	Form *f;

	f = i->makeForm("PresidentialPardonForm", "mytarget");
	martin.signForm(*f);
	f->execute(martin);
	delete f;
	std::cout << std::endl;

	f = i->makeForm("RobotomyRequestForm", "mytarget");
	martin.signForm(*f);
	f->execute(martin);
	delete f;
	std::cout << std::endl;

	f = i->makeForm("robot request", "mytarget");
	delete f;
	f = i->makeForm("shrubber creation", "mytarget");
	delete f;

	delete i;
	return 0;
}
