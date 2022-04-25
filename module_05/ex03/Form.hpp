/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:50:29 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/25 19:26:34 by zminhas          ###   ########.fr       */
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
	const std::string	_target;
	bool				_signed;
	const int			_grade;
	const int			_exec_garde;
		
public:
	Form();
	Form(std::string name, std::string target, int grade, int exec);
	Form(Form const &src);
	virtual ~Form();

	Form	&operator=(Form const &rhs);

	const std::string	getName(void) const;
	const std::string	getTarget(void) const;
	int					getGrade(void) const;
	int					getExecGrade(void) const;
	bool				getSigned(void) const;

	void	beSigned(Bureaucrat const &bureaucrat);
	void	execute(Bureaucrat const &executor) const;
	virtual void	exec_form(const Bureaucrat &executor) const = 0;

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
