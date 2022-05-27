/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:10:20 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/25 16:10:26 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm( std::string const name, int const gs, int const ge ) 
	: _name(name), _signed(0), _gradeSigned(gs), _gradeExecute(ge) {

	if (gs <= 0 || gs > 150 || ge <= 0 || ge > 150)
		throw AForm::WrongGradeInfo();

}

void	AForm::beSigned( Bureaucrat const &rhs ) {
	
	if (rhs.getGrade() > this->getGradeSigned())
		throw AForm::GradeTooLowException();
	else
		this->_signed = 1;

}

void	AForm::execute( Bureaucrat const &executor ) const {

	if (this->getSigned() == 0)
		throw AForm::FormNotSigned();
	if (executor.getGrade() > this->getGradeExecute())
		throw AForm::GradeTooLowExecute();

	const_cast<Bureaucrat&>(executor).executeForm(*this);

}

/*
**	ACCESSORS
*/

std::string const	AForm::getName( void ) const {

	return this->_name;

}

bool	AForm::getSigned( void ) const {

	return this->_signed;

}

int	AForm::getGradeSigned( void ) const {

	return this->_gradeSigned;

}

int	AForm::getGradeExecute( void ) const {

	return this->_gradeExecute;

}

/*
**	CANONICAL FORM
*/

AForm::AForm( void ) : _name(""), _signed(0), _gradeSigned(GRADESIGNED), _gradeExecute(GRADEEXECUTE) {}

AForm	&AForm::operator=( AForm const &rhs ) {
	
	if (&rhs != this)
		this->_signed = rhs._signed;

	return *this;

}

AForm::AForm( AForm const &src ) : _gradeSigned(GRADESIGNED), _gradeExecute(GRADEEXECUTE) {

	*this = src;
	
}

AForm::~AForm( void ) {}


/*
**	OPERATOR OVERLOAAD
*/

std::ostream &operator<<( std::ostream &o, AForm const &rhs ) {

	o << "\033[38;5;240mForm available = [" << rhs.getName() 
		<< "] - Signed = [" << rhs.getSigned() 
		<< "] - Grade Signed = [" << rhs.getGradeSigned() 
		<< "] - Grade Execute = [" << rhs.getGradeExecute() 
		<< "]\033[0m" << std::endl;

	return o;
}
