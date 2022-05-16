/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:05:48 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/16 20:18:16 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("NONE"), _signed(0), _grade(150), _exec_garde(150) {}

Form::Form(std::string name, int grade, int exec) : _name(name), _signed(0), _grade(grade), _exec_garde(exec) {
	if (_grade < 1 || _exec_garde < 1)
		throw (GradeTooHighException());
	else if (_grade > 150 || _exec_garde > 150)
		throw (GradeTooLowException());
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

const char	*Form::GradeTooHighException::what() const throw() { return ("grade is too high"); }

const char	*Form::GradeTooLowException::what() const throw() { return ("grade is too low"); }

std::ostream	&operator<<(std::ostream &os, Form const &lhs) {
	os << lhs.getName() << ", form grade " << lhs.getGrade();
	return (os);
}
