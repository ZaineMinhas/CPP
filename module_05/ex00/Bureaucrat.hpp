/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:15:30 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/25 15:37:40 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

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
	void				incGrade(void);
	void				decGrade(void);

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

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &rhs);

#endif