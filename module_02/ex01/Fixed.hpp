/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 17:32:38 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/10 14:22:51 by ldermign         ###   ########.fr       */
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

	Fixed( void );
	Fixed( float const nbr_float );
	Fixed( int const nbr_int );
	Fixed & operator=( Fixed const & rhs );
	Fixed( Fixed const & src);
	~Fixed( void );

private:

	int					_whole;
	static const int	_wholeConst;

};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif