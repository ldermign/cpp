/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:45:04 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/31 15:58:00 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <stdint.h>
#include "Conversion.hpp"

// void	Conversion::convertChar( char const c ) {
// 	(void)c;
// }

// void	Conversion::convertInt( char const *str ) {
	
// }

static bool	isFloat( std::string const &str ) {

	std::string::const_iterator it = str.begin();
	bool decimalPoint = false;
	int minSize = 0;

	if (str.size() > 0 && (str[0] == '-' || str[0] == '+')) {
		it++;
		minSize++;
	}
	while (it != str.end()) {
		if (*it == '.') {
			if (!decimalPoint)
				decimalPoint = true;
			else
				break ;
		}
		else if (!std::isdigit(*it) && ((*it != 'f') || it + 1 != str.end() || !decimalPoint))
			break ;
		++it;
	}
	return (static_cast<int>(str.size()) > minSize && it == str.end());
}

static bool	isDouble( std::string const &str ) {

	std::string::const_iterator it = str.begin();
	bool decimalPoint = false;
	int minSize = 0;

	if (str.size() > 0 && (str[0] == '-' || str[0] == '+')) {
		it++;
		minSize++;
	}
	while (it != str.end()) {
		if (*it == '.') {
			if (!decimalPoint)
				decimalPoint = true;
			else
				break ;
		}
		else if (!std::isdigit(*it))
			break ;
		++it;
	}
	return (static_cast<int>(str.size()) > minSize && it == str.end());
}

static bool	isInt( std::string const &str ) {

	int	len = str.size();

	if (len > 10)
		return false;
	double tmp = strtod(str.c_str(), NULL);
	if (tmp > INT32_MAX || tmp < INT32_MIN)
		return false;
	for (int i = 0 ; i < len ; i++)
		if (!std::isdigit(str[i]))
			return false;
	return true;
}

static bool	isChar( std::string const &str ) {

	int	len = str.size();

	if (len != 1 || !std::isprint(str[0]) || std::isdigit(str[0]))
		return false;
	return true;
}

void	Conversion::getConv( char const *str ) {

	if (isChar(str))
		this->_whichConv = 'C';
	else if (isInt(str))
		this->_whichConv = 'I';
	else if (isDouble(str))
		this->_whichConv = 'D';
	else if (isFloat(str))
		this->_whichConv = 'F';
	else
		this->_whichConv = 'N';
}

/*
**	ACCESSORS
*/

int		Conversion::getInt( void ) const { return this->_int; }
char	Conversion::getChar( void ) const { return this->_char; }
double	Conversion::getDouble( void ) const { return this->_double; }
float	Conversion::getFloat( void ) const { return this->_float; }
char	Conversion::getWhichConv( void ) const { return this->_whichConv; }

/*
**	CANONICAL FORM
*/

Conversion::Conversion( void )
	: _int(0), _char(0), _double(0), _float(0), _whichConv('N') {}


Conversion &Conversion::operator=( Conversion const &rhs ) {

	if (&rhs != this) {
		this->_int = rhs._int;
		this->_char = rhs._char;
		this->_double = rhs._double;
		this->_float = rhs._float;
		this->_whichConv = rhs._whichConv;
	}

	return *this;
}

Conversion::Conversion( Conversion const &src ) {

	*this = src;
}

Conversion::~Conversion( void ) {}