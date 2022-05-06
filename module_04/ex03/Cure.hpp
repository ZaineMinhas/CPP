/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:28:14 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/06 19:28:15 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "Materia.hpp"
# include "Character.hpp"

class Cure
{
private:
	
public:
	Cure(void);
	Cure(const Cure &src);
	~Cure(void);

	Cure	&operator=(const Cure &rhs);

};

#endif
