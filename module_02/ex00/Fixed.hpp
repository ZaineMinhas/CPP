/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:47:22 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/22 18:43:09 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

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