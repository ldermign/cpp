/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 17:32:38 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/11 15:12:20 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

public:

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	int		toInt( void ) const;

	int	operator>( Fixed const & rhs );
	int	operator<( Fixed const & rhs );
	int	operator>=( Fixed const & rhs );
	int	operator<=( Fixed const & rhs );
	int	operator==( Fixed const & rhs );
	int	operator!=( Fixed const & rhs );

	Fixed operator+( Fixed const & rhs );
	Fixed operator-( Fixed const & rhs );
	Fixed operator*( Fixed const & rhs );
	Fixed operator/( Fixed const & rhs );

	Fixed operator++( int nbr );	//	post-incrementation
	Fixed &operator++( void );		//	pre-incrementation
	Fixed operator--( int nbr );	//	post-decrementation
	Fixed &operator--( void );		//	pre-decrementation

// • Une fonction membre statique min prenant en paramètres deux références sur des
// nombres à virgule fixe et qui retourne le plus petit d’entre eux.
	static Fixed min( Fixed &ad1, Fixed &ad2);
// • Une fonction membre statique min prenant en paramètres deux références sur des
// nombres à virgule fixe constants et qui retourne le plus petit d’entre eux.
	static const Fixed min( Fixed const &ad1, Fixed const &ad2);
// • Une fonction membre statique max prenant en paramètres deux références sur des
// nombres à virgule fixe et qui retourne le plus grand d’entre eux.
	static Fixed max( Fixed &ad1, Fixed &ad2);
// • Une fonction membre statique max prenant en paramètres deux références sur des
// nombres à virgule fixe constants et qui retourne le plus grand d’entre eux.
	static const Fixed max( Fixed const &ad1, Fixed const &ad2);


	Fixed( void );							//	Constructeur par défaut
	Fixed( float const nbr_float );
	Fixed( int const nbr_int );
	Fixed &operator=( Fixed const & rhs );	//	Opérateur d’affectation
	Fixed( Fixed const & src);				//	Constructeur de recopie
	~Fixed( void );							//	Destructeur

private:

	int					_whole;
	static const int	_bits;

};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif

/*
Ajoutez à votre classe des fonctions membres publiques afin de surcharger
les opérateurs suivants :
• Les 6 opérateur de comparaison : >, <, >=, <=, == et !=.
• Les 4 opérateurs de arithmétiques : +, -, *, et /.
• Les 4 opérateurs d’incrémentation et de décrémentation (pré-incrémentation et
post-incrémentation, pré-décrémentation et post-décrémentation) qui diminueront
la valeur du nombre à virgule fixe d’unité E tel que 1 + E > 1.
Ajoutez à votre classe ces quatre fonctions membres publiques surchargées :
• Une fonction membre statique min prenant en paramètres deux références sur des
nombres à virgule fixe et qui retourne le plus petit d’entre eux.
• Une fonction membre statique min prenant en paramètres deux références sur des
nombres à virgule fixe constants et qui retourne le plus petit d’entre eux.
• Une fonction membre statique max prenant en paramètres deux références sur des
nombres à virgule fixe et qui retourne le plus grand d’entre eux.
• Une fonction membre statique max prenant en paramètres deux références sur des
nombres à virgule fixe constants et qui retourne le plus grand d’entre eux.
*/