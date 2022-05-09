/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:33:58 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/09 14:06:39 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : virtual public Animal
{
private:
	Brain	*_brain;

public:
	Dog();
	Dog(Dog const &src);
	virtual ~Dog();
	Dog	&operator=(Dog const &rhs);

	void	makeSound(void) const;

	Brain	getBrain(void) const;
};

#endif