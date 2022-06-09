/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:59:33 by ldermign          #+#    #+#             */
/*   Updated: 2022/06/02 11:23:15 by ldermign         ###   ########.fr       */
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

Cat::Cat( void ) : Animal("Cat") {

	std::cout << "One more Cat !" << std::endl;

}

Cat	&Cat::operator=( Cat const & rhs ) {

	if (&rhs != this)
		type = rhs.getType();

	return *this;

}

Cat::Cat( Cat const & src ) {

	*this = src;

}

Cat::~Cat( void ) {

	std::cout << "One of the Cats is gone" << std::endl;

}
