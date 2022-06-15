/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 13:59:03 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/15 09:18:07 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iterator>

template< typename T >
class MutantStack : public std::stack< T > {

public:

	typedef typename std::stack< T >::container_type::iterator iterator;

	iterator	begin( void ) {
		return this->c.begin();
	}
	iterator	end( void ) {
		return this->c.end();
	}

//	CANONICAL FORM

	MutantStack( void ) {}
	MutantStack< T > &operator=( const MutantStack< T > &rhs ) {
		if (this == &rhs)
			return *this;
		this->c = rhs.c;
		return *this;
	}
	MutantStack( const MutantStack< T > &src ) {
		*this = src;
	}
	virtual	~MutantStack( void ) {}

};

#endif