/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:42:39 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/18 18:54:01 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <string>

Account::Account( int initial_deposit ) {}

Account::~Account( void ) {}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp( void )
{
	struct tm	*timer;
	std::time_t	result = std::time(NULL);

	timer = localtime(&result);
	std::cout << "[" << timer->tm_year + 1900 << timer->tm_mon << timer->tm_mday << "_" << timer->tm_hour << timer->tm_min << timer->tm_sec << "]";
}

void	Account::displayAccountsInfos( void ) {}
