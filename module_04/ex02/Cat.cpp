/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:59:33 by ldermign          #+#    #+#             */
/*   Updated: 2022/05/19 15:16:25 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

void	Cat::makeSound( void ) const {
	
	std::cout << "Miaou." << std::endl;
}

Cat::Cat( std::string newType ) {
	
	type = newType;
}

/*
**	CANONICAL FORM
*/

Cat::Cat( void ) : AAnimal("Cat") {
	
	this->brainCat = new Brain();
	
	std::cout << "One more Cat !" << std::endl;

}

Cat	&Cat::operator=( Cat const &rhs ) {

	if (&rhs != this) {
		this->type = rhs.getType();
		*(this->brainCat) = *(rhs.brainCat);
	}

	return *this;

}

Cat::Cat( Cat const &src ) {

	this->brainCat = new Brain();
	
	*this = src;

}

Cat::~Cat( void ) {

	std::cout << "One of the Cats is gone" << std::endl;

	delete this->brainCat;

}
