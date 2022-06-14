/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:28:10 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/14 10:56:40 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <strings.h>

template< typename T >
class Array {

private:

	unsigned int	_size;
	T				*_array;

public:

	unsigned int size( void ) const {
		return this->_size;
	};
	Array( unsigned int n ) : _size(n), _array(new T[n]) {}

	class InvalidIndex : public std::exception {
	public:
		virtual const char	*what( void ) const throw() {
			return ("\033[38;5;124mIndex invalid\033[0m\n");
		}	
	};

	T	&operator[]( unsigned int x ) {
		if (x < 0 || x >= this->_size )
			throw Array::InvalidIndex();
		return this->_array[x];
	}

	Array( void ) : _size(0), _array(new T[0]) {}
	Array &operator=( Array const &rhs ) {
		if (this == &rhs)
			return (*this);
		// delete [] _array;	//	invalid free
		if (rhs._size == 0) {
			this->_size = 0;
			this->_array = NULL;
			return *this;
		}	
		this->_size = rhs._size;
		this->_array = new T[this->_size];
		if (&rhs != this)
			for (unsigned int i = 0 ; i < this->_size ; i++)
				this->_array[i] = rhs._array[i]; 
		return *this;

	}
	Array( Array const &src ) {
		*this = src;
	}
	~Array( void ) {
		delete [] this->_array;
	};

};



#endif
