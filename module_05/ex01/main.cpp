/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:52:42 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/24 14:05:29 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void ) {

	Bureaucrat	ok("Mr. Goodenough", 75);
	Bureaucrat	notGoodEnough("Mr. Proud", 140);

	std::cout << std::endl << "--------------- Wrong Form ---------------" << std::endl;

	try {
		Form		notWorking("Destroy earth", -2, 8);
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	try {
		Form		notWorking2("Destroy earth 2.0", 2, -8);	
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	try {
		Form		notWorking3("Destroy earth 2.0", 0, 8);	
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "--------------- Nothing ----------------" << std::endl;
	
	{
		Form		goodForm("Erase Global Warming", 15, 5);
		std::cout << goodForm << ok << std::endl;
		
		try {
			ok.incrementGrade(65);
			goodForm.beSigned(ok);
			std::cout << goodForm << std::endl;
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << "\n";
		}
	}

	std::cout << "--------------- Not signed ----------------" << std::endl;

	{
		Form		goodForm("Bring Dodo back", 7, 3);
		std::cout << goodForm << notGoodEnough << std::endl;;
		
		try {
			notGoodEnough.incrementGrade(50);
			goodForm.beSigned(notGoodEnough);
			std::cout << goodForm << std::endl;	//	not showing
		}
		catch (const std::exception &e) {
			std::cout << goodForm << std::endl;
			std::cerr << e.what() << "\n";
		}
	}

	return 0;
}
