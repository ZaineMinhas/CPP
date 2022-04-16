/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:43:02 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/16 17:41:38 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					_nb;
	static int const	_bits = 8;

public:
	Fixed();
	Fixed(int const n);
	Fixed(float const f);
	Fixed(Fixed const  &src);
	~Fixed();

	int			toInt(void) const;
	float		toFloat(void) const;
	int			getRawBits(void) const;
	void		setRawBits(int const raw);

	Fixed &		operator=(Fixed const & rhs);
	Fixed &		operator<<(Fixed const & rhs);
};

std::ostream &	operator<<(std::ostream &o, Fixed const &rhs);

#endif
