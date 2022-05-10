/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 17:31:58 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/10 15:32:40 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::_wholeConst = 8;

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

// qui convertit la valeur en virgule fixe en nombre entier.
int Fixed::toInt( void ) const {

	int		fixed_to_int;
	// int	fixed_to_int = (int)getRawBits();

	// return fixed_to_int;
}

// qui convertit la valeur en virgule fixe en nombre à virgule flottante.
float Fixed::toFloat( void ) const {

	float	fixed_to_float;
	
	fixed_to_float = (float)getRawBits();
	
	return 0;
}

/*
• Un constructeur prenant un flottant constant en paramètre et qui convertit
celui-ci en virgule fixe. Le nombre de bits de la partie fractionnaire est initialisé à
8 comme dans l’exercice 00.
*/
Fixed::Fixed( float const nbr_float ) {
(void)nbr_float;

	std::cout << "Float constructor called" << std::endl;

	// float	chaiPa;


	// this->_whole =  

	return ;
}

/*
• Un constructeur prenant un entier constant en paramètre et qui convertit celui-ci
en virgule fixe. Le nombre de bits de la partie fractionnaire est initialisé à 8
comme dans l’exercice 00.
*/
Fixed::Fixed( int const nbr_int ) {
(void)nbr_int;
	std::cout << "Int constructor called" << std::endl;

	// this->_whole = nbr_int * 256;

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

	o << i.getRawBits();

	return o;
}
