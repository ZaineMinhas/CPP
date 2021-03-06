/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:54:02 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/09 16:31:25 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(Brain const &src) {
    std::cout << "Brain Copy constructor called" << std::endl;
    *this = src;
}

Brain::~Brain() {
    std::cout << "Brain Destructor called" << std::endl;
}

Brain	&Brain::operator=(Brain const &rhs) {
    for (int i = 0; i < 100; i++)
        this->ideas[i] = rhs.ideas[i];
    return (*this);
}
