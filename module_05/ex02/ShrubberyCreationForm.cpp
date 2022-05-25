/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:16:17 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/25 15:51:45 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string const targ )
	: AForm("ShrubberyCreationForm", 145, 137), _target(targ) {}

void	ShrubberyCreationForm::doIt( void ) {

	std::fstream tmp;
	std::string	ret = this->getTarget() + "_shrubbery";

	const char *new_file = ret.c_str();
	tmp.open(new_file, std::ios::out);
	if (tmp.fail()) {
        throw AForm::BadFile();
    }

	tmp << std::endl;
	tmp << "     *         ,@@@@@@@,     " << std::endl;
	tmp << "       ,,,.   ,@@@@@@/@@,  .oo8888o.    *" << std::endl;
	tmp << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	tmp << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	tmp << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	tmp << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	tmp << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	tmp << "       |o|        | |    *    | |" << std::endl;
	tmp << " *     |.|        | |         | |" << std::endl;
	tmp << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
	tmp << std::endl;
	
	std::cout << "Check the file " << new_file << " !" << std::endl;

	tmp.close();

}

std::string const	ShrubberyCreationForm::getTarget( void ) const {

	return this->_target;

}

/*
**	CANONICAL FORM
*/

ShrubberyCreationForm::ShrubberyCreationForm( void )
 	: AForm("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=( ShrubberyCreationForm const &rhs ) {

	if (&rhs != this) {}
		// this->_signed = rhs.getSigned();
	
	return *this;

}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &src )
	: AForm("ShrubberyCreationForm", 145, 137), _target("") {

	*this = src;

}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}