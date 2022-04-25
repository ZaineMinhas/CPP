/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:47:42 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/25 19:15:48 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	Form	*makePresidentialPardonForm(const std::string target);
	Form	*makeRobotomyRequestForm(const std::string target);
	Form	*makeShrubberyCreationForm(const std::string target);
public:
	Intern();
	Intern(const Intern &src);
	~Intern();

	Intern	&operator=(const Intern &rhs);

	Form	*makeForm(std::string name, std::string target);
};

#endif
