/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:16:40 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/07 10:34:19 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string const targ )
	: AForm("RobotomyRequestForm", 75, 45), _target(targ) {}

void	RobotomyRequestForm::doIt( void ) {
	
	std::cout << "*Drill noises*" << std::endl;
	std::cout << "BbbbBzZZZZZzzzzzzzzzz" << std::endl;
	std::cout << "RRRRRRRRRRRrrrrrrbbbbbbrrrZZZZZzzzzZzzzzz" << std::endl;
	
	srand(time(NULL));
	
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

	if (&rhs != this) {
		std::string	*ptr = (std::string*)(&this->_target);
		*ptr = rhs._target;
	}
	
	return *this;

}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &src )
	: AForm("RobotomyRequestForm", 75, 45), _target("") {

	*this = src;

}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}