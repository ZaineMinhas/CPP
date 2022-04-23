/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:50:29 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/23 18:13:19 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool				_signed;
	const int			_grade;
	const int			_exec_garde;
		
public:
	Form();
	Form(std::string name, int grade, int exec);
	Form(Form const &src);
	~Form();

	Form	operator=(Form const &rhs);

	const std::string	getName(void) const;
	int					getGrade(void) const;
	int					getExecGrade(void) const;
	bool				getSigned(void) const;

	void	beSigned(Bureaucrat const &bureaucrat);

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
