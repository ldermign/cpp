/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:10:41 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/23 14:34:48 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Form {

public:

	Form(std::string const name, bool signd);

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

// CANONICAL FORM

	Form( void ) : _gradeSigned(5), _gradeExecute(1) {};
	Form &operator=( Form const &rhs );
	Form( Form const &src );
	~Form( void ) {};

private:

	std::string const	_name;
	bool				_signed;
	int const			_gradeSigned;
	int const			_gradeExecute;

};

#endif