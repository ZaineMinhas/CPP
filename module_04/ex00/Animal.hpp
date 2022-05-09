/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:19:20 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/09 13:42:30 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
	std::string	_type;

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
	std::string _type;

public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &src);
	~WrongAnimal();
	WrongAnimal	&operator=(WrongAnimal const &rhs);

	std::string	getType(void) const;
	void		makeSound(void) const;
};

#endif