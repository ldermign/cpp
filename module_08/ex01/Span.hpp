/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:25:09 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/13 09:20:35 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>


class Span {

public:

	Span( unsigned int n );

	void	addNumber(  unsigned int add  );
	void	shortestSpan( void );
	void	longestSpan( void );

//	EXCEPTIONS

	class AddImpossible : public std::exception {
	public:
		virtual const char	*what( void ) const throw() {
			return ("\033[38;5;124mCouldn't add number in Span\033[0m\n");
		}	
	};

	class NumberNotFound : public std::exception {
	public:
		virtual const char	*what( void ) const throw() {
			return ("\033[38;5;124mNo numbers were found in Span\033[0m\n");
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
	std::vector<int>	_ret;

};


#endif