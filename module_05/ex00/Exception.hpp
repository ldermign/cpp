/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 14:35:16 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/22 14:38:06 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTION_HPP
# define EXCEPTION_HPP

#include <iostream>

class Exception {

public:

	Exception( void );
	~Exception( void );

private:

};

#endif

/*
Toute tentative d’instancier un Bureaucrat en utilisant un échelon invalide jettera une
exception :
Bureaucrat::GradeTooHighException ou Bureaucrat::GradeTooLowException.
*/