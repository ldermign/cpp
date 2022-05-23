/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:52:42 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/23 14:19:53 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main( void ) {

	Bureaucrat	ok("Mr. Goodenough", 75);
	Bureaucrat	tooLow("Mr. Phil", 140);
	Bureaucrat	tooHigh("Mr. Daren", 10);
	Bureaucrat	no("Mr. Garbage", 25);

	std::cout << std::endl << "--------------- Nothing ----------------" << std::endl;
	try {
		std::cout << ok;			//	75
		ok.incrementGrade(25);
		std::cout << ok;			//	100
		ok.incrementGrade(10);
		std::cout << ok;			//	110
		ok.decrementGrade(40);
		std::cout << ok;			//	70
		ok.decrementGrade(20);
		std::cout << ok;			//	50
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "--------------- Too Low ----------------" << std::endl;
	try {
		std::cout << tooLow;			//	140
		tooLow.decrementGrade(10);
		std::cout << tooLow;			//	150
		tooLow.incrementGrade(5);
		std::cout << tooLow;			//	155
		tooLow.decrementGrade(20);
		std::cout << tooLow;			//	can't be seen
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "--------------- Too High ---------------" << std::endl;
	try {
		std::cout << tooHigh;			//	10
		tooHigh.incrementGrade(5);
		std::cout << tooHigh;			//	5
		tooHigh.incrementGrade(4);
		std::cout << tooHigh;			//	1
		tooHigh.decrementGrade(6);
		std::cout << tooHigh;			//	7
		tooHigh.incrementGrade(20);
		std::cout << tooHigh;			//	can't be seen
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "--------------- Invalid ----------------" << std::endl;
	try {
		std::cout << no;
		no.incrementGrade(-5);
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	try {
		std::cout << no;
		no.incrementGrade(0);
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}

	return 0;
}
