/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:25:09 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/14 13:54:26 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>


class Span {

public:

	Span( unsigned int n );

	void			addNumber( unsigned int add );
	unsigned int	shortestSpan( void );
	unsigned int	longestSpan( void );

	void			addRange( std::vector< int >::iterator it1, std::vector< int >::iterator it2 );

	int	operator[]( unsigned int x ) {
		return this->_ret[x];
	}

//	EXCEPTIONS

	class NumberNotFound : public std::exception {
	public:
		virtual const char	*what( void ) const throw() {
			return ("\033[38;5;124mNot enough numbers in Span\033[0m\n");
		}	
	};

	class DistanceNotFound : public std::exception {
	public:
		virtual const char	*what( void ) const throw() {
			return ("\033[38;5;124mNo distance were found\033[0m\n");
		}	
	};

	class SpanFull : public std::exception {
	public:
		virtual const char	*what( void ) const throw() {
			return ("\033[38;5;124mSpan is already full, cannot add more number\033[0m\n");
		}	
	};

//	CANONICAL FORM

	Span( void );
	Span	&operator=( Span const &rhs );
	Span( Span const &src );
	~Span( void );

private:
	
	unsigned int		_N;
	std::vector< int >	_ret;

};

#endif
