/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:28:14 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/09 17:07:31 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
public:
	Cure(void);
	Cure(const Cure &src);
	~Cure(void);

	Cure	&operator=(const Cure &rhs);

	virtual AMateria* clone() const;
	void	use(ICharacter& target);
};

#endif
