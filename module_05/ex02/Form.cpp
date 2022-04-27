/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:05:48 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/27 16:10:23 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("NONE"), _target("NONE"), _signed(0), _grade(150), _exec_garde(150) {}

Form::Form(std::string name, std::string target, int grade, int exec) : _name(name), _target(target), _signed(0), _grade(grade), _exec_garde(exec) {
	if (_grade < 1)
		throw (GradeTooHighException());
	else if (_grade > 150)
		throw (GradeTooLowException());
	(void)_exec_garde;
}

Form::Form(Form const &src) : _name(src.getName()), _signed(src.getSigned()), _grade(src.getGrade()), _exec_garde(src.getExecGrade()) {}

Form::~Form() {}

Form	&Form::operator=(Form const &rhs) {
	this->_signed = rhs.getSigned();
	return (*this);
}

const std::string	Form::getName(void) const {
	return (this->_name);
}

const std::string	Form::getTarget(void) const {
	return (this->_target);
}

int		Form::getGrade(void) const {
	return (this->_grade);
}

int		Form::getExecGrade(void) const {
	return (this->_exec_garde);
}

bool	Form::getSigned(void) const {
	return (this->_signed);
}

void	Form::beSigned(Bureaucrat const &bureaucrat) {
	if (bureaucrat.getGrade() <= this->_grade)
		this->_signed = 1;
	else
		throw (GradeTooLowException());
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		throw (Form::NotSignedException());
	if (executor.getGrade() > this->getExecGrade())
		throw (Form::GradeTooLowException());
	else
		this->exec_form(executor);
}

std::ostream	&operator<<(std::ostream &os, Form const &lhs) {
	os << lhs.getName() << ", form grade " << lhs.getGrade();
	return (os);
}
