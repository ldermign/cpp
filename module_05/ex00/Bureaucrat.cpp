/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:06:05 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/22 14:40:33 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::string	Bureaucrat::getName( void ) const { return this->_name; }
int	Bureaucrat::getGrade( void ) const { return this->_grade; }



/*
**	CANONICAL FORM
*/

Bureaucrat::Bureaucrat( void ) {}

Bureaucrat &Bureaucrat::operator=( Bureaucrat const &rhs ) {
	
	if (&rhs != this) {}

	return *this;
	
}

Bureaucrat::Bureaucrat( Bureaucrat const &src ) {
	
	*this = src;
	
}

Bureaucrat::~Bureaucrat( void ) {}

/*
**	OPERATOR OVERLOAAD
*/

std::ostream &operator<<( std::ostream &o, Bureaucrat const &rhs ) {

	o << rhs.getName();
	return o;
}
