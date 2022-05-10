/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 02:28:32 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/10 04:03:20 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

int main(void)
{
	int intArray[8] = {0, 1, 2, 3, 4, 5, 6, 7};
	char charArray[10] = {'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r'};

	std::cout << "original array :" << std::endl;
	std::cout << "int array : ";
	::iter(intArray, 8, &print);
	std::cout << std::endl;
	std::cout << "char array : ";
	::iter(charArray, 10, &print);
	std::cout << std::endl;

	std::cout << std::endl << "------------------------------" << std::endl << std::endl;

	std::cout << "int array +8 : ";
	::iter(intArray, 8, &plus_8);
	::iter(intArray, 8, &print);

	std::cout << std::endl << std::endl;

	std::cout << "char array -8 : ";
	::iter(charArray, 10, &minus_8);
	::iter(charArray, 10, &print);

	std::cout << std::endl;
	return (0);
}
