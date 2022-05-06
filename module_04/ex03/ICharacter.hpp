/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:28:30 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/06 19:28:31 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>

class ICharacter
{
private:
	
public:
	ICharacter(void);
	ICharacter(const ICharacter &src);
	~ICharacter(void);

	ICharacter	&operator=(const ICharacter &rhs);

};

#endif
