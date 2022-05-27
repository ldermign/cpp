/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 09:53:17 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/27 18:11:36 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class	Intern {

public:

	AForm	*makeForm( std::string nameForm, std::string target );

//	CANONICAL FORM

	Intern( void );
	Intern &operator=( Intern const &rhs );
	Intern( Intern const &src );
	~Intern( void );

//	EXCEPTIONS

	class FormNotFound : public std::exception {
	public:
		virtual const char	*what( void ) const throw() {
			return ("\033[38;5;124mThis form was not found: ");
		}	
	};

};

#endif