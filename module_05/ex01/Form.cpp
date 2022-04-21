/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:05:48 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/21 14:30:05 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("NONE"), _grade(150), _grade_to_exec(0), _signed(0) {}

Form::Form(std::string name, int grade) : _name(name), _signed(0), _grade(grade), _grade_to_exec(0) {
	if (_grade < 1)
		throw (GradeTooHighException());
	else if (_grade > 150)
		throw (GradeTooLowException());
}

Form::Form(Form const &src) : _name(src._name), _grade(src._grade), _grade_to_exec(0), _signed(src._signed) {}

Form::~Form() {}

Form	Form::operator=(Form const &rhs) {
	*this = rhs;
}

std::string const	Form::getName(void) const {
	return (this->_name);
}

int const	Form::getGrade(void) const {
	return (this->_grade);
}

void	Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() <= this->_grade)
	{
		this->_signed = 1;
		std::cout << bureaucrat.getName() << " signed " << this->getName() << std::endl;
	}
	else
	{
		std::cout << bureaucrat.getName() << " couldn't sign " << this->getName() << " because";
		throw (GradeTooLowException());
	}
}

std::ostream	&operator<<(std::ostream &os, Form const &lhs) {
	os << lhs.getName() << ", bureaucrat grade " << lhs.getGrade();
	return (os);
}
