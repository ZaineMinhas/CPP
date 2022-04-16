/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 17:44:48 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/16 17:45:54 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*stringPTR = &str;
	std::string		&stringREF = str;

	std::cout << "Addr_1 - " << &str << std::endl;
	std::cout << "Addr_2 - " << stringPTR << std::endl;
	std::cout << "Addr_3 - " << &stringREF << std::endl << std::endl;

	std::cout << "Val_1 - " << str << std::endl;
	std::cout << "Val_2 - " << *stringPTR << std::endl;
	std::cout << "Val_1 - " << stringREF << std::endl;
}