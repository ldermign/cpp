/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:45:04 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/31 11:58:24 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include "Conversion.hpp"

void	Conversion::convertAlpha( char const c ) {
	(void)c;
}

void	Conversion::convertInt( char const *str ) {
	
}

void	Conversion::Conversion( char const *str ) {

	if (strlen(str) == 0)
		return ;
	if (std::strlen(str) == 1 && std::isprint(str[1]) && !std::isdigit(str[1]))
		return (this->convertAlpha(str[1]));
	else if (std::strlen(str) == 1 && std::isdigit(str[1])) // pas de point
		return (this->convertInt(str[1]));
}

/*
**	CANONICAL FORM
*/

Conversion::Conversion( void )
	: _int(0), _char(0), _double(0), _float(0), _whichConv('N') {}


Conversion &Conversion::operator=( Conversion const &rhs ) {

	if (&rhs != this) {}
		// rhs = this;

	return *this;
}

Conversion::Conversion( Conversion const &src ) {

	*this = src;
}

Conversion::~Conversion( void ) {}