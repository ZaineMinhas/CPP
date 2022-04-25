/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 18:59:09 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/25 15:39:13 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", "ShrubberyCreationTarget", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("ShrubberyCreationForm", target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm   &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
	Form::operator=(rhs);
	return (*this);
}

void	ShrubberyCreationForm::exec_form(const Bureaucrat &executor) const
{
	std::ofstream	draw;

	(void)executor;
	draw.open(this->getTarget() + "_shrubbery", std::fstream::out);
	draw << "                                              ." << std::endl;
	draw << "                                   .         ;" << std::endl;
	draw << "      .              .              ;%     ;;" << std::endl;
	draw << "        ,           ,                :;%  %;" << std::endl;
	draw << "         :         ;                   :;%;'     .," << std::endl;
	draw << ",.        %;     %;            ;        %;'    ,;" << std::endl;
	draw << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	draw << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
	draw << "    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	draw << "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	draw << "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	draw << "         `:%;.  :;bd%;          %;@%;'" << std::endl;
	draw << "           `@%:.  :;%.         ;@@%;'" << std::endl;
	draw << "             `@%.  `;@%.      ;@@%;" << std::endl;
	draw << "               `@%%. `@%%    ;@@%;" << std::endl;
	draw << "                 ;@%. :@%%  %@@%;" << std::endl;
	draw << "                   %@bd%%%bd%%:;" << std::endl;
	draw << "                     #@%%%%%:;;" << std::endl;
	draw << "                     %@@%%%::;" << std::endl;
	draw << "                     %@@@%(o);  . '" << std::endl;
	draw << "                     %@@@o%;:(.,'" << std::endl;
	draw << "                 `.. %@@@o%::;" << std::endl;
	draw << "                    `)@@@o%::;" << std::endl;
	draw << "                     %@@(o)::;" << std::endl;
	draw << "                    .%@@@@%::;" << std::endl;
	draw << "                    ;%@@@@%::;." << std::endl;
	draw << "                   ;%@@@@%%:;;;." << std::endl;
	draw << "               ...;%@@@@@%%:;;;;,.." << std::endl;
	draw.close();
}
