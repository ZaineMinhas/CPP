/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:50:29 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/20 19:28:44 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
private:
	std::string const	_name;
	bool				_signed;
	int const			_grade;
	int const			_grade_to_exec;
		
public:
	Form();
	Form(std::string name, int grade);
	Form(Form const &src);
	~Form();
	Form	operator=(Form const &rhs);

	std::string const	getName(void) const;
	int const			getGrade(void) const;

	void	beSigned(Bureaucrat &bureaucrat);

	class GradeTooHighException : public std::exception {
	public:
		virtual const char		*what() const throw() {
			return ("garde is too high");
		}
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char		*what() const throw() {
			return ("garde is too low");
		}
	};
};

std::ostream	&operator<<(std::ostream &os, Form const &rhs);

#endif
