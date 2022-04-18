/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:19:20 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/18 16:06:24 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class AAnimal
{
protected:
	std::string	type;

public:
	AAnimal();
	AAnimal(AAnimal const &src);
	virtual ~AAnimal();
	AAnimal	&operator=(AAnimal const &rhs);

	std::string	getType(void) const;
	virtual void	makeSound(void) const = 0;
};

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &src);
	~WrongAnimal();
	WrongAnimal	operator=(WrongAnimal const &rhs);

	std::string	getType(void) const;
	void		makeSound(void) const;
};

#endif