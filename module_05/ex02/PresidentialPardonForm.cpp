/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 17:56:51 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/24 19:26:13 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("NONE", "NONE", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("PresidentialPardonForm", target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm	PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
	Form::operator=(rhs);
	return (*this);
}

void	PresidentialPardonForm::exec_form(const Bureaucrat &executor) const
{
	(void)executor;
	std::cout << this->getTarget() << " was forgiven by Zaphod Beeblebrox" << std::endl;
}
