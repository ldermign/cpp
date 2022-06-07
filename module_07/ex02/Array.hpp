/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:28:10 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/07 15:46:16 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

class Array {

private:

	/* data */

public:

	int size( void ) const;

	Array( unsigned int n );

	Array( void );
	Array &operator=( Array const &rhs );
	Array( Array const &src );
	~Array( void );

};

Array::Array( void ) {

}

Array &Array::operator=( Array const &rhs ) { (void)rhs;

	return *this;
}

Array::Array( Array const &src ) {
	
	*this = src;

}

Array::~Array( void ) {

}

#endif
