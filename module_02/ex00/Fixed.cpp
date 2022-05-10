/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 17:31:58 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/10 13:54:28 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

const int Fixed::_wholeConst = 8;

int		Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	
	return this->_whole;
}

void	Fixed::setRawBits( int const raw ) {

	this->_whole = raw;

	return ;
}

Fixed & Fixed::operator=( Fixed const & rhs ) {

	std::cout << "Copy assignment operator called" << std::endl;

	if ( this != &rhs )
		this->_whole = rhs.getRawBits();

	return *this;
}

Fixed::Fixed( Fixed const & src ) {

	std::cout << "Copy constructor called" << std::endl;

	*this = src;

	return ;
}

Fixed::Fixed( void ) : _whole(0) {

	std::cout << "Default constructor called" << std::endl;

	return ;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;

	return ;
}
