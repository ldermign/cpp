/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 13:57:15 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/15 09:34:38 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iterator>
#include <list>
#include "MutantStack.hpp"

int main( void ) {

	std::cout << "---------- Stack of int ---------- " << std::endl;

	{
		MutantStack< int > mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack< int >::iterator it = mstack.begin();
		MutantStack< int >::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		
		std::stack< int > s(mstack);
	}

	std::cout << "---------- Must be the same for container list ---------- " << std::endl;

	{
		std::list< int > mstack;

		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);

		std::list< int >::iterator it = mstack.begin();
		std::list< int >::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	std::cout << "---------- Check iterators ----------" << std::endl; 

	{

		MutantStack< int > mstack;

		mstack.push(-50);
		mstack.push(123);
		mstack.push(42);
		mstack.push(2147483647);
		mstack.push(1);
		mstack.push(999999);

		MutantStack< int >::iterator	it;

		for (it = mstack.begin() ; it < mstack.end() ; it++)
			std::cout << *it << std::endl;
	}

	return 0;
}
