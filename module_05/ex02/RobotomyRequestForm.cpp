/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 17:22:39 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/24 19:25:12 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("NONE", "NONE", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("RobotomyRequestForm", target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm	RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
    Form::operator=(rhs);
    return (*this);
}

void    RobotomyRequestForm::exec_form(const Bureaucrat &executor) const
{
    (void)executor;
    if (rand() % 2)
        std::cout << "* some drill noise *" << std::endl << this->getTarget() << " being succesfully robotomised" << std::endl;
    else
        std::cout << "* some drill noise *" << std::endl << "Robotomisation failed." << std::endl;
}
