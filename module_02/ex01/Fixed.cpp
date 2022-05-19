/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 17:31:58 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/18 11:47:59 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::_bits = 8;

int		Fixed::getRawBits( void ) const {

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

int Fixed::toInt( void ) const {

	int		fixed_to_int;

	fixed_to_int = this->_whole >> this->_bits;

	return fixed_to_int;
}

float Fixed::toFloat( void ) const {

	float	fixed_to_float;

	fixed_to_float = (float)(this->_whole) / (float)(1 << this->_bits);
	
	return fixed_to_float;
}

Fixed::Fixed( float const nbr_float ) : _whole(roundf(nbr_float * 256)) {

	std::cout << "Float constructor called" << std::endl;

	return ;
}

Fixed::Fixed( int const nbr_int ) : _whole(nbr_int * 256) {

	std::cout << "Int constructor called" << std::endl;

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

std::ostream & operator<<( std::ostream & o, Fixed const & i ) {

	o << i.toFloat();

	return o;
}
