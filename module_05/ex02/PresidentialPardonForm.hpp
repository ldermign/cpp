/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:21:26 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/24 16:00:45 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public AForm {

public:

	PresidentialPardonForm( std::string const targ );

//	ACCESSOR

	std::string const	getTarget( void ) const;

//	CANONICAL FORM

	PresidentialPardonForm( void );
	PresidentialPardonForm &operator=( PresidentialPardonForm const &rhs );
	PresidentialPardonForm( PresidentialPardonForm const &src );
	~PresidentialPardonForm( void );

private:

	std::string const	_target;

};

#endif