/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:13:58 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/21 19:55:58 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void	Karen::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger." << std::endl << "I really do !" << std::endl;
}

void	Karen::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl << "You didn’t put enough bacon in my burger !" << std::endl << "If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Karen::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Karen::error(void) {
	std::cout << "This is unacceptable !" << std::endl << "I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level)
{
	std::string	check[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Karen::*fc_tab[4])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	for (int i = 0; i < 4; i++)
		if (check[i] == level)
			(this->*(fc_tab[i]))();
}
