/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 17:32:38 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/18 11:51:31 by ldermign         ###   ########.fr       */
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

	Fixed operator++( int nbr );
	Fixed &operator++( void );
	Fixed operator--( int nbr );
	Fixed &operator--( void );

	static Fixed min( Fixed &ad1, Fixed &ad2);
	static const Fixed min( Fixed const &ad1, Fixed const &ad2);
	static Fixed max( Fixed &ad1, Fixed &ad2);
	static const Fixed max( Fixed const &ad1, Fixed const &ad2);


	Fixed( void );
	Fixed( float const nbr_float );
	Fixed( int const nbr_int );
	Fixed &operator=( Fixed const & rhs );
	Fixed( Fixed const & src);
	~Fixed( void );

private:

	int					_whole;
	static const int	_bits;

};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif
