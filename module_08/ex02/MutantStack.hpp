/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 13:59:03 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/14 15:08:47 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

/*
empty	->	Test whether container is empty (public member function )
size	->	Return size (public member function )
top		->	Access next element (public member function )
push	->	Insert element (public member function )
emplace	->	Construct and insert element (public member function )	//	c++11
pop		->	Remove top element (public member function )
swap	->	Swap contents (public member function )	//	c++11
*/

template< typename T >
class MutantStack : public std::stack< T > {

private:

public:
	

//	CANONICAL FORM

	MutantStack( void );
	MutantStack	&operator=( MutantStack const &rhs ) {
		if (this == &rhs)
			return *this;
		
		return *this;
	};
	MutantStack( MutantStack const &src ) {
		*this = src;
	};
	virtual	~MutantStack( void );
};

#endif