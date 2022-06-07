/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:21:26 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/07 10:30:52 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm {

public:

	PresidentialPardonForm( std::string const targ );

	void				doIt( void );

//	ACCESSOR

	std::string const	getTarget( void ) const;

//	CANONICAL FORM

	PresidentialPardonForm( void );
	PresidentialPardonForm &operator=( PresidentialPardonForm const &rhs );
	PresidentialPardonForm( PresidentialPardonForm const &src );
	virtual	~PresidentialPardonForm( void );


private:

	std::string const	_target;

};

#endif
