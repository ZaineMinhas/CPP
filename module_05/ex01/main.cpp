/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:17:20 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/19 18:39:09 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try {
		Bureaucrat	bureaucrat1("Bob", 150);
		Bureaucrat	bureaucrat2("Jim", 1);
		Bureaucrat	bureaucrat3("Corentin", 155);

		std::cout << bureaucrat1 << std::endl;
		std::cout << bureaucrat2 << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	Bureaucrat	bureaucrat1("Bill", 1);
	Bureaucrat	bureaucrat2("Joey", 150);

	try {
		bureaucrat1.incGrade();
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try {
		bureaucrat2.decGrade();
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	return (0);
}
