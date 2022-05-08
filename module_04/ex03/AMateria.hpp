/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:27:34 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/08 18:55:44 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string	_type;

public:
	AMateria(void);
	AMateria(std::string const & type);
	AMateria(const AMateria &src);
	virtual	~AMateria(void);

	AMateria	&operator=(const AMateria &rhs);

	std::string const &getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

/*-----------------------------------------------------------------------*/

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*_item[4];
	
public:
	MateriaSource(void);
	MateriaSource(const MateriaSource &src);
	virtual ~MateriaSource(void);

	MateriaSource	&operator=(const MateriaSource &rhs);

	const AMateria	*getItem(const int id) const;

	void learnMateria(AMateria *materia);
	AMateria* createMateria(std::string const & type);
};

#endif
