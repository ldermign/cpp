/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:14:38 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/23 14:08:32 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {

public:

	Bureaucrat( std::string, int);

	std::string			getName( void ) const;
	int					getGrade( void ) const;

	void				incrementGrade( int addGrade );
	void				decrementGrade( int delGrade );


	class Exception : std::exception {
	public:
		virtual const char	*what( void ) const throw() {
			return ("is too low");
		};	// ; ou pas, ca fonctionne ???
	};

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

	Bureaucrat( void );
	Bureaucrat &operator=( Bureaucrat const &rhs );
	Bureaucrat( Bureaucrat const &src );
	~Bureaucrat( void );


private:

	std::string	const	_name;
	int					_grade;

};


std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs );

#endif
