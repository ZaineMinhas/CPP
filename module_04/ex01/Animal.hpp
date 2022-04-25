/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:19:20 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/25 15:41:03 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
protected:
	std::string	type;

public:
	Animal();
	Animal(Animal const &src);
	virtual ~Animal();
	Animal	&operator=(Animal const &rhs);

	std::string	getType(void) const;
	virtual void	makeSound(void) const;
};

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &src);
	~WrongAnimal();
	WrongAnimal	&operator=(WrongAnimal const &rhs);

	std::string	getType(void) const;
	void		makeSound(void) const;
};

#endif