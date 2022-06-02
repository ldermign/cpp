/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 09:26:06 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/02 11:34:12 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"

void	AAnimal::makeSound( void ) const {
	
	std::cout << "An Animal is ready to make a sound..." << std::endl;
}

std::string	AAnimal::getType( void ) const {

	return this->type;
}

AAnimal::AAnimal( std::string newType ) {

	this->type = newType;
}

/*
**	CANONICAL FORM
*/

AAnimal::AAnimal( void ) : type("Animal") {

	std::cout << "There is a new Animal in this place" << std::endl;

}

AAnimal	&AAnimal::operator=( AAnimal const &rhs ) {

	if (&rhs != this)
		this->type = rhs.getType();

	return *this;

}

AAnimal::AAnimal( AAnimal const &src ) {

	*this = src;

}

AAnimal::~AAnimal( void ) {

	std::cout << "One less Animal" << std::endl;

}
