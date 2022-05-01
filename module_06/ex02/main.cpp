/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 19:14:38 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/01 19:32:03 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base	*generate(void)
{
	int	nb = rand() % 3;

	if (!nb)
		return (new A);
	else if (nb == 1)
		return (new B);
	else
		return (new C);
}

void	identify(Base* p) {}

void	identify(Base& p) {}
