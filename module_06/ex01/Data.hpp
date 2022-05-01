/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 16:48:43 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/01 18:54:38 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

typedef struct	Data
{
	int data;
}				t_data;

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif
