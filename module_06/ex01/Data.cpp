/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:18:11 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/03 14:45:21 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"

int	Data::getTestInt( void ) const { return this->_testInt; }
char	Data::getTestChar( void ) const { return this->_testChar; }

/*
**	CANONICAL FORM
*/

Data::Data( void ) : _testInt(42), _testChar('*') {}

Data	&Data::operator=( Data const &rhs ) {

	if (&rhs != this) {
		this->_testInt = rhs.getTestInt();
		this->_testChar = rhs.getTestChar();
	}

	return *this;

}

Data::Data( Data const &src ) {

	*this = src;
	
}

Data::~Data( void ) {}