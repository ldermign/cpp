/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:06:05 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/07 20:20:26 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string newName, int startingGrade ) : _name(newName), _grade(startingGrade) {

	if (startingGrade <= 0)
		throw Bureaucrat::GradeTooHighException();
	if (startingGrade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::string const	Bureaucrat::getName( void ) const {
	
	return this->_name;
	
}

int	Bureaucrat::getGrade( void ) const {
	
	return this->_grade;

}

void	Bureaucrat::incrementGrade( int addGrade ) {
	
	std::cout << "Starting incrementation of " << addGrade << "..." << std::endl;

	if (addGrade <= 0)
		throw Bureaucrat::GradeError();
	if (this->_grade - addGrade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade -= addGrade;

	if (this->getGrade() == 1)
		std::cout << "Bureaucrat " << this->getName() << " is a the highest grade : 1." << std::endl;
	else
		std::cout << "Bureaucrat " << this->getName() << " has evolved in his position. He's now at " << this->getGrade() << " grade." << std::endl;
	std::cout << std::endl;

}

void	Bureaucrat::decrementGrade( int delGrade ) {

	std::cout << "Starting decrementation of " << delGrade << "..." << std::endl;

	if (delGrade <= 0)
		throw Bureaucrat::GradeError();
	if (this->_grade + delGrade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade += delGrade;

	if (this->getGrade() == 150)
		std::cout << "Bureaucrat " << this->getName() << " is a the lowest grade : 150." << std::endl;
	else
		std::cout << "Bureaucrat " << this->getName() << " has been demoted in his position. He's now at " << this->getGrade() << " grade." << std::endl;
	std::cout << std::endl;

}

void Bureaucrat::signForm( AForm &rhs ) {

	try {
		rhs.beSigned(*this);
		std::cout << this->getName() << " signed " << rhs.getName() << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << this->getName() << " couldn't sign " << rhs.getName() << " because " << e.what() << std::endl;
	}
	
}

void	Bureaucrat::executeForm( AForm const &form ) {

	if (this->getGrade() > form.getGradeExecute()) {
		std::cout << this->getName() << " [" << this->getGrade()
			<< "] could not execute " << form.getName()
			<< " [" << form.getGradeExecute() 
			<< "] because he doesn't have an appropriate grade " 
			<< std::endl;
		throw AForm::GradeTooLowException();
	}
	
	const_cast<AForm&>(form).doIt();
	
	std::cout << this->getName() << " executed " << form.getName() << std::endl;

}

/*
**	CANONICAL FORM
*/

Bureaucrat::Bureaucrat( void ) : _name("Mr. No-Name"), _grade(150) {}

Bureaucrat &Bureaucrat::operator=( Bureaucrat const &rhs ) {
	
	if (&rhs != this)
		this->_grade = rhs.getGrade();

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

	o << "\033[38;5;240m" << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "\033[0m" << std::endl;

	return o;
}
