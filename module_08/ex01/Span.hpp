/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 23:52:46 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/12 01:03:06 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>

class Span
{
private:
	int	*_array;
	
public:
	Span(void);
	Span(const unsigned int N);
	Span(const Span &src);
	~Span(void);

	Span	&operator=(const Span &rhs);

	

};

#endif
