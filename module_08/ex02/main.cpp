/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:52:11 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/23 19:10:31 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main(void){
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	std::cout << "top  : " << mstack.top() << std::endl;
	std::cout << "size : " <<  mstack.size() << std::endl << std::endl;
	
	mstack.pop();
	std::cout << "top  : " << mstack.top() << std::endl;
	std::cout << "size : " <<  mstack.size() << std::endl << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	it++;
	it--;

	while (it != ite) {
    	std::cout << *it << " | ";
		it++;
	}

	std::cout << std::endl << "----Copy test----" << std::endl;
	MutantStack<int> copy1(mstack);
	MutantStack<int> copy2 = mstack;

	mstack.pop();

	std::cout << "copy1 top : " << copy1.top() << std::endl;
	copy1.pop();
	std::cout << "copy1 top : " << copy1.top() << std::endl;

	std::cout << std::endl << "---------------" << std::endl;

	std::cout << "copy2 top : " << copy2.top() << std::endl;
	copy2.pop();
	std::cout << "copy2 top : " << copy2.top() << std::endl;
	return (0);
}