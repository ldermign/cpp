/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 17:31:58 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/18 11:50:22 by ldermign         ###   ########.fr       */
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

Fixed::Fixed( Fixed const & src ) {

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

	return ;
}

Fixed::Fixed( int const nbr_int ) : _whole(nbr_int * 256) {

	return ;
}

Fixed::Fixed( void ) : _whole(0) {

	return ;
}

Fixed::~Fixed( void ) {

	return ;
}

Fixed & Fixed::operator=( Fixed const & rhs ) {

	if ( this != &rhs )
		this->_whole = rhs.getRawBits();

	return *this;
}

int Fixed::operator>( Fixed const & rhs ) {

	return ( this->_whole > rhs._whole );
}

int	Fixed::operator<( Fixed const & rhs ) {

	return ( this->_whole < rhs._whole );
}

int	Fixed::operator>=( Fixed const & rhs ) {

	return ( this->_whole >= rhs._whole );
}

int	Fixed::operator<=( Fixed const & rhs ) {

	return ( this->_whole <= rhs._whole );
}

int	Fixed::operator==( Fixed const & rhs ) {

	return ( this->_whole == rhs._whole );
}

int	Fixed::operator!=( Fixed const & rhs ) {

	return ( this->_whole != rhs._whole );
}

Fixed Fixed::operator+( Fixed const & rhs ) {

	return ( Fixed (this->toFloat() + rhs.toFloat()) );
}

Fixed Fixed::operator-( Fixed const & rhs ) {

	return ( Fixed (this->toFloat() - rhs.toFloat()) );
}

Fixed Fixed::operator*( Fixed const & rhs ) {

	return ( Fixed (this->toFloat() * rhs.toFloat()) );
}

Fixed Fixed::operator/( Fixed const & rhs ) {

	return ( Fixed (this->toFloat() / rhs.toFloat()) );
}

Fixed Fixed::operator++( int nbr ) {
(void)nbr;

	Fixed	copy = *this;
	this->_whole++;

	return copy;
}

Fixed &Fixed::operator++( void ) {

	this->_whole++;	

	return *this;
}

Fixed Fixed::operator--( int nbr ) {
(void)nbr;

	Fixed	copy = *this;
	this->_whole--;

	return copy;
}

Fixed &Fixed::operator--( void ) {

	this->_whole--;

	return *this;
}

Fixed Fixed::min( Fixed & ad1, Fixed & ad2) {

	if (ad1._whole < ad2._whole)
		return ad1;
	return ad2;
}

Fixed const Fixed::min( Fixed const & ad1, Fixed const & ad2) {

	if (ad1._whole < ad2._whole)
		return ad1;
	return ad2;
}

Fixed Fixed::max( Fixed & ad1, Fixed & ad2) {

	if (ad1._whole > ad2._whole)
		return ad1;
	return ad2;
}

Fixed const Fixed::max( Fixed const & ad1, Fixed const & ad2) {

	if (ad1._whole > ad2._whole)
		return ad1;
	return ad2;
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) {

	o << i.toFloat();

	return o;
}
