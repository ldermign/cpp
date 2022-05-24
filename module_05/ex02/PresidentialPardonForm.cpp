/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:16:55 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/24 16:04:44 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
PresidentialPardonForm (formulaire de pardon présidentiel) :
Échelons requis : signature 25, exécution 5
Informe que la <target> a été pardonnée par Zaphod Beeblebrox.
*/

PresidentialPardonForm::PresidentialPardonForm( std::string const targ )
	: AForm("PresidentialPardonForm", 25, 5), _target(targ) {

	std::cout << this->_target << " has been forgiven by Zaphod Beeblebrox" << std::endl;

}

std::string const	PresidentialPardonForm::getTarget( void ) const {

	return this->_target;

}

/*
**	CANONICAL FORM
*/

PresidentialPardonForm::PresidentialPardonForm( void )
	: AForm("PresidentialPardonForm", 25, 5) {}

PresidentialPardonForm	&PresidentialPardonForm::operator=( PresidentialPardonForm const &rhs ) {

	if (&rhs != this)
		// this->_signed = rhs.getSigned();
	
	return *this;

}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &src )
	: AForm("PresidentialPardonForm", 25, 5), _target("") {

	*this = src;

}

PresidentialPardonForm::~PresidentialPardonForm( void ) {}