/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 04:07:10 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/11 03:16:44 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	Array<int>			IntArray(4);
	Array<char>			CharArray(6);
	Array<std::string>	StrArray(2);

	try
	{
		CharArray[10] = 'A';
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl << "--------------------------" << std::endl << std::endl;
	
	size_t size = IntArray.size();
	for (size_t i = 0; i < size; i++)
		IntArray[i] = 0;
	IntArray[1] = 42;
	for (size_t i = 0; i < size; i++)
		std::cout << "IntArray[" << i << "] : " << IntArray[i] << " | ";
	std::cout << std::endl;

	std::cout << std::endl << "--------------------------" << std::endl << std::endl;

	size = CharArray.size();
	for (size_t i = 0; i < size; i++)
		CharArray[i] = 'a';
	CharArray[3] = 'A';
	for (size_t i = 0; i < size; i++)
		std::cout << "CharArray[" << i << "] : " << CharArray[i] << " | ";
	std::cout << std::endl;

	std::cout << std::endl << "--------------------------" << std::endl << std::endl;

	size = StrArray.size();
	for (size_t i = 0; i < size; i++)
		StrArray[i] = "Coucou";
	StrArray[1] = "Hello";
	for (size_t i = 0; i < size; i++)
		std::cout << "StrArray[" << i << "] : " << StrArray[i] << " | ";
	std::cout << std::endl;

	return (0);
}
