/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:10:20 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/24 13:56:08 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( std::string const name, int const gs, int const ge ) 
	: _name(name), _signed(0), _gradeSigned(gs), _gradeExecute(ge) {

	if (gs <= 0 || gs > 150 || ge <= 0 || ge > 150)
		throw Form::WrongGradeInfo();

}

void	Form::beSigned( Bureaucrat const &rhs ) {
	
	if (rhs.getGrade() > this->getGradeSigned())
		throw Form::GradeTooLowException();
	this->_signed = 1;
}

/*
**	ACCESSORS
*/

std::string const	Form::getName( void ) const {

	return this->_name;

}

bool	Form::getSigned( void ) const {

	return this->_signed;

}

int	Form::getGradeSigned( void ) const {

	return this->_gradeSigned;

}

int	Form::getGradeExecute( void ) const {

	return this->_gradeExecute;

}

/*
**	CANONICAL FORM
*/

Form::Form( void ) : _name(""), _signed(0), _gradeSigned(GRADESIGNED), _gradeExecute(GRADEEXECUTE) {}

Form	&Form::operator=( Form const &rhs ) {
	
	if (&rhs != this)
		this->_signed = rhs._signed;

	return *this;

}

Form::Form( Form const &src ) : _gradeSigned(GRADESIGNED), _gradeExecute(GRADEEXECUTE) {

	*this = src;
	
}

Form::~Form( void ) {}


/*
**	OPERATOR OVERLOAAD
*/

std::ostream &operator<<( std::ostream &o, Form const &rhs ) {

	o << "\033[38;5;240mForm available = [" << rhs.getName() 
		<< "] - Signed = [" << rhs.getSigned() 
		<< "] - Grade Signed = [" << rhs.getGradeSigned() 
		<< "] - Grade Execute = [" << rhs.getGradeExecute() 
		<< "]\033[0m" << std::endl;

	return o;
}
