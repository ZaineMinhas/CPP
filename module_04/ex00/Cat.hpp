/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:28:16 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/09 14:06:57 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : virtual public Animal
{
public:
	Cat();
	Cat(Cat const &src);
	virtual ~Cat();
	Cat	&operator=(Cat const &rhs);

	void	makeSound(void) const;
};

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(WrongCat const &src);
	~WrongCat();
	WrongCat	&operator=(WrongCat const &rhs);

	void	makeSound(void) const;
};

#endif