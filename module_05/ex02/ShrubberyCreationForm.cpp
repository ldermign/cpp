/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:16:17 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/24 16:03:21 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include "ShrubberyCreationForm.hpp"

/*
ShrubberyCreationForm (formulaire de création d’arbustes) :
Échelons requis : signature 145, exécution 137
Créé un fichier <target>_shrubbery dans le répertoire courant, et écrit des arbres
ASCII à l’intérieur.
*/

ShrubberyCreationForm::ShrubberyCreationForm( std::string const targ )
	: AForm("ShrubberyCreationForm", 145, 137), _target(targ) {

	std::fstream tmp;
	std::string	new_file = targ + "_shrubbery";

	tmp.open(new_file, std::ios::out);
	if (tmp.fail()) {
        throw AForm::BadFile();
    }
	
	tmp << "	           ,@@@@@@@,";
	tmp << "       ,,,.   ,@@@@@@/@@,  .oo8888o.";
	tmp << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\88/8o";
	tmp << "   ,%&\%&&%&&%,@@@\@@@/@@@88\88888/88'";
	tmp << "   %&&%&%&/%&&%@@\@@/ /@@@88888\88888'";
	tmp << "   %&&%/ %&%%&&@@\ V /@@' `88\8 `/88'";
	tmp << "   `&%\ ` /%&'    |.|        \ '|8'";
	tmp << "       |o|        | |         | |";
	tmp << "       |.|        | |         | |";
	tmp << "    \\/ ._\//_/__/  ,\_//__\\/.  \_//__/_";

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

	if (&rhs != this)
		// this->_signed = rhs.getSigned();
	
	return *this;

}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &src )
	: AForm("ShrubberyCreationForm", 145, 137), _target("") {

	*this = src;

}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}