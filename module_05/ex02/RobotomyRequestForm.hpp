/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:19:33 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/24 16:00:39 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public AForm {

public:

	RobotomyRequestForm( std::string const targ );

//	ACCESSOR

	std::string const	getTarget( void ) const;

//	CANONICAL FORM

	RobotomyRequestForm( void );
	RobotomyRequestForm &operator=( RobotomyRequestForm const &rhs );
	RobotomyRequestForm( RobotomyRequestForm const &src );
	~RobotomyRequestForm( void );

private:

	std::string const	_target;

};

#endif