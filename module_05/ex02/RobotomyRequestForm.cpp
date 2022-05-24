/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:16:40 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/24 16:02:48 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
 RobotomyRequestForm (formulaire de demande de robotomie) :
Échelons requis : signature 72, exécution 45
Fait des bruits de perceuse. Ensuite, informe que la <target> a été robotomisée
avec succès 50% du temps. Dans le cas contraire, informe que l’opération a échoué.
*/

RobotomyRequestForm::RobotomyRequestForm( std::string const targ )
	: AForm("RobotomyRequestForm", 75, 45), _target(targ) {

	std::cout << "*Drill noises*" << std::endl;
	std::cout << "BbbbBzZZZZZzzzzzzzzzz" << std::endl;
	std::cout << "RRRRRRRRRRRrrrrrrbbbbbbrrrZZZZZzzzzZzzzzz" << std::endl;
	
	if (rand() % 2 == 0)
		std::cout << this->getTarget() << " has been robotomised successfully" << std::endl;
	else
		std::cout << "Robotomisation failed for " << this->getTarget() << std::endl;

}

std::string const	RobotomyRequestForm::getTarget( void ) const {

	return this->_target;

}

/*
**	CANONICAL FORM
*/

RobotomyRequestForm::RobotomyRequestForm( void )
	: AForm("RobotomyRequestForm", 75, 45) {}

RobotomyRequestForm	&RobotomyRequestForm::operator=( RobotomyRequestForm const &rhs ) {

	if (&rhs != this)
		// this->_signed = rhs.getSigned();
	
	return *this;

}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &src )
	: AForm("RobotomyRequestForm", 75, 45), _target("") {

	*this = src;

}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}