/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:05:43 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/18 18:29:56 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
# define MATERIA_HPP

# include <iostream>
# include "Character.hpp"

class AMateria
{
protected:

public:
	AMateria();
	AMateria(std::string const & type);
	virtual	~AMateria();
	AMateria	operator=(AMateria const &rhs);

	std::string const &getType() const; //Returns the materia type

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif