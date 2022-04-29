/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 13:01:29 by ldermign          #+#    #+#             */
/*   Updated: 2022/04/29 15:10:42 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
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

static void	displayAccountsInfos( void ) {

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