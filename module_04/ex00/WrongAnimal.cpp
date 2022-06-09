/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:14:14 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/02 11:26:39 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void	WrongAnimal::makeSound( void ) const {
	
	std::cout << "WrongAnimal here : someone's ready to be loud..." << std::endl;
}

std::string	WrongAnimal::getType( void ) const {

	return this->type;
}

WrongAnimal::WrongAnimal( std::string newType ) {

	this->type = newType;
}

/*
**	CANONICAL FORM
*/

WrongAnimal::WrongAnimal( void ) : type("WrongAnimal") {

	std::cout << "There is a new WrongAnimal in this place" << std::endl;

}

WrongAnimal	&WrongAnimal::operator=( WrongAnimal const &rhs ) {

	if (&rhs != this)
		this->type = rhs.getType();

	return *this;

}

WrongAnimal::WrongAnimal( WrongAnimal const &src ) {

	*this = src;

}

WrongAnimal::~WrongAnimal( void ) {

	std::cout << "One less WrongAnimal" << std::endl;

}
