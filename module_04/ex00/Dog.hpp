/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:33:58 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/31 18:52:56 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public virtual Animal
{
private:
    
public:
	Dog();
	Dog(Dog const &src);
	~Dog();
	Dog	operator=(Dog const &rhs);

	void	makeSound(void);
};

#endif