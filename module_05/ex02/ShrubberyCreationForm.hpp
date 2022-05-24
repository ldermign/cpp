/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:17:30 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/24 16:00:28 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public AForm {

public:

	ShrubberyCreationForm( std::string const targ );

//	ACCESSOR

	std::string const	getTarget( void ) const;

//	CANONICAL FORM

	ShrubberyCreationForm( void );
	ShrubberyCreationForm &operator=( ShrubberyCreationForm const &rhs );
	ShrubberyCreationForm( ShrubberyCreationForm const &src );
	~ShrubberyCreationForm( void );

private:
	
	std::string const	_target;

};

#endif