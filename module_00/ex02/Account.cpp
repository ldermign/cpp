/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 13:01:29 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/01 15:47:07 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _accountIndex(Account::_nbAccounts),
	_amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {

	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";amount:" 
		<< Account::_amount << ";created" << std::endl;

	return ;
}

Account::~Account( void ) {

	Account::_nbAccounts--;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" 
		<< this->_amount << ";closed" << std::endl;

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

void	Account::_displayTimestamp( void ) {

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

	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" 
		<< getTotalAmount() << ";deposits:" << getNbDeposits()
		<< ";withdrawals:" << getNbWithdrawals() << std::endl;
	return ;
}

void	Account::makeDeposit( int deposit ) {

	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	this->_nbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" 
		<< this->_amount << ";deposit:" << deposit
		<< ";amount:";
	this->_amount += deposit;
	std::cout << this->_amount << ";nb_deposits:" 
		<< this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" 
		<< this->_amount << ";withdrawal:";
	if (this->checkAmount() < withdrawal) {
		std::cout << "refused" << std::endl;
		return EXIT_FAILURE;
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	std::cout << withdrawal << ";amount:" << this->_amount
		<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return EXIT_SUCCESS;
}

int		Account::checkAmount( void ) const {

	return this->_amount;
}

void	Account::displayStatus( void ) const {

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" 
		<< this->_amount << ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}