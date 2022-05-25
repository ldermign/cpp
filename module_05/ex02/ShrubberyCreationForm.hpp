/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:17:30 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/25 14:00:51 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm {

public:

	ShrubberyCreationForm( std::string const targ );

	void				doIt( void );

//	ACCESSOR

	std::string const	getTarget( void ) const;

//	CANONICAL FORM

	ShrubberyCreationForm( void );
	ShrubberyCreationForm &operator=( ShrubberyCreationForm const &rhs );
	ShrubberyCreationForm( ShrubberyCreationForm const &src );
	virtual	~ShrubberyCreationForm( void );

private:
	
	std::string const	_target;

};

#endif
