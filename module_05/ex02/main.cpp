/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:52:42 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/27 09:51:15 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main( void ) {

	std::cout << "-------------------------------" << std::endl;
	
	{
		Bureaucrat					goodEnough("Mr. Goodenough", 75);
		PresidentialPardonForm		ZaphodPresident("Trillian");
		std::cout << ZaphodPresident << goodEnough << std::endl;
		try {
			goodEnough.incrementGrade(50);
			goodEnough.signForm(ZaphodPresident);
			std::cout << ZaphodPresident << goodEnough << std::endl;
			goodEnough.incrementGrade(20);
			ZaphodPresident.execute(goodEnough);
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << "\n";
		}
	}

	std::cout << std::endl << "-------------------------------" << std::endl;
	{
		Bureaucrat				goodEnough("Mr. Goodenough", 75);
		ShrubberyCreationForm	Fairies("woods");
		std::cout << Fairies << goodEnough << std::endl;
		try {
			goodEnough.decrementGrade(25);
			goodEnough.signForm(Fairies);
			Fairies.execute(goodEnough);
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << "\n";
		}
	}

	std::cout << std::endl << "-------------------------------" << std::endl;
	{
		Bureaucrat				goodEnough("Mr. Goodenough", 40);
		RobotomyRequestForm		RobotRobotomised("Marvin");
		std::cout << RobotRobotomised << goodEnough << std::endl;
		try {
			goodEnough.signForm(RobotRobotomised);
			std::cout << RobotRobotomised << std::endl;
			RobotRobotomised.execute(goodEnough);
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << "\n";
		}
	}

	
	{
		std::cout << std::endl << "--------------- Not High Enough To Sign ---------------" << std::endl;

		Bureaucrat				notGoodEnough("Mr. Proud", 140);
		PresidentialPardonForm	ZaphodPresident("Slartibartfast");

		notGoodEnough.signForm(ZaphodPresident);
	}

	{
		std::cout << std::endl << "--------------- Not Signed ---------------" << std::endl;

		Bureaucrat				notGoodEnough("Mr. Proud", 140);
		PresidentialPardonForm	ZaphodPresident("Slartibartfast");
		
		try {
			ZaphodPresident.execute(notGoodEnough);
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << '\n';
		}
	}

	{
		std::cout << std::endl << "--------------- Not High Enough To Execute ---------------" << std::endl;

		Bureaucrat				notGoodEnough("Mr. Proud", 25);
		PresidentialPardonForm	ZaphodPresident("Slartibartfast");
		
		try {
			notGoodEnough.signForm(ZaphodPresident);
			ZaphodPresident.execute(notGoodEnough);
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << '\n';
		}
	}
	
	{
		std::cout << std::endl << "--------------- Not Signed And Not High Enough To Execute ---------------" << std::endl;

		Bureaucrat				notGoodEnough("Mr. Proud", 25);
		PresidentialPardonForm	ZaphodPresident("Slartibartfast");
		
		try {
			ZaphodPresident.execute(notGoodEnough);
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << '\n';
		}
	}

	return 0;
}
