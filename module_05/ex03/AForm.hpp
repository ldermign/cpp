/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:10:41 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/25 14:24:52 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
class Bureaucrat;

#define GRADESIGNED 10
#define GRADEEXECUTE 5

class AForm {

public:

	AForm( std::string const name, int const gs, int const ge );

	void				beSigned( Bureaucrat const &rhs );

	void				execute( Bureaucrat const &executor ) const;

	virtual void		doIt( void ) = 0;

//	ACCESSORS

	std::string const	getName( void ) const;
	bool				getSigned( void ) const;
	int					getGradeSigned( void ) const;
	int 				getGradeExecute( void ) const;

//	EXCEPTIONS

	class GradeTooHighException : public std::exception {
	public:
		virtual const char	*what( void ) const throw() {
			return ("\033[38;5;124mGrade too high !\033[0m\n");
		}	
	};
	
	class GradeTooLowException : public std::exception {
	public:
		virtual const char	*what( void ) const throw() {
			return ("\033[38;5;124mGrade too low !\033[0m\n");
		}	
	};

	class WrongGradeInfo : public std::exception {
	public:
		virtual const char	*what( void ) const throw() {
			return ("\033[38;5;124mWrong entry grade\033[0m\n");
		}	
	};

	class BadFile : public std::exception {
	public:
		virtual const char	*what( void ) const throw() {
			return ("\033[38;5;124mWrong entry grade\033[0m\n");
		}	
	};

	class FormNotSigned : public std::exception {
	public:
		virtual const char	*what( void ) const throw() {
			return ("\033[38;5;124mCould not execute: Form not signed\033[0m\n");
		}	
	};

	class GradeTooLowExecute : public std::exception {
	public:
		virtual const char	*what( void ) const throw() {
			return ("\033[38;5;124mCould not execute: grade too low\033[0m\n");
		}	
	};

// CANONICAL FORM

	AForm( void );
	AForm &operator=( AForm const &rhs );
	AForm( AForm const &src );
	virtual ~AForm( void );

private:

	std::string const	_name;
	bool				_signed;
	int const			_gradeSigned;
	int const			_gradeExecute;

};

std::ostream &operator<<( std::ostream &o, AForm const &rhs );

#endif