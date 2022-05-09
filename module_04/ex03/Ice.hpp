/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:28:24 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/09 17:07:49 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
public:
	Ice(void);
	Ice(const Ice &src);
	~Ice(void);

	Ice	&operator=(const Ice &rhs);

	virtual AMateria* clone() const;
	void	use(ICharacter& target);
};

#endif
