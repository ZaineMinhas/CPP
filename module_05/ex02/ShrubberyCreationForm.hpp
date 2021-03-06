/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 18:57:51 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/27 15:13:36 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORN_HPP
# define SHRUBBERYCREATIONFORN_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(const std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	~ShrubberyCreationForm(void);

	ShrubberyCreationForm   &operator=(const ShrubberyCreationForm &rhs);

	void	exec_form(const Bureaucrat &executor) const;
};

#endif