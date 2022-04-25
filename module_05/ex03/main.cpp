/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:17:20 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/25 19:24:41 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void)
{
	Intern *i = new Intern();
	Form *f;

	f = i->makeForm("PresidentialPardonForm", "mytarget");
	delete f;
	f = i->makeForm("RobotomyRequestForm", "mytarget");
	delete f;
	f = i->makeForm("robot request", "mytarget");
	delete f;
	f = i->makeForm("shrubber creation", "mytarget");
	delete f;

	delete i;
	return 0;
}
