/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:52:42 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/07 10:18:24 by ldermign         ###   ########.fr       */
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
		std::cout << "Wrong grade for signing:" << std::endl;
		Form		notWorking("Destroy earth", -2, 8);
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	try {
		std::cout << "Wrong grade for execution:" << std::endl;
		Form		notWorking2("Destroy earth 2.0", 2, -8);	
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	try {
		std::cout << "Grade for signing is 0:" << std::endl;
		Form		notWorking3("Destroy earth 2.0", 0, 8);	
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	try {
		std::cout << "Grade for execution is 200:" << std::endl;
		Form		notWorking3("Destroy earth 2.0", 5, 200);	
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "--------------- Nothing ----------------" << std::endl;
	
	{
		Form		goodForm("Make Darude - Sandstorm mondial anthem", 1, 150);
		Bureaucrat	perfect("Mr. Goodenough", 1);
		std::cout << goodForm << perfect << std::endl;
		
		try {
			std::cout << "Grade to sign is 1 and execution is 150:" << std::endl;
			goodForm.beSigned(perfect);
			std::cout << goodForm << std::endl;
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "------------------" << std::endl;
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
			notGoodEnough.signForm(goodForm);
			std::cout << goodForm << std::endl;	//	not showing
		}
		catch (const std::exception &e) {
			std::cout << goodForm << std::endl;
			std::cerr << e.what() << "\n";
		}
		notGoodEnough.signForm(goodForm);	//	should try catch again
	}

	return 0;
}
