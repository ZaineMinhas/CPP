/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:27:34 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/06 19:27:35 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
protected:
	std::string	_type;

public:
	AMateria(void);
	AMateria(const AMateria &src);
	~AMateria(void);

	AMateria	&operator=(const AMateria &rhs);

	std::string const &getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
