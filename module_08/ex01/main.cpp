/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:24:14 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/14 13:56:20 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int	main( void ) {

	std::cout << "---------- Test Subject ----------" << std::endl;

	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl << "---------- Span of 20 000 ----------" << std::endl;
//	MAX UNSIGNED INT = 4.294.967.295

	{
		std::vector< int >	max(10000, 42);
		Span sp2 = Span(10005);
		sp2.addNumber(123);
		sp2.addNumber(2147483647);
		sp2.addNumber(525252);
		sp2.addNumber(1);
		sp2.addNumber(111111);
	
		sp2.addRange(max.begin(), max.end());
		
		for (int i = 0 ; i < 15 ; i++)
			std::cout << sp2[i] << std::endl;
	}

	std::cout << std::endl << "---------- Errors -----------" << std::endl << std::endl;

	{

		Span sp = Span(2);
		sp.addNumber(42);
		sp.addNumber(42);
		
		try {
			std::cout << "Too much numbers -->" << std::endl;
			sp.addNumber(42);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			std::cout << "No shortest -->" << std::endl;
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			std::cout << "No longest -->" << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			std::cout << "Not enough numbers -->" << std::endl;
			Span sp = Span(1);
			sp.addNumber(42);
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

	}

	return 0;
}
