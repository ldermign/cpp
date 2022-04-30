/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 13:01:29 by ldermign          #+#    #+#             */
/*   Updated: 2022/04/30 14:56:19 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) {

	std::cout << "Constructor called" << std::endl;

	return ;
} // initialiser la valeur initial_deposit

Account::~Account( void ) {

	std::cout << "Constructor called" << std::endl;

	return ;
}

int	Account::getNbAccounts( void ) {

	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void ) {

	return Account::_totalAmount;
}

int	Account::getNbDeposits( void ) {

	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {

	return Account::_totalNbWithdrawals;
}

static void	_displayTimestamp( void ) {

	time_t t = time(NULL);

	tm* timePtr = localtime(&t);
	std::cout << "[";
	std::cout << timePtr->tm_year + 1900;
	if (timePtr->tm_mon + 1 < 10)
		std::cout << "0";
	std::cout << timePtr->tm_mon + 1;
	if (timePtr->tm_mday + 1 < 10)
		std::cout << "0";
	std::cout << timePtr->tm_mday;
	std::cout << "_";
	if (timePtr->tm_hour + 1 < 10)
		std::cout << "0";
	std::cout << timePtr->tm_hour;
	if (timePtr->tm_min + 1 < 10)
		std::cout << "0";
	std::cout << timePtr->tm_min;
	if (timePtr->tm_sec + 1 < 10)
		std::cout << "0";
	std::cout << timePtr->tm_sec;
	std::cout << "] ";
}

void	Account::displayAccountsInfos( void ) {

	std::cout << "[" << Account::_displayTimestamp() << "] " 
		<< "index:" << Account::_accountIndex << ";amount:" 
		<< Account::_amount << ";created" << std::endl;

	return ;
}

void	makeDeposit( int deposit ) {

}

bool	makeWithdrawal( int withdrawal ){

	return ;
}

int		checkAmount( void ) const {

	return ;
}

void	displayStatus( void ) const {

}