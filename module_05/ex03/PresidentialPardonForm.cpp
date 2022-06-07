/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:16:55 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/07 10:34:14 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string const targ )
	: AForm("PresidentialPardonForm", 25, 5), _target(targ) {}

void	PresidentialPardonForm::doIt( void ) {

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

	if (&rhs != this) {
		std::string	*ptr = (std::string*)(&this->_target);
		*ptr = rhs._target;
	}
	
	return *this;

}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &src )
	: AForm("PresidentialPardonForm", 25, 5), _target("") {

	*this = src;

}

PresidentialPardonForm::~PresidentialPardonForm( void ) {}