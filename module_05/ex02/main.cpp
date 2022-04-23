/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:17:20 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/23 18:26:42 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void){
	try{
		Form	form("form1", 1, 150);
		std::cout << form << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	try{
		Form	form2("form2", 150, 1);
		std::cout << form2 << std::endl << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	Form	form1("form1", 150, 150);
	Form	form2("form2", 1, 1);
	Form	form3("form3", 150, 1);
	Bureaucrat	bill("Bill", 1);
	Bureaucrat	joey("Joey", 150);

	std::cout << bill << std::endl;
	std::cout << joey << std::endl;
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	std::cout << form3 << std::endl;
	std::cout << std::endl;

	joey.signForm(form1);
	bill.signForm(form1);
	joey.signForm(form2);
	bill.signForm(form2);
	bill.signForm(form3);
	joey.signForm(form3);

	return (0);
}
