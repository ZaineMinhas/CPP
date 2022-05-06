/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:28:24 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/06 19:28:24 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "Materia.hpp"
# include "Character.hpp"

class Ice
{
private:
	
public:
	Ice(void);
	Ice(const Ice &src);
	~Ice(void);

	Ice	&operator=(const Ice &rhs);

};

#endif
