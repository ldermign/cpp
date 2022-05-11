/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:32:05 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/11 15:39:55 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {

	return ;
}

ClapTrap &ClapTrap::operator=( ClapTrap const & rhs ) {

	// if ( this != &rhs )
		// this->_whole = rhs.getRawBits();
	
	return *this;
}

ClapTrap::ClapTrap( ClapTrap const & src ) {
	
	*this = src;

	return ;
}

ClapTrap::~ClapTrap( void ) {

	return ;
}