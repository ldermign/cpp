/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:24:38 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/13 15:58:25 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <limits.h>
#include "Span.hpp"

Span::Span( unsigned int n ) : _N(n), _ret(0) {}

void	Span::addNumber( unsigned int add ) {

	if (_ret.size() >= _N)
		throw Span::SpanFull();	

	_ret.push_back(add);

}

unsigned int	Span::shortestSpan( void ) {

	if (_ret.size() <= 1)
		throw Span::NumberNotFound();
	
	unsigned long int	ret;
	unsigned long int	before;
	unsigned long int	shortest = UINT_MAX;
	bool				found = false;
	std::vector<int>::const_iterator	it1 = _ret.begin();
	std::vector<int>::const_iterator	it2 = _ret.end();

	while (it1 != it2) {

		if (it1 == it2 - 1)
			break ;
		before = *it1;
		it1++;
		if (static_cast< unsigned long int >(*it1) > before)
			ret = *it1 - before;
		else
			ret = before - *it1;
		if (ret != 0 && ret < shortest) {
			found = true;
			shortest = ret;
		}
	}
	if (found == false)
		throw Span::DistanceNotFound();

	return shortest;
	
}

unsigned int	Span::longestSpan( void ) {
	
	if (_ret.size() <= 1)
		throw Span::NumberNotFound();
		
	unsigned long int	longest = 0;
	unsigned long int	ret;
	unsigned long int	before;
	bool				found = false;
	std::vector<int>::const_iterator	it1 = _ret.begin();
	std::vector<int>::const_iterator	it2 = _ret.end();

	while (it1 != it2) {
		
		if (it1 == it2 - 1)
			break ;
		before = *it1;
		it1++;
		if (static_cast< unsigned long int >(*it1) > before)
			ret = *it1 - before;
		else
			ret = before - *it1;
		if (ret > longest) {
			found = true;
			longest = ret;
		}
	}
	if (found == false)
		throw Span::DistanceNotFound();

	return longest;
}

void	Span::addRange( void ) {
	
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
