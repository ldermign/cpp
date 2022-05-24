/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:10:41 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/24 12:53:15 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

#define GRADESIGNED 10
#define GRADEEXECUTE 5

class Form {

public:

	Form( std::string const name, int const gs, int const ge );

	void	beSigned( Bureaucrat const &rhs );

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

// CANONICAL FORM

	Form( void );
	Form &operator=( Form const &rhs );
	Form( Form const &src );
	~Form( void );

private:

	std::string const	_name;
	bool				_signed;
	int const			_gradeSigned;
	int const			_gradeExecute;

};

std::ostream &operator<<( std::ostream &o, Form const &rhs );

#endif