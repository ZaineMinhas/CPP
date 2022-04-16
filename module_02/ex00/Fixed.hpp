/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:47:22 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/16 17:41:42 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					_nb;
	static int const	_bits = 8;

public:
	Fixed();
	Fixed(Fixed const  &src);
	~Fixed();

	int			getRawBits(void) const;
	void		setRawBits(int const raw);

	Fixed &		operator=(Fixed const & rhs);
};

#endif
