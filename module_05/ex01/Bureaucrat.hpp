/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:15:30 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/13 16:17:09 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;

public:
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat(void);

	Bureaucrat		&operator=(Bureaucrat const &rhs);

	std::string const	getName(void) const;
	int					getGrade(void) const;

	void	incGrade(void);
	void	decGrade(void);
	void	signForm(Form &form);

	class GradeTooHighException : public std::exception {
	public:
		virtual const char		*what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char		*what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &rhs);

#endif