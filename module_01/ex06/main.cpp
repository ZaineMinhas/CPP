/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:56:56 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/21 20:15:18 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
    Karen       karen;

    if (ac != 2 || ((std::string)av[1] != "DEBUG" && (std::string)av[1] != "INFO" && (std::string)av[1] != "WARNING" && (std::string)av[1] != "ERROR"))
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return (0);
    }
    karen.complain(av[1]);
    return (0);
}
