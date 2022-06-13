/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:24:38 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/13 09:20:34 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

Span::Span( unsigned int n ) : _N(n), _ret(0) {}

void	Span::addNumber( unsigned int add ) {

	if (_ret.size() >= _N)
		throw Span::SpanFull();	

	_ret.push_back(add);

}

void	Span::shortestSpan( void ) {

	if (_ret.size() <= 1)
		throw Span::NumberNotFound();

}

void	Span::longestSpan( void ) {
	
	if (_ret.size() <= 1)
		throw Span::NumberNotFound();
	
}

/*
**	CANONICAL FORM
*/

Span::Span( void ) : _N(0), _ret(0) {}

Span	&Span::operator=( Span const &rhs ) {

	if (this != &rhs) {
		this->_N = rhs._N;
		this->_ret = rhs._ret; 
	}

	return *this;
}

Span::Span( Span const &src ) {

	*this = src;
	
}

Span::~Span( void ) {}