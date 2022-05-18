/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:36:39 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/18 17:46:43 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("NONE"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src.getName()), _grade(src.getGrade()) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs) {
	this->_grade = rhs.getGrade();
	return (*this);
}
	
std::string const	Bureaucrat::getName(void) const {
	return (this->_name);
}

int		Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

void	Bureaucrat::incGrade(void)
{
	if (this->_grade == 1)
		throw (Bureaucrat::GradeTooHighException());
	this->_grade--;
}

void	Bureaucrat::decGrade(void)
{
	if (this->_grade == 150)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade++;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() { return ("grade is too high"); }

const char	*Bureaucrat::GradeTooLowException::what() const throw() { return ("grade is too low"); }

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &lhs) {
	os << lhs.getName() << ", bureaucrat grade " << lhs.getGrade();
	return (os);
}
