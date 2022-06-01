/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:45:04 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/01 16:06:47 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <stdint.h>
#include "Conversion.hpp"

void	Conversion::convertToFloat( char const c ) {

	if (c == 'I')
		this->_float = static_cast<float>(this->getInt());
	else if (c == 'C')
		this->_float = static_cast<float>(this->getChar());
	else if (c == 'D')
		this->_float = static_cast<float>(this->getDouble());

}

void	Conversion::convertToDouble( char const c ) {

	if (c == 'I')
		this->_double = static_cast<double>(this->getInt());
	else if (c == 'C')
		this->_double = static_cast<double>(this->getChar());
	else if (c == 'F')
		this->_double = static_cast<double>(this->getFloat());

}

void	Conversion::convertToChar( char const c ) {

	if (c == 'I') {
		if (this->getInt() >= 0 && this->getInt() <= 127 && std::isprint(this->getInt()))
			this->_char = static_cast<char>(this->getInt());
		else
			this->_impChar = "Non displayable";
	}
	else if (c == 'D') {
		int tmp = static_cast<int>(this->getDouble());
		if (std::isprint(tmp))
			this->_char = static_cast<char>(tmp);
		else
			this->_impChar = "Non displayable";
	}
	else if (c == 'F') {
		int tmp = static_cast<int>(this->getFloat());
		if (std::isprint(tmp))
			this->_char = static_cast<char>(tmp);
		else
			this->_impChar = "Non displayable";
	}

}

void	Conversion::convertToInt( char const c ) {

	if (c == 'C')
		this->_int = static_cast<int>(this->getChar());
	else if (c == 'D') {
		if (this->getDouble() > INT32_MAX)
			this->_impInt = "overflow";
		else if (this->getDouble() < INT32_MIN)
			this->_impInt = "underflow";
		else
			this->_int = static_cast<int>(this->getDouble());
	}
	else if (c == 'F') {
		if (this->getFloat() >= 2147483648)
			this->_impInt = "overflow";
		else if (this->getFloat() < INT32_MIN)
			this->_impInt = "underflow";
		else {
			
			this->_int = static_cast<int>(this->getFloat());
			// std::cout << this->_int << std::endl;
		}
	}

}

void	Conversion::doConv( void ) {

	char c = this->getWhichConv();
	this->convertToInt(c);
	this->convertToChar(c);
	this->convertToDouble(c);
	this->convertToFloat(c);
}

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
	return (str.size() > static_cast<unsigned long>(minSize) && it == str.end());
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
	return (str.size() > static_cast<unsigned long>(minSize) && it == str.end());
}

static bool	isInt( std::string const &str ) {

	int	len = str.size();

	if (len > 10)
		return false;
	double tmp = std::strtod(str.c_str(), NULL);
	if (tmp > INT32_MAX || tmp < INT32_MIN || str[0] == '\0')
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

	std::string tmp = str;

	if (isChar(str)) {
		this->_whichConv = 'C';
		this->_char = str[0];
	}
	else if (isInt(str)) {
		this->_whichConv = 'I';
		this->_int = std::atoi(str);
	}
	else if (isDouble(str)) {
		this->_whichConv = 'D';
		this->_double = std::strtod(str, NULL);
	}
	else if (isFloat(str)) {
		this->_whichConv = 'F';
		this->_float = std::strtof(str, NULL);
	}
	else {
		this->_whichConv = 'N';
		this->_impInt = "impossible";
		this->_impChar = "impossible";
		if (tmp == "-inf" || tmp == "-inff") {
			this->_impDouble = "-inf";
			this->_impFloat = "-inf";
		}
		else if (tmp == "+inf" || tmp == "+inff") {
			this->_impDouble = "+inf";
			this->_impFloat = "+inf";
		}
		else if (tmp == "nan" || tmp == "nanf") {
			this->_impDouble = "nan";
			this->_impFloat = "nan";
		}
		else {
			this->_impDouble = "impossible";
			this->_impFloat = "impossible";
		}
	}
}

/*
**	ACCESSORS
*/

int			Conversion::getInt( void ) const { return this->_int; }
char		Conversion::getChar( void ) const { return this->_char; }
double		Conversion::getDouble( void ) const { return this->_double; }
float		Conversion::getFloat( void ) const { return this->_float; }
std::string	Conversion::getImpInt( void ) const { return this->_impInt; }
std::string	Conversion::getImpChar( void ) const { return this->_impChar; }
std::string	Conversion::getImpDouble( void ) const { return this->_impDouble; }
std::string	Conversion::getImpFloat( void ) const { return this->_impFloat; }
char		Conversion::getWhichConv( void ) const { return this->_whichConv; }

/*
**	CANONICAL FORM
*/

Conversion::Conversion( void )
	: _int(0), _char(0), _double(0), _float(0),
	_impInt(""), _impChar(""), _impDouble(""), _impFloat(""), _whichConv('N') {}


Conversion &Conversion::operator=( Conversion const &rhs ) {

	if (&rhs != this) {
		this->_int = rhs._int;
		this->_char = rhs._char;
		this->_double = rhs._double;
		this->_float = rhs._float;
		this->_impInt = rhs._impInt;
		this->_impChar = rhs._impChar;
		this->_impDouble = rhs._impDouble;
		this->_impFloat = rhs._impFloat;
		this->_whichConv = rhs._whichConv;
	}

	return *this;
}

Conversion::Conversion( Conversion const &src ) {

	*this = src;
}

Conversion::~Conversion( void ) {}