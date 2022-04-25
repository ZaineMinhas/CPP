/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:17:20 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/25 16:25:17 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	try
	{
		ShrubberyCreationForm	form1("Garden");
		RobotomyRequestForm		form2("Bob l'éponge");
		PresidentialPardonForm	form3("Donald Trump");
		Bureaucrat	bill("Bill", 1);
		Bureaucrat	joey("Joey", 150);

		std::cout << "----------------------------------------------------------------------" << std::endl;
		bill.executeForm(form1);
		joey.executeForm(form2);
		bill.executeForm(form3);
		std::cout << "----------------------------------------------------------------------" << std::endl;
		joey.signForm(form1);
		joey.signForm(form2);
		joey.signForm(form3);
		std::cout << "----------------------------------------------------------------------" << std::endl;
		bill.signForm(form1);
		bill.signForm(form2);
		bill.signForm(form3);
		std::cout << "----------------------------------------------------------------------" << std::endl;
		joey.executeForm(form1);
		joey.executeForm(form2);
		joey.executeForm(form3);
		std::cout << "----------------------------------------------------------------------" << std::endl;
		bill.executeForm(form1);
		bill.executeForm(form2);
		bill.executeForm(form3);
		std::cout << "----------------------------------------------------------------------" << std::endl;
		bill.executeForm(form2);
		bill.executeForm(form2);
		bill.executeForm(form2);
		bill.executeForm(form2);
		bill.executeForm(form2);
		bill.executeForm(form2);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}
