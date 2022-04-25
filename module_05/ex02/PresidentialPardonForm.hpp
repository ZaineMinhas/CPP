/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 17:55:06 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/25 15:38:37 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : virtual public Form
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &src);
	~PresidentialPardonForm();

	PresidentialPardonForm	&operator=(const PresidentialPardonForm &rhs);

	void	exec_form(const Bureaucrat &executor) const;
};

#endif