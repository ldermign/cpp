/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 09:54:39 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/27 19:11:47 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>

AForm	*Intern::makeForm( std::string nameForm, std::string target ) {

	std::string	whichForm[4] = {"robotomy request", "shrubbery creation", "presidential pardon", ""};
	AForm	*thisOne[3] = {new RobotomyRequestForm(target), new ShrubberyCreationForm(target), new PresidentialPardonForm(target)};

	int	i = 0;
	try {
		while (i < 4) {
			if (whichForm[i] == nameForm)
				break ;
			i++;
		}
		if (i == 4 || nameForm == "") {
			for (int j = 0 ; j < 3 ; j++)
				delete thisOne[j];
			throw Intern::FormNotFound();
		}
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << nameForm << "\033[0m\n";
		return NULL;
	}
	int	j;
	for (j = 0 ; j != i ; j++)
		delete thisOne[j];
	j++;
	for (; j < 3 ; j++)
		delete thisOne[j];
	
	std::cout << "Intern creates " << nameForm << " form" << std::endl;
	
	return thisOne[i];

}

/*
**	CANONICAL FORM
*/

Intern::Intern( void ) {}

Intern &Intern::operator=( Intern const &rhs ) {

	if (&rhs != this) {}
	
	return *this;

}

Intern::Intern( Intern const &src ) {

	*this = src;

}

Intern::~Intern( void ) {}
