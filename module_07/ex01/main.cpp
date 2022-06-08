/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:33:16 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/08 13:43:33 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

// class Awesome
// {
// 	public:
// 	Awesome( void ) : _n( 42 ) { return; }
// 	int get( void ) const { return this->_n; }
// 	private:
// 	int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }

int main( void ) {

	{
		int size = 5;
		int test[] = {42, -8, 7, 2147483647, 0};

		iter(test, size, print);
		
		std::cout << "-------------------------------" << std::endl;
		
		iter(test, size, add);
		iter(test, size, print);
	}

	std::cout << "-------------------------------" << std::endl;

	{
		std::string test[] = {"Salut ", "ca ", "va ", "?"};
		iter(test, 4, print);
	}
	

	// int tab[] = { 0, 1, 2, 3, 4 };
	// Awesome tab2[5];

	// iter( tab, 5, print );
	// iter( tab2, 5, print );
	
	
	return 0;
}
